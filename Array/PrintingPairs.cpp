// Prinitng Pairs in Array (eg. 1,2,3,4 : (1,2),(1,3),(1,4),(2,3),(2,4),(3,4))
#include<iostream>
using namespace std;

void PrintPairs(int *a, int n)
{
	std::cout<<"Pairs : "<<std::endl;
	for(int i=0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			std::cout<<"("<<a[i]<<","<<a[j]<<")"<<",";
		}
		std::cout<<std::endl;
	}
	return;
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int num = sizeof(a)/sizeof(int);
	PrintPairs(a,num);
	return 0;
}