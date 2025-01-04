// BubbleSort : Take larger element to the end of array by repeatedly swapping adjacent elements

#include <iostream>

void SwapNum(int &a, int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}

void BubbleSort(int *a, int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j = 0;j<len-i;j++)
        {
            if(a[j]>a[j+1])
                SwapNum(a[j],a[j+1]);
        }
    }
}

void PrintArray(int *a, int len)
{
    for(int i =0;i<len;i++)
    {
        std::cout<<a[i]<<",";
    }
}


int main() {
    int a[] = {2,1,4,3}, size = sizeof(a)/sizeof(int);
    std::cout<<"Array:"<<std::endl;
    PrintArray(a,size);
    BubbleSort(a,size);
    std::cout<<"After Bubble Sort:"<<std::endl;
    PrintArray(a,size);
    return 0;
}