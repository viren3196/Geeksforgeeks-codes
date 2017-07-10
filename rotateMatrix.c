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

            while(rowstart<=rowend && colstart<=colend)
            {
                int prev = a[rowstart+1][colstart];
                int temp = a[rowstart][colend];
                for(int i=colend; i>colstart ; i--)
                {
                    a[rowstart][i] = a[rowstart][i-1];
                }
                a[rowstart][colstart] = prev;
                prev = temp;
                rowstart++;

                temp = a[rowend][colend];
                for(int i=rowend; i>rowstart ; i--)
                {
                    a[i][colend] = a[i-1][colend];
                }
                a[rowstart][colend] = prev;
                prev = temp;
                colend--;

                temp = a[rowend][colstart];
                for(int i=colstart; i<colend ; i++)
                {
                    a[rowend][i] = a[rowend][i+1];
                }
                a[rowend][colend] = prev;
                prev = temp;
                rowend--;

                temp = a[rowstart][colstart];
                for(int i=rowstart; i<rowend ; i++)
                {
                    a[i][colstart] = a[i+1][colstart];
                }
                a[rowend][colstart] = prev;
                prev = temp;
                colstart++;
            }
        }
	return 0;
}
