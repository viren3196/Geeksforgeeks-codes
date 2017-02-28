#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   int low,high,mid,flag=1;
   low=0;
   high=n-1;
   while(low<=high)
   {
      mid=(low+high)/2;
      if(a[mid]==mid)
      {
         cout<<mid;
         flag=0;
         break;
      }
      else if(a[mid]>mid)
      {
         high=mid-1;
      }
      else
      {
         low=mid+1;
      }
   }
   if(flag)
      cout<<"-1";
   return 0;
}
