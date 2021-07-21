#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
    vector<int>nums = {};
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

    int add_num = 0, sum = 0, smallest = 0, largest = 0;
    double mean = 0;
    char choice;
    bool quit = false;

    cout<<endl<<"List Operations Menu"<<endl;
    cout<<"===================="<<endl<<endl;

    do
    {
        cout<<"P - Print Numbers"<<endl;
        cout<<"A - Add Numbers"<<endl;
        cout<<"M - Get Mean of Numbers"<<endl;
        cout<<"S - Get Smallest Number"<<endl;
        cout<<"L - Get Largest Number"<<endl;
        cout<<"Q - Quit"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 'p':
            case 'P':
                cout<<endl<<"The list is: [ ";
                for (int i = 0; i < nums.size(); i++)
                    cout<<nums[i]<<" ";
                cout<<"]"<<endl;
                break;
            case 'a':
            case 'A':
                cout<<endl<<"Enter integer you would like to add to list: ";
                cin>>add_num;
                nums.push_back(add_num);
                cout<<"Integer added"<<endl;
                break;
            case 'm':
            case 'M':
                for (int i = 0; i < nums.size(); i++)
                    sum += nums[i];
                mean = static_cast<double>(sum)/nums.size();
                cout<<endl<<"Mean of list elements: "<<mean<<endl;
                break;
            case 's':
            case 'S':
                smallest = nums[0];
                for (int i = 0; i < nums.size(); i++)
                    if (nums[i] < smallest)
                        smallest = nums[i];
                cout<<endl<<"Smallest list element: "<<smallest<<endl;
                break;
            case 'l':
            case 'L':
                largest = nums[0];
                for (int i = 0; i < nums.size(); i++)
                    if (nums[i] > largest)
                        largest = nums[i];
                cout<<endl<<"Largest list element: "<<largest<<endl;
                break;
            case 'q':
            case 'Q':
                quit = true;
                break;
            default:
                cout<<"Invalid input."<<endl;
        }
        cout<<endl<<"===================="<<endl<<endl;
   } while (!quit);

   return 0;
}
