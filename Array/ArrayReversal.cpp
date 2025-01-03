// Array Reversal (Iterate from both sides)

#include<iostream>
using namespace std;

void ReverseArray(int*a,int n)
{
	std::cout<<"Reversing Array : "<<std::endl;
	int s = 0 , e = n-1;
	while(e>s)
	{
		a[s] = a[s]+a[e];
		a[e] = a[s]-a[e];
		a[s] = a[s]-a[e];
		s++;e--;
	}
	return;
}

void PrintArray(int *a, int n)
{
	std::cout<<"Array is : ";
	for(int i=0;i<n;i++)
	{
		std::cout<<a[i]<<",";
	}
	return;
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int num = sizeof(a)/sizeof(int);
	ReverseArray(a,num);
	PrintArray(a,num);
	return 0;
}