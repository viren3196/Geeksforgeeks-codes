#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int getmin(stack<int> &s)
{
    int temp = s.top();
    s.pop();
    if(s.empty()==0)
        return  min(temp,getmin(s));
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(511);
    s.push(42);
    s.push(3);
    s.push(21);
    s.push(15);
    
    cout<<getmin(s);
    return 0;
}
