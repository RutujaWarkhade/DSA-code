#include<iostream>
#define maxsize 20
using namespace std;
int rear=-1;
int front=-1;
int queue[maxsize],ele,n;

void enqueue(int n)
{

if(rear==maxsize-1)
{
cout<<"queue is full"<<endl;

}
else
{

rear++;
cout<<"enter the element"<<endl;
cin>>ele;
queue[rear]=ele;
}

}

void dequeue()
{
if(rear==-1 && front==-1)
{
cout<<"queue is empty"<<endl;
}
else
{
front++;
ele=queue[front];
cout<<"deleted ele is"<<ele<<endl;
}
}


void display()
{
int i;
if(rear==front)
{
cout<<"queue is empty"<<endl;
}
else
{
for(i=front+1;i<=rear;i++)
{
cout<<queue[i]<<endl;
}
}


}

int main()
{
int ch,t,n;
cout<<"enter the size of array"<<endl;
cin>>n;
do
{

cout<<"1.enqueue\n2.dequeue\n3.display\n"<<endl;
cin>>ch;
switch(ch)
{

case 1:cout<<"enqueue"<<endl;
enqueue(n);
break;
case 2:cout<<"dequeue"<<endl;
dequeue();
break;
case 3:cout<<"display"<<endl;
display();
break;
default:
cout<<"wrong choice"<<endl;
break;
}
cout<<"do you want continue press 1"<<endl;
cin>>t;
}while(t==1);
}


