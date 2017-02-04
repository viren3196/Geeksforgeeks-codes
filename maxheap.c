#include<iostream>
#include<climits>
using namespace std;

void swap(int*, int*);

class maxHeap
{
	public:
	int* heapArr;
	int capacity;
	int heapsize;
	
	public:
		maxHeap(int);
		int getMax();
		void insertKey(int);
		int parent(int i)
		{
			return (i-1)/2;
		}
		int leftc(int i)
		{
			return 2*i+1;
		}
		int rightc(int i)
		{
			return 2*i+2;
		}
		void modifyKey(int, int);
		int extractMax();
		void deleteKey(int);
		void maxHeapify(int);
		void display();
};

void maxHeap:: deleteKey(int i)
{
	modifyKey(INT_MAX,i);
	extractMax();
}

void maxHeap:: maxHeapify(int i)
{
	int left = leftc(i);
	int right = rightc(i);
	int largest = i;
	
	if(left<heapsize && heapArr[left]>heapArr[i])
		largest = left;
		
	if(right<heapsize && heapArr[right]>heapArr[largest])
		largest = right;
		
	if(i!=largest)
	{
		swap(&heapArr[i], &heapArr[largest]);
		maxHeapify(largest);
	}
}

int maxHeap:: extractMax()
{
	if(heapsize==0)
	{
		return INT_MIN;
	}
	if(heapsize==1)
	{
		heapsize--;
		return heapArr[0];
	}
	int root = heapArr[0];
	swap(&heapArr[heapsize-1], &heapArr[0]);
	heapsize--;
	maxHeapify(0);
	return root;
}

void maxHeap:: modifyKey(int data, int i)
{
	if(i<0 || i>=heapsize)
	{
		cout<<"Invalid index\n";
		return;
	}
	heapArr[i] = data;
	while(i!=0 && heapArr[i] > heapArr[parent(i)] )
	{
		swap(&heapArr[i], &heapArr[parent(i)]);
		i = parent(i);
	}
}

void swap(int *a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void maxHeap:: insertKey(int data)
{
	if(heapsize==capacity)
	{
		cout<<"Overflow..."	;
		return;
	}
	heapsize++;
	int i = heapsize-1;
	heapArr[i] = data;
	while(i!=0 && heapArr[i] > heapArr[parent(i)])
	{
		swap(&heapArr[i], &heapArr[parent(i)]);
		i = parent(i);
	}
}

maxHeap::maxHeap(int cap)
{
	heapArr = new int[cap];
	capacity = cap;
	heapsize = 0;
}

int maxHeap:: getMax()
{
	return heapArr[0];
}

void maxHeap::display()
{
	for(int i=0 ; i<heapsize ; i++)
	{
		cout<<heapArr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	maxHeap h(10);
	h.insertKey(5);
	h.insertKey(50);
	h.insertKey(15);
	h.insertKey(25);
	h.insertKey(55);
	h.insertKey(-5);
	
	cout<<endl;
	h.display();
	
	cout<<"Max:"<<h.getMax()<<" \n";
	
	cout<<"Extract Max:"<<h.extractMax()<<" \n";
	h.display();
	
	cout<<"Max:"<<h.getMax()<<" \n";
	h.display();
	
	cout<<"Delete key at 3:\n";
	h.deleteKey(3);
	h.display();
	
	cout<<"Modify key at 3:\n";
	h.modifyKey(140,3);
	h.display();
	
	return 0;
}
