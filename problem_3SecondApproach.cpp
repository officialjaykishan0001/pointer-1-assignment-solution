#include<iostream>
using namespace std;

int findSmallest(int x,int y,int z,int *largest)
{
    *largest = max(x,max(y,z));
    return min(x,min(y,z));
}

int main()
{
    int x,y,z;

    cout<<"enter the value of the first number : ";
    cin>>x;

    
    cout<<"enter the value of the second number : ";
    cin>>y;
    
    cout<<"enter the value of the third number : ";
    cin>>z;

    int largest ;
    int smallest = (findSmallest(x,y,z,&largest));

    cout<<endl<<"the smallest number is  : "<<(smallest)<<endl;
    cout<<endl<<"the greatest number is : "<<(largest)<<endl;

    return 0;
}