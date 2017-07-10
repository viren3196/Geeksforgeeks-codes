#include<iostream>
using namespace std;
int main()
 {
	int t,n,m;
        cin>>t;
        while(t--)
        {
            cin>>n>>m;
            int a[n][m];
            for(int i=0 ; i<n ; i++)
                for(int j=0 ; j<m ; j++)
                    cin>>a[i][j];

            int rowstart=0;
            int rowend=n-1;
            int colstart=0;
            int colend=m-1;

            int prev = a[rowstart+1][colstart];
            int temp;
            while(rowstart<=rowend && colstart<=colend)
            {
                for(int i=colstart; i<=colend ; i++)
                {
                    temp = a[rowstart][i];
                    a[rowstart][i] = prev;
                    prev = temp;
                }
                rowstart++;
                for(int i=rowstart; i<=rowend ; i++)
                {
                    temp = a[i][colend];
                    a[colend][i] = prev;
                    prev = temp;
                }
                colend--;
                for(int i=colend; i>=colstart ; i--)
                {
                    temp = a[rowend][i];
                    a[rowend][i] = prev;
                    prev = temp;
                }
                rowend--;
                for(int i=rowend; i>=rowstart ; i--)
                {
                    temp = a[i][colstart];
                    a[colstart] = prev;
                    prev = temp;
                }
                rowstart++;
            }
        }
	return 0;
}
