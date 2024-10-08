#include <iostream>
#include <cstring>
using namespace std;

int stack[10];
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    return stack[top--];
}

int precedence(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int i;
    char a[10];  
    cout<<"Enter the Infix Expression: ";
    cin>> a;  
    cout<<"The Postfix Expression is: ";
    for (i = 0; i <strlen(a); i++) 
    {
        char c = a[i];
        if (precedence(c) > 0) 
        {
            while (top != -1 && precedence(stack[top]) >= precedence(c)) 
            {
                cout<< pop();
            }
            push(c);
        }
        else if (c == '(')
        {
            push(c);
        }
        else if (c == ')')
        {  
            char x = pop();
            while (x != '(') {
                cout<< x;
                x = pop();
            }
        } 
        else
        {
            cout<<c;
        }
    }
    while (top != -1) 
    {
        cout<<pop();
    }
    return 0;
}