// Prinitng Subarrays (Consequtive subset of elements in array) in Array (eg. 1,2,3 : (1,2,3),(1),(1,2),(2),(3),(2,3))
// Time Complexity : O(N^3)
#include<iostream>
using namespace std;

void PrintSubarray(int *a, int n)
{
	std::cout<<"Subarrays : "<<std::endl;
	for(int i=0;i<n;i++)
	{
		for(int j = i;j<n;j++)
		{
			std::cout<<"(";
			for(int k = i;k<=j;k++)
				std::cout<<a[k]<<",";
			std::cout<<"),";
		}
		std::cout<<std::endl;
	}
	return;
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int num = sizeof(a)/sizeof(int);
	PrintSubarray(a,num);
	return 0;
}