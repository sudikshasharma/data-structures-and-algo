// (Using BruteForce) Prinitng largest sum subarrays (Consequtive subset of elements in array) in Array (eg. 1,2,3 : (1,2,3),(1),(1,2),(2),(3),(2,3))
// Time Complexity : O(N^3)

#include<iostream>
#include<climits>
using namespace std;

int PrintLargestSumSubarray(int *a, int n)
{
	std::cout<<"Largest Sum : ";
	int sum = 0, largestSum = INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j = i;j<n;j++)
		{
			sum=0;
			for(int k = i;k<=j;k++)
				sum+=a[k];
		}
		if(largestSum<sum)
			largestSum = sum;
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