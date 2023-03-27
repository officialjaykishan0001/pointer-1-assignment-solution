#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;

    int *ptr = &n;

    cout<<"the memory address of the given variable is : "<<(ptr)<<endl;

    return 0;
}