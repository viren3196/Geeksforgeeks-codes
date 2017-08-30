/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


class GfG
{

    void heapify(int arr[], int n, int i)
    {
        int parent = i;
        int c1 = 2*parent+1;
        int c2 = 2*parent+2;
        int mn=parent;
        if(c1<n)
        {
            if(arr[c1]>arr[mn])
                mn = c1;
        }
        if(c2<n)
        {
            if(arr[c2]>arr[mn])
                mn = c2;
        }
        if(mn!=parent)
        {
            int temp = arr[mn];
            arr[mn] = arr[parent];
            arr[parent] = temp;
            heapify(arr,n,mn);
        }
    }
   
    void buildHeap(int arr[], int n)
    {
        for(int i=n/2-1 ; i>=0 ; i--)
            heapify(arr,n,i);
        for (int i = n - 1; i > 0; i--) {
            int tmp = arr[0];
            arr[0] = arr[i];
            arr[i] = tmp;
            heapify(arr, --n, 0);
        }
    }
 
    // To heapify a subtree rooted with node i which is
    // an index in arr[]. n is size of heap

 }
