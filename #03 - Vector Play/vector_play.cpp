#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vector1, vector2;
    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"Vector 1: ";
    for(int i=0;i<vector1.size();i++)
    {
        cout<<vector1.at(i)<<" ";
    }
    cout<<endl<<"Size of vector 1: "<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"Vector 2: ";
    for(int i=0;i<vector2.size();i++)
    {
        cout<<vector2.at(i)<<" ";
    }
    cout<<endl<<"Size of vector 2: "<<vector2.size()<<endl;

    vector<vector<int>>vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<endl<<"Vector 2D: ";
    for(int i=0;i<vector_2d.size(); i++)
    {
        cout<<endl;
        for(int j=0;j<vector_2d[i].size();j++)
        {
            cout<<vector_2d.at(i).at(j)<<" ";
        }
    }

    vector1.at(0) = 1000;

    cout<<endl<<endl<<"New Vector 2D: ";
    for(int i=0;i<vector_2d.size(); i++)
    {
        cout<<endl;
        for(int j=0;j<vector_2d[i].size();j++)
        {
            cout<<vector_2d.at(i).at(j)<<" ";
        }
    }


    cout<<endl<<endl<<"New Vector 1: ";
    for(int i=0;i<vector1.size();i++)
    {
        cout<<vector1.at(i)<<" ";
    }
}
