// (Using Kadane's Algorithm, i.e. find currentSum at each index (Put 0 if cs becomes -ve and start cs again. Mainatain a max sum as well)) Prinitng largest sum subarrays (Consequtive subset of elements in array) in Array (eg. 1,2,3 : (1,2,3),(1),(1,2),(2),(3),(2,3))
// Time Complexity : O(N)

#include<iostream>
#include<climits>
using namespace std;

int PrintLargestSumSubarray(int *a, int n)
{
	std::cout<<"Largest Sum : ";
	int currentSum = 0, largestSum = INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		currentSum+=a[i];
		if(currentSum<0)
			currentSum = 0;
		largestSum = max(largestSum,currentSum);
	}

	return largestSum;
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int num = sizeof(a)/sizeof(int);
	std::cout<<PrintLargestSumSubarray(a,num);
	return 0;
}