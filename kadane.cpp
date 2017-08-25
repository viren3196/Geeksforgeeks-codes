#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void kadane(vector<int> &v)
{
    int max_ending_here=0 , max_so_far=0;
    for(int i=0 ; i<v.size() ; i++)
    {
        max_ending_here+=v[i];
        if(max_ending_here<0)
            max_ending_here = 0;
        max_so_far = max(max_so_far,max_ending_here);
    }
    cout<<max_so_far<<endl;
}

int main()
 {
	int t,n,dummy;
        cin>>t;
        while(t--)
        {
            vector<int> v;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cin>>dummy;
                v.push_back(dummy);
            }
            kadane(v);
        }
	return 0;
}
