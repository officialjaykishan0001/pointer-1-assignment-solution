#include<iostream>
using namespace std;

int main()

{
    int n;
    cout<<"enter the first number : ";
    cin>>n;
    int m;
    cout<<"enter the second number : ";
    cin>>m;

    int *ptr_1 = &n;//this pointer points the address of the variable n .
    int *ptr_2 = &m;// this pointer points the address of the variable m.


    //let get the product using the address of the both variables.


    int product = (*ptr_1)*(*ptr_2);

    cout<<endl<<"the product of the variable is : "<<product<<endl;

    return 0;


}