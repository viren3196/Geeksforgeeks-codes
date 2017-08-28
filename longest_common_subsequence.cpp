#include<iostream>
using namespace std;
int main()
 {
	int t,n,m;
        cin>>t;
        while(t--)
        {
            string str1, str2;
            cin>>n>>m>>str1>>str2;
            int mat[n+1][m+1];
            for(int i=0; i<=n ; i++)
                for(int j=0; j<=m ; j++)
                    mat[i][j]=0;
            
            for(int i=1; i<=n ; i++)
                for(int j=1; j<=m ; j++)
                {
                    if(str1[i]==str2[j])
                        mat[i][j] = mat[i-1][j-1]+1;
                    else
                        mat[i][j] = max(mat[i-1][j],mat[i][j-1]);
                }
            
            cout<<mat[n][m]<<"\n";
        }
	return 0;
}
