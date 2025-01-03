// (Using Prefix Sum, i.e. cumulative sum at each index) Prinitng largest sum subarrays (Consequtive subset of elements in array) in Array (eg. 1,2,3 : (1,2,3),(1),(1,2),(2),(3),(2,3))
// Time Complexity : O(N^2)

#include<iostream>
#include<climits>
using namespace std;

int PrintLargestSumSubarray(int *a, int n)
{
	std::cout<<"Largest Sum : ";
	int sum = 0, largestSum = INT_MIN;
	
	// Array to store prefix sum at every index
	int a1[n] = {0};//initize array with 0
	a1[0] = a[0];
	for(int j=1;j<n;j++)
	{
		a1[j]=a[j]+a1[j-1];
	}

	for(int i=0;i<n;i++)
	{
		for(int j = i;j<n;j++)
		{
			sum = i>0?a1[j] -a1[i-1] : a1[j];
        }
		if(largestSum<sum)
			largestSum = sum;
	}
	return largestSum;
}

int main()
{
	int a[] = {1,2,3};
	int num = sizeof(a)/sizeof(int);
	std::cout<<PrintLargestSumSubarray(a,num);
	return 0;
}