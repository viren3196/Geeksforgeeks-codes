#include<iostream>
#include<stack>
#include<map>
using namespace std;

bool isalphanum(char ch)
{
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>=48 && ch<=57) )
        return true;
    return false;
}

void topost(string str, map<char,int>&precedence)
{
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        if(isalphanum(str[i]))
        {
            cout<<str[i];
        }
        else
        {
            if(s.empty()==1 || str[i]=='(')
                s.push(str[i]);
            else if(str[i]==')')
            {
                while(s.top()!='(')
                {
                    cout<<s.top();
                    s.pop();
                }
                s.pop();
            }
            else if(precedence[str[i]] > precedence[s.top()] )
                s.push(str[i]);
            else
            {
                cout<<s.top();
                s.pop();
                if(!s.empty())
                {
                    while(precedence[str[i]] <= precedence[s.top()] )
                    {
                        cout<<s.top();
                        s.pop();
                        if(s.empty())
                            break;
                    }
                }
                s.push(str[i]);
            }
        }
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}

int main()
 {
     map<char,int> precedence;
     precedence['^'] = 3;
     precedence['*'] = 2;
     precedence['/'] = 2;
     precedence['+'] = 1;
     precedence['-'] = 1;

	int t;
	string str;
        cin>>t;
        while(t--)
        {
            cin>>str;
            topost(str,precedence);
        }
	return 0;
}
