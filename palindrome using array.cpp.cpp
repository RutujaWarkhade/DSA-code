#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[20];
    int i,r,l,flag=0;
    cout<<"enter name"<<endl;
    cin>>name;
    r=0;
    l=strlen(name)-1;
    while(r<l)
    {
        if (name[r]!=name[l])
        {
        flag=1;
        }
        r++;
        l--;
    }
    if(flag==1)
    {
        printf("string is not palindrome");
    }
    else
        {
            printf("string is palindrome");
        }
    return 0;
}