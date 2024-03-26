#include<iostream>
using namespace std;
int main()
{
    int marks[9]={12,13,14,35,16,17,18,19,20};
    cout<<"roll number : ";
    for(int i=0;i<9;i++)
    {
        if(marks[i]<18)
        {
            cout<<i+1<<",";
        }
    }
}