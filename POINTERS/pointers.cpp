#include<iostream>
using namespace std;
int main()
{
    int x=19;
    float y=7.8;

    //create a pointer that can store address of x;
    // as x is an integer variable,so we need a pointer
    //that can store address of integer type
    int *ptr=&x;
    cout<<ptr<<"\n";
    //create a pointer that can store address of y;
    // as x is an integer variable,so we need a pointer
    //that can store address of float type
 float *ptrf=&y;
    cout<<ptr<<"\n";
    return 0;
}