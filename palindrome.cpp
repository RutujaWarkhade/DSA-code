#include<iostream>
#include<cstring>
using namespace std;
int stack[20];
int top=-1, flag=0;

void push(int num)
{
top++;
stack[top]=num;

}

int pop()
{
return stack[top--];
}

void palindrome(char a[])
{
int i,l;
l=strlen(a);
for(i=0;i<l;i++)
{
push(a[i]);
}
for(i=0;i<l;i++)
{
if(pop()!=a[i])
{
flag=1;
break;
}
}

if(flag==1)
{
cout<<"it is not palindrome"<<endl;
}

else
{
cout<<"it is palindrome"<<endl;
}

}

int main()
{
char a[20],c;
int i,l;
cout<<"Enter string:";
cin.getline(a,20);//getline function take statement
palindrome(a);
return 0;

}















