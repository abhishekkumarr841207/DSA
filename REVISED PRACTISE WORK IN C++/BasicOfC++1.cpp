#include<iostream>
using namespace std;
int main()
{
    int E,M,H,S,C,total,percentage;
    cout<<"Enter the number of Subject English:";
    cin>>E;
    cout<<"Enter the number of subject Math:";
    cin>>M;
    cout<<"Enter the number of subject Hindi:";
    cin>>H;
    cout<<"Enter the number of subject Science:";
    cin>>S;
    cout<<"Enter the number of subject Computer:";
    cin>>C;
    total=E+M+H+S+C;
    cout<<"Total Marks="<<total<<endl;
    percentage=(total*100)/500;
    cout<<"percentage Marks="<<percentage<<endl;

    return 0;
}