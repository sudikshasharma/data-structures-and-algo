// Binary Search Array : Complexity : O(log n)
// ARRAY SHOULD BE SORTED

#include<iostream>
using namespace std;

// Return Index of first similar element in array
int BinarySearch(int *a, int num, int val)
{
	int start = 0, end = num-1, mid = (end+start)/2;
	while(start<=end)
	{
		if(val==a[mid])
			return mid;
		if(val>a[mid])
		{
			start = mid-1;
		}
		else if(val<a[mid])
		{
			end = mid+1;
		}
		mid = (end+start)/2;
	}
	return -1;
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int value = 4;
	int output = BinarySearch(a,sizeof(a)/sizeof(int),value);
	if(output == -1)
		std::cout<<"Index not found";
	else
		std::cout<<"Index of value is : "<<output;

	return 0;
}