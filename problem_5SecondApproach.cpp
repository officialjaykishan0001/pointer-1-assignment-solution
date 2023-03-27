#include<iostream>
using namespace std;
void findLastAndFirstLetterAndCount(string s,char *first,char *last,int *count)
{
    *first = s[0];
    *last = s[s.size()-1];
    int tell = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='t')
        {
            tell ++;
        }
    }

    *count = tell;
}
int main()
{
    string s;
    cin>>s;


    char first;
    char last ;

    int count;


    findLastAndFirstLetterAndCount(s,&first,&last,&count);

    cout<<"first and last letters are : "<<(first)<<" "<<(last)<<endl;
    cout<<"the occureness of t : "<<(count)<<endl;


}