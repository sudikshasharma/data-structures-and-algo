/*

Lower Bound
Given an array of integers A and a integer Val.

Implement a function that takes A and Val as input parameters and returns the lower bound of Val.

Note : If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer.

Otherwise Val itself is the answer.

If Val is less than smallest element of array A then return '-1' in that case.



Example 1  :

A = [-1, -1, 2, 3, 5]

Val = 4

Answer :  3

Since 3 is just smaller than 4 in the array.

Example 2  :

A = [1, 2, 3, 4, 6]

Val = 4

Answer :  4
Since 4 is equal to 4.


*/


#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    int lb = Val;
    std::cout<<Val;
    for(int i=0;i<A.size();i++)
    {
        std::cout<<A[i]<<" ";
        if(A[i]==Val)
            return Val;
            if(lb==Val && A[i]<Val)
                lb=A[i];
        else if(A[i]<Val && A[i]>lb)
            lb = A[i];
    }
    if(lb==Val)
        return -1;
        return lb;
}