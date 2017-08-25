#include<iostream>
#include<map>
#include<stack>
using namespace std;
int main()
 {
	int t;
	map<char,char>m;
	m[')'] = '(';
	m['}'] = '{';
	m[']'] = '[';
        cin>>t;
        while(t--)
        {
            stack<char>st;
            string n;
            cin>>n;
            for(int i=0;n[i];i++)
            {
                if(n[i]=='(' || n[i]=='{' || n[i]=='[')
                    st.push(n[i]);
                else if(st.empty()==0)
                {
                    if(st.top() == m[n[i]])
                        st.pop();
                    else
                        break;
                }
                else
                {
                    st.push(n[i]);
                    break;
                }
            }
            if(st.empty()==0)
                cout<<"not balanced\n";
            else
                cout<<"balanced\n";
        }
	return 0;
}
