#include<iostream>
#include<climits>
using namespace std;

void swap(int *x, int* y);

class minHeap
{
	int *harr;
	int capacity;
	int heapsize;
	public:
		minHeap(int capacity);
		
		void minHeapify(int);
		
		int parent(int i)
		{
			return (i-1)/2;
		}
		
		int left(int i)
		{
			return 2*i+1;
		}
		
		int right(int i)
		{
			return 2*i+2;
		}
		
		int extractMin();
		
		void decreaseKey(int i, int new_val);
		
		int getMin()
		{
			return harr[0];
		}
		
		void deleteKey(int i);
		
		void insertKey(int k);
};

minHeap::minHeap(int cap)
{
	heapsize = 0;
	capacity = cap;
	harr = new int[cap];
}

void minHeap::insertKey(int k)
{
	if(heapsize == capacity)
	{
		cout<<"Overflow\n";
		return;
	}
	heapsize++;
	int i = heapsize-1;
	harr[i]	 = k;
	
	while(i!=0 && harr[parent(i)]>harr[i])
	{
		swap(&harr[i],&harr[parent(i)]);
		i = parent(i);
	}
}

void minHeap::decreaseKey(int i, int new_val)
{
	harr[i] = new_val;
	while(i!=0 && harr[parent(i)]>harr[i])
	{
		swap(&harr[i],&harr[parent(i)]);
		i = parent(i);
	}
}

int minHeap::extractMin()
{
	if(heapsize<=0)
		return INT_MAX;
	if(heapsize==1)
	{
		heapsize--;
		return harr[0];
	}
	
	int root = harr[0];
	harr[0] = harr[heapsize-1];
	heapsize--;
	minHeapify(0);
	
	return root;
}

void minHeap::deleteKey(int i)
{
	decreaseKey(i,INT_MIN);
	extractMin();
}

void minHeap::minHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int smallest=i;
	if(l<heapsize && harr[l]<harr[i])
		smallest = l;
	if(r<heapsize && harr[r]<harr[smallest])
		smallest = r;
	if(smallest!=i)
	{
		swap(&harr[i], &harr[smallest]);
		minHeapify(smallest);
	}
}

void swap(int *x, int*y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	minHeap h(11);
	h.insertKey(3);
	h.insertKey(2);
	h.insertKey(1);
	h.insertKey(15);
	h.insertKey(5);
	h.insertKey(4);
	h.insertKey(45);
	
	cout<<h.extractMin()<<" ";
	cout<<h.getMin()<<" ";
	h.decreaseKey(2,1);
	cout<<h.getMin();
}
