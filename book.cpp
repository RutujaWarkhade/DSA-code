#include<iostream>
using namespace std;

struct book{
    
    string name;
    string author;
    int price;
    
};

int main()
{
struct book a[10],b[10] ;
int n,i,j,temp,count=0,k;
cout<<"enter the number of books";
cin>>n;


cout<<"enter the name of books";
for(i=0;i<n;i++)
{
    cin>>a[i].name;
}

cout<<"enter the author of books";
for(i=0;i<n;i++)
{
    cin>>a[i].author;
}

cout<<"enter the price of books";
for(i=0;i<n;i++)
{
    cin>>a[i].price;
}


for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j].price>a[j+1].price)
        {
            temp=a[j].price;
            a[j].price=a[j+1].price;
            a[j+1].price=temp;
            
        }
        
    }
}

cout<<"the sorted price is"<<endl;
cout<<"name\tauthor\tprice"<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i].name<<"\t"<<a[i].author<<"\t"<<a[i].price<<endl;
}

for(i=0;i<n;i++)
{
    if(a[i].price<500)
    {
        temp=a[i].price;
        b[i].price=temp;
        count++;
        
    }
}

cout<<"Number of books which has price less than 500 are"<<endl;
cout<<"name\tauthor\tprice"<<endl;
for(i=0;i<count;i++)
{
    cout<<a[i].name<<"\t"<<a[i].author<<"\t"<<a[i].price<<endl;
}



for(i=0;i<n;i++)
{
    if(a[i].price!=a[i-1].price)
    {
        a[k].price=a[i].price;
        k++;
    }
}


cout<<"not repeated price books are"<<endl;
cout<<"name\tauthor\tprice"<<endl;
for(i=0;i<k;i++)
{
    cout<<a[i].name<<"\t"<<a[i].author<<"\t"<<a[i].price<<endl;
}


return 0;
}