#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

void vector_setup(vector<int> &nums)
{
    int n = 0, ele = 0;
    cout<<"The list is currently empty."<<endl;
    cout<<"How many elements do you want to fill in the list: ";
    cin>>n;
    if(n!=0)
    {
        cout<<endl<<"Enter "<<n<<" elements: "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"Element #"<<i+1<<": ";
            cin>>ele;
            nums.push_back(ele);
        }
    }
}

void display_menu()
{
    cout<<endl<<"List Operations Menu"<<endl;
    cout<<"===================="<<endl<<endl;
    cout<<"P - Print Numbers"<<endl;
    cout<<"A - Add Numbers"<<endl;
    cout<<"M - Get Mean of Numbers"<<endl;
    cout<<"S - Get Smallest Number"<<endl;
    cout<<"L - Get Largest Number"<<endl;
    cout<<"Q - Quit"<<endl<<endl;
}

void print_numbers(vector<int> &nums)
{
    cout<<endl<<"The list is: [ ";
    for (int i = 0; i < nums.size(); i++)
        cout<<nums[i]<<" ";
    cout<<"]"<<endl;
}

void add_number(vector<int> &nums)
{
    int add_num = 0;
    cout<<endl<<"Enter integer you would like to add to list: ";
    cin>>add_num;
    nums.push_back(add_num);
    cout<<"Integer added"<<endl;
}

void get_mean(vector<int> &nums)
{
    int sum = 0;
    double mean = 0;
    for (int i = 0; i < nums.size(); i++)
        sum += nums[i];
    mean = static_cast<double>(sum)/nums.size();
    cout<<endl<<"Mean of list elements: "<<mean<<endl;
}

void get_min(vector<int> &nums)
{
    int smallest = nums[0];
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] < smallest)
            smallest = nums[i];
    cout<<endl<<"Smallest list element: "<<smallest<<endl;
}

void get_max(vector<int> &nums)
{
    int largest = nums[0];
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] > largest)
            largest = nums[i];
    cout<<endl<<"Largest list element: "<<largest<<endl;
}

void select_operation(vector<int> &nums, bool &quit)
{
    char choice;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
        {
            case 'p':
            case 'P':
                print_numbers(nums);
                break;
            case 'a':
            case 'A':
                add_number(nums);
                break;
            case 'm':
            case 'M':
                get_mean(nums);
                break;
            case 's':
            case 'S':
                get_min(nums);
                break;
            case 'l':
            case 'L':
                get_max(nums);
                break;
            case 'q':
            case 'Q':
                quit = true;
                break;
            default:
                cout<<"Invalid input."<<endl;
        }
}

int main()
{
    vector<int>nums = {};
    bool quit = false;

    vector_setup(nums);
    do
    {
        display_menu();
        select_operation(nums, quit);
    }
    while (!quit);

    return 0;
}
