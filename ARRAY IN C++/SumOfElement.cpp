#include<iostream>
using namespace std;
int main ()
{
    int i, array[5]={5,3,3,5,5};
    int sum=0;
    for (i=0;i<5;i++){
        sum+=array[i];
    }
    cout<<sum<<endl;

    return 0;
}

