// Stl (Inbuilt) sorting function usage (using sort() and <algorithm> header), using namespace std
//Inbuilt sort() takes O(nlogn)
// Usage : sort(arrayStart,arrayEnd), e.g a[n] => sort(a,a+n) to sort array starting from a[0] till a[n-1]
// reverse(a,a+n) => reverse the array
// Inbuilt sort() can have additional (optional) parameter - a comparator function (a function(a,b) used to compare 2 values and returns true(a>b)/false(b>a)) can be created, which is a comparing function (function passed as parameter)
// There's an inbuilt comparator function (greater<int>())


#include <iostream>
#include <algorithm>

bool ComparatorDescending(int a,int b)
{
    return a>b;
}

bool ComparatorAscending(int a,int b)
{
    return a<b;
}

void PrintArray(int a[], int len)
{
    std::cout<<std::endl<<"Array: ";
    for(int i=0;i<len;i++)
    {
        std::cout<<a[i]<<", ";
    }
}

int main() {
    int a[] = {3,1,4,-3,2,9,-19,5};
    int len = sizeof(a)/sizeof(int);
    
    PrintArray(a,len);
    std::sort(a,a+len,ComparatorAscending);
    PrintArray(a,len);
    std::sort(a,a+len,ComparatorDescending);
    PrintArray(a,len);    
    std::sort(a,a+len);
    PrintArray(a,len);
    std::sort(a,a+len,std::greater<int>());
    PrintArray(a,len);
    std::reverse(a,a+len);
    PrintArray(a,len);
    
    return 0;
}