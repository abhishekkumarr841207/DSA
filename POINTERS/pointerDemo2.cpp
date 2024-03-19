#include<iostream>
using namespace std;
int main()
{
    int x=19;
    float y=7.8;

    
    int *ptr=&x;
    cout<<*ptr<<"\n"; // value store in check address//Dereference Operator=Symbol=*
    
 float *ptrf=&y;
    cout<<*ptr<<"\n";//value store in check address
    return 0;
}