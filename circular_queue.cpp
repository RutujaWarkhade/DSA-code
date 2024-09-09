#include<iostream>
using namespace std;
int queue[30];
int front=-1;
int rear=-1,ele;

void enqueue(int ele, int n)
{
if(rear==-1 && front==-1)
{
rear=0;
front=0;
queue[rear]=ele;
}
else if((rear+1)%n==front)
{
cout<<"circular queue is full"<<endl;
}
else
{
rear=(rear+1)%3;
queue[rear]=ele;
}
}

void dequeue(int n)
{
if(rear==-1 && front==-1)
{
cout<<"circular queue is empty"<<endl;
}
else if(rear==front)
{
cout<<"deleted ele is "<<queue[front];
rear=-1;
front=-1;
}
else
{
ele=queue[front];
cout<<"deleted ele is "<<queue[front]<<endl;
front = (front+1)%n;
}

}


void display(int n)
{
int i;
if(rear==-1 && front==-1)
{
cout<<"queue is empty"<<endl;
}
else
{

i=front;
while(i!=rear)
{
cout<<queue[i]<<endl;
i=(i+1)%n;
}
cout<<queue[rear]<<" "<<endl;
}}

int main()
{
int ch,t,n,ele;
cout<<"enter the size of queue"<<endl;
cin>>n;
do
{

cout<<"1.enqueue\n2.dequeue\n3.display\n"<<endl;
cin>>ch;
switch(ch)
{

case 1:cout<<"enqueue"<<endl;
	cout<<"enter element"<<endl;
	cin>>ele;
	enqueue(ele,n);
break;
case 2:cout<<"dequeue"<<endl;
dequeue(n);
break;
case 3:cout<<"display"<<endl;
display(n);
break;
default:
cout<<"wrong choice"<<endl;
break;
}
cout<<"do you want continue press 1"<<endl;
cin>>t;
}while(t==1);
}






