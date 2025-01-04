// InsertionSort : Insert element in correct position in a sorted array (Just like inserting cards in a sorted deck in correct place)

#include <iostream>

void Swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

void InsertionSort(int *a, int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                Swap(a[j],a[j-1]);
            }
            else break;
        }
    }
}

void PrintArray(int *a, int len)
{
    for(int i =0; i<len; i++)
    {
        std::cout<<a[i]<<", ";
    }
}

int main() {
    int a[] = {8,5,2,3,7};
    std::cout<<"Array : ";
    PrintArray(a,sizeof(a)/sizeof(int));
    InsertionSort(a,sizeof(a)/sizeof(int));
    std::cout<<std::endl<<"Insertion Sorted Array : ";
    PrintArray(a,sizeof(a)/sizeof(int));
    return 0;
}