#include<iostream>
using namespace std;
int main()
 {
	int t;
        cin>>t;
        while(t--)
        {
           int n, major, mxcnt=1, cnt=1;

           cin>>n;
           int a[n];
           cin>>a[0];
           major = a[0];

           for(int i=1;i<n;i++)
           {
              cin>>a[i];
              if(i>0 && a[i]==a[i-1])
              {
                  cnt++;
                  if(cnt>=mxcnt)
                  {
                    mxcnt = cnt;
                    major = a[i];
                  }
              }
              else
                  cnt=1;
           }

           cnt=0;
           for(int i=0;i<n;i++)
               if(a[i]==major)
                cnt++;

           if(cnt>n/2)
            cout<<major<<endl;
           else
            cout<<"NO Majority Element\n";
        }
    	return 0;
}
