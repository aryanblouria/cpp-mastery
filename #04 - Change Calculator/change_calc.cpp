#include <iostream>
using namespace std;

int main()
{
    int cents = 0;
    cout<<"Enter no. of cents: ";
    cin>>cents;

    int dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    dollars = cents/100;
    cents %= 100;
    quarters = cents/25;
    cents %= 25;
    dimes = cents/10;
    cents %= 10;
    nickels = cents/5;
    cents %= 5;
    pennies = cents;

    cout<<endl<<"Change: "<<endl;
    cout<<"Dollars: "<<dollars<<endl;
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"Nickels: "<<nickels<<endl;
    cout<<"Pennies: "<<pennies<<endl;
    return 0;
}
