#include<iostream>

using namespace std;

/*HEAP SORT-heap sort is a comparison sorting technique which is based on Binary HEAP which is a form of ordered Complete binary tree.
Algorithm-
1)Build a heap
2) Build a MAX-HEAP where the parent node has data larger than its children nodes.
3) After building the max heap, we simply swap the root and the last node , and delete the last node from HEAP.


We will build a BINARY HEAP using array based implementation as it is space efficient.

*/

//n is size of heap, i is the index of array
void heapify(int arr[],int n,int i)
{
	int largest = i;//root node
	int left = 2*i + 1; //left child
	int right = 2*i + 2;//right child
	
	//if left child is larger than root, then make it as largest
	if( left < n && arr[left] > arr[largest] )
		largest  = left;
		
	//if right child is larger than root, then make it as largest
	if( right < n && arr[right] > arr[largest] )
		largest  = right;
		
	//if largest is not root
	if(largest!=i)
	{
		swap(arr[i],arr[largest]);
		
		//recursively heapify the affected sub-tree
		heapify(arr,n,largest);
	}
		
} //Time complexity = O(logn), Space complexity = O(n)


void HeapSort(int arr[],int n)
{
	//build heap in bottom-up manner
	for(int i = n/2 - 1 ; i >= 0 ;  i--)
		heapify(arr,n,i);
		
	//one by one extract element from heap
	for(int i= n-1; i>=-;i--)
	{
		//swap root and last node
		swap(arr[0],arr[i]);
		
		//calling heapify on reduced heap
		heapify(arr,i,0);
	}
	
}


int main()
{
	return 0;
	
}
