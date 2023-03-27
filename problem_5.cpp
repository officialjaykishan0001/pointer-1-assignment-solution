#include<iostream>
using namespace std;

int main()
{
    string a = "twitter";

    char checkOccerense ='t';
    char first ,second;
    int occur = 0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==checkOccerense)
        {
            occur = i;
        }
        if(i==0)
        {
            first = a[i];

        }
        if(i==(a.size()-1))
        {
            second = a[i];
        }
    }

cout<<"the occurense of t is : "<<(occur)<<endl;
cout<<"the first letter of the string is : "<<first<<endl;
cout<<"the second letter of the string is : "<<(second)<<endl;
return 0;

}