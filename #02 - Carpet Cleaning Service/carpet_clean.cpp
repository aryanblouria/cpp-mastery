#include <iostream>
using namespace std;

int main()
{
    const int small_price = 25, large_price = 35;
    const double taxRate = 0.06;
    int ns, nl, cost;
    double tax, total;

    cout<<"Aryan's Carpet Cleaning Service"<<endl;
    cout<<"Enter number of small rooms: ";
    cin>>ns;
    cout<<"Enter number of large rooms: ";
    cin>>nl;

    cost = small_price*ns + large_price*nl;
    tax = cost*taxRate;
    total = cost + tax;

    cout<<endl<<endl<<"Estimate for service: "<<endl;
    cout<<"Number of small rooms: "<<ns<<endl;
    cout<<"Number of large rooms: "<<nl<<endl;
    cout<<"Price per small room: "<<small_price<<endl;
    cout<<"Price per large room: "<<large_price<<endl;
    cout<<"Cost: "<<cost<<endl;
    cout<<"Tax: "<<tax<<endl;
    cout<<"Total Estimate: "<<total;
    return 0;
}
