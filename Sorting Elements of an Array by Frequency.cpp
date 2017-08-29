#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

bool cmp(pair<int,int>&p1 , pair<int,int>&p2)
{
    if(p1.second==p2.second)    
        return (p1.first<p2.first);
    return (p1.second>p2.second);
}

int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            map<int,int>m;
            cin>>n;
            int x;
            for(int i=0;i<n;i++)
            {
                cin>>x;
                m[x]++;
            }
            int s = m.size();
            pair<int,int>p[s];
            int k=0;
            for(auto i : m)
                p[k++] = make_pair(i.first,i.second);
            
            sort(p,p+s,cmp);
            for(int i=0;i<s;i++)
            {
                int freq = p[i].second;
                while(freq--)
                    cout<<p[i].first<<" ";
            }
            cout<<endl;
        }
	return 0;
}
