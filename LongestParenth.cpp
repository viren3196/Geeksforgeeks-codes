#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t, result;
	string str;
	cin>>t;
	while(t--)
	{
	    result=0;
	    cin>>str;
	    stack<int>s;
	    s.push(-1);
	    for(int i=0;str[i];i++)
	    {
	        if(str[i]=='(')
	        {
	            s.push(i);
	        }
	        else
	        {
	            s.pop();
	            if(!s.empty())
	            {
    	            result = max(result,i-s.top());
	            }
	            else
	            {
	                s.push(i);
	            }
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}
