/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


class GfG
{
    /* This function takes last element as pivot, places  the pivot element 
    at its correct position in sorted  array, and places all smaller (smaller
    than pivot) to left of pivot and all greater elements to right  of pivot */
    int partition(int arr[], int low, int high)
    {
        int pindex=low;
        int pivot=high, temp;
        for(int i=low ; i<high ; i++)
        {
            if(arr[i]<arr[pivot])
            {
                temp = arr[i];
                arr[i] = arr[pindex];
                arr[pindex] = temp;
                pindex++;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[pindex];
        arr[pindex] = temp;
        return pindex;
    }
}
/* The main function that implements QuickSort() (present in a class 
   different from GfG)
   arr[] --> Array to be sorted,   low  --> Starting index,  high  --> Ending index 
static void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        GfG g = new GfG();
        int pi = g.partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    } }*/
