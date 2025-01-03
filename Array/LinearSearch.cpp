// Linear Search Array : Complexity : O(n)
#include<iostream>
using namespace std;

// Return Index of first similar element in array
int LinearSearch(int *a, int num, int val)
{
	for(int i = 0;i<num;i++)
	{
		if(a[i]==val)
			return i;
	}
	return -1;
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int value = 4;
	int output = LinearSearch(a,sizeof(a)/sizeof(int),value);
	if(output == -1)
		std::cout<<"Index not found";
	else
		std::cout<<"Index of value is : "<<output;

	return 0;
}