#include <stdio.h>

int main() {

	int n;
	scanf("%d",&n);
	int a[n][n], cnt=1, i, j;
	int rowstart, rowend, colstart, colend;
	rowstart = 0;
	rowend = n-1;
	colstart = 0;
	colend = n-1;

	while(rowstart<=rowend && colstart<=colend)
	{
    	for( i=colstart ; i<=colend ; i++)
    	    a[rowstart][i] = cnt++;
        rowstart++;

        for( i=rowstart ; i<=rowend ; i++)
            a[i][colend] = cnt++;
        colend--;

        for( i=colend ; i>=colstart ; i--)
            a[rowend][i] = cnt++;
        rowend--;

        for( i=rowend ; i>=rowstart ; i--)
            a[i][colstart] = cnt++;
        colstart++;
	}
	cnt=1;
	for( i=0; i<n ; i++)
	{
	    for( j=0; j<n ; j++)
	    {
	        printf("%d ",a[i][j]);
    	    if(a[i][j]%11==0)
    	       cnt++;
	    }
	    printf("\n");
	}

    printf("Total Power points : %d\n",cnt);

    rowstart = 0;
	rowend = n-1;
	colstart = 0;
	colend = n-1;

	while(rowstart<=rowend && colstart<=colend)
	{
    	for( i=colstart ; i<=colend ; i++)
    	    if(a[rowstart][i]%11==0 || (rowstart==0 && i==0) )
    	       printf("(%d,%d)\n",rowstart,i);
        rowstart++;

        for( i=rowstart ; i<=rowend ; i++)
            if(a[i][colend]%11==0 )
    	       printf("(%d,%d)\n",i,colend);
        colend--;

        for( i=colend ; i>=colstart ; i--)
            if(a[rowend][i]%11==0 )
    	       printf("(%d,%d)\n",rowend,i);
        rowend--;

        for( i=rowend ; i>=rowstart ; i--)
            if(a[i][colstart]%11==0 )
    	       printf("(%d,%d)\n",i ,colstart);
        colstart++;
	}


	return 0;
}
