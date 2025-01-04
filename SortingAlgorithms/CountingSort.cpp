// Counting Sort : Sorting where the data is withtin a range and all positive numbers (e.g all array elements in range 0-100).
// Complexity : O(n+range)
// Find max element of array, create another array of size = max element. Iterate over original array and add frequency of the elements in it under index of sencond array. Iterate second array, add the index with non zero values to original array.


#include <iostream>
#include <climits>

void PrintArray(int a[], int len)
{
    for(int i=0;i<len;i++)
    {
        std::cout<<a[i]<<", ";
    }
}

int Max(int a[], int len)
{
    int maxNum = INT_MIN;
    for(int i=0;i<len;i++)
    {
        maxNum = std::max(a[i],maxNum);
    }
    return maxNum;
}

void CountingSort(int *a, int len)
{
    int maxElementOfArray = Max(a,len);
    int b[maxElementOfArray] = {0};
    for(int i=0;i<len;i++)
    {
        b[a[i]]+=1;
    }
    int arPos = 0;
    for(int i=0;i<maxElementOfArray;i++)
    {
        if(b[i]==0)
            continue;
        for(int j=0;j<b[i];j++)
        {
            a[arPos] = i;
            arPos++;
        }
    }
}

int main() {
    int a[] = {3,1,4,-3,2,9,-19,5};
    int len = sizeof(a)/sizeof(int);
    std::cout<<"Array: ";
    PrintArray(a,len);
    CountingSort(a,len);
    std::cout<<std::endl<<"Counting Sort: ";
    PrintArray(a,len);
    return 0;
}