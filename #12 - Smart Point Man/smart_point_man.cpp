#include<iostream>
#include<memory>
#include<vector>
using namespace std;

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args)
{
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

class Test
{
    private:
        int data;
    public:
        Test(): data {0}
        {
            cout<<"Test Constructor ("<<data<<")"<<endl;
        }

        Test(int data): data {data}
        {
            cout<<"Test Constructor ("<<data<<")"<<endl;
        }

        int get_data() const
        {
            return data;
        }

        ~Test()
        {
            cout<<"Test Destructor ("<<data<<")"<<endl;
        }
};

unique_ptr<vector<shared_ptr<Test>>> make()
{
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num)
{
    int temp;
    for (int i = 1;  i <= num; i++)
    {
        cout<<"Enter data point [" << i << "]: ";
        cin>>temp;
        vec.push_back(make_shared<Test>(temp));
    }
}

void display(const vector<shared_ptr<Test>> &vec)
{
    cout<<"Displaying vector data"<<endl;
    for (const auto &ptr: vec)
    {
        cout<< ptr->get_data() <<endl;
    }
}


int main()
{
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();

    cout<<"How many data points do you want to enter: ";
    int num;
    cin>>num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}
