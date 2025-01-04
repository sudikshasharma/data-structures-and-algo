// SelectionSort : Find minimum element in unsorted array and put it in start pos(sorted array). Increment the start pos by 1 and repeat till whole array is sorted.

#include <iostream>

void Swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void PrintArray(int *a, int len)
{
    for(int i =0; i<len; i++)
    {
        std::cout<<a[i]<<", ";
    }
}

int FindMinIndex(int *a,int index, int len)
{
    int minIndex=index, minNum=a[index];
    for(int i=index+1;i<len;i++)
    {
        if(a[i]<minNum)
        {
            minIndex = i;
            minNum=a[i];
        }
    }
    return minIndex;
}

void SelectionSort(int *a, int len)
{
    int minIndex=0;
    for(int i=0;i<len-1;i++)
    {
        minIndex = FindMinIndex(a,i,len);
        if(minIndex!=i)
        Swap(a[minIndex],a[i]);
    }
}


int main() {
    int a[] = {3,1,4,-3,2,9,-19,5};
    std::cout<<"Array : ";
    PrintArray(a,sizeof(a)/sizeof(int));
    SelectionSort(a,sizeof(a)/sizeof(int));
    std::cout<<std::endl<<"Selection Sorted Array : ";
    PrintArray(a,sizeof(a)/sizeof(int));
    return 0;
}