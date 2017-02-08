/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */

// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]

void combine(int a[], int l, int m, int r)
{
    int n1=m-l+1, n2=r-m;
    int left[n1], right[n2];
    
    for(int i=0;i<n1;i++)
        left[i] = a[l+i];
    
    for(int i=0;i<n2;i++)
        right[i] = a[m+i+1];
        
    int p=0,q=0,k=l;
    
    while(p<n1 && q<n2)
    {
        if(left[p]<right[q])
        {
            a[k] = left[p];
            p++;
        }
        else
        {
            a[k] = right[q];
            q++;
        }
        k++;
    }
    
    while(p<n1)
    {
        a[k] = left[p];
        p++;
        k++;
    }
    while(q<n2)
    {
        a[k] = right[q];
        q++;
        k++;
    }
}

void merge(int arr[], int l, int m, int r)
{
     if(l<r)
     {
         merge(arr,l,(l+m)/2,m);
         merge(arr,m+1,(m+1+r)/2,r);
         combine(arr,l,m,r);
     }
}
