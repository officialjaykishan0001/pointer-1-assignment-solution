#include<iostream>
using namespace std;

void print_greatest_and_smallest(int *ptr_x,int *ptr_y,int *ptr_z)
{
    if(*ptr_x > (*ptr_y))
    {
        if((*ptr_x)>(*ptr_z))
        {
            if((*ptr_y)>(*ptr_z))
            {
                cout<<(*ptr_x)<<" "<<(*ptr_z);
            }
            else{
                cout<<(*ptr_x)<<" "<<(*ptr_y);
            }
        }
        else 
        {
            cout<<(*ptr_z)<<" "<<(*ptr_y);
        }
    }
    else if((*ptr_y)>(*ptr_x))
    {
        if((*ptr_y)>(*ptr_z))
        {
            if((*ptr_x)>(*ptr_z))
            {
                cout<<(*ptr_y)<<" "<<(*ptr_z);
            }
            else{
                cout<<(*ptr_y)<<" "<<(*ptr_x);
            }
        }
        else{
            cout<<(*ptr_z)<<" "<<(*ptr_x);
        }
    }

    cout<<endl;

    return ;
}
int main()
{
    int x,y,z;

    cout<<"enter the first number : ";
    cin>>x;
    
    cout<<"enter the second number : ";
    cin>>y;

    cout<<"enter the third number : ";
    cin>>z;

    print_greatest_and_smallest(&x,&y,&z);

    return 0;
}