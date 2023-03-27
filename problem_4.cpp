#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter the first number : ";
    cin>>x;

    cout<<"enter the second number : ";
    cin>>y;

    int *ptr_x = &x;
    int *ptr_y = &y;

    int swap = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = swap;

   
    cout<<"the value is swaped : "<<(x)<<"  :  "<<(y)<<endl;
    return 0;
}