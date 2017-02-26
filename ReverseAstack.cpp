#include <iostream>
#include <stack>
using namespace std;

void insertatbottom(stack<int>&s, int val)
{
    if(s.empty())
    {
        s.push(val);
    }
    else
    {
        int temp=s.top();
        s.pop();
        insertatbottom(s,val);
        s.push(temp);
    }
}

void reverse(stack<int> &s)
{
    if(s.empty())
        return;
    int temp = s.top();
    s.pop();
    reverse(s);
    insertatbottom(s,temp);
}

void display(stack<int>&s)
{
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}

int main() {
	stack<int> s;
	for(int i=1;i<=5;i++)
	    s.push(i);
	reverse(s);
	display(s);
	return 0;
}
