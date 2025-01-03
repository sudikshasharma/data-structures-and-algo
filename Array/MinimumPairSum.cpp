/*


Pair Sum
Given an array and a number x, find a pair in array whose sum is closest to x.

Input Format

In the function an integer vector and number x is passed.

Output Format

Return a pair of integers.



Sample Input

{10, 22, 28, 29, 30, 40}, x = 54


Sample Output

22 and 30


*/


#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    pair<int,int> p(0,0);
    int closestSum = INT_MAX,sum;
    for(int i =0;i<arr.size();i++)
    {
        for(int j = i+1;j<arr.size();j++)
        {
            sum = arr[i]+arr[j];
            if(abs(x-sum)<closestSum)
            {
                p.first = arr[i];
                p.second = arr[j];
                closestSum = abs(x-sum);
            
            }
        }
    }
    return p;
}