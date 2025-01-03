/*


K-Rotate
Given an integer vector and a value k, your task is to rotate the array k times clockwise.

Input Format

In the function an integer vector and number k is passed.

Output Format

Return an integer vector.



Sample Input

{1, 3, 5, 7, 9}, x = 2


Sample Output

{7, 9, 1, 3, 5}


Explanation

After 1st rotation - {9, 1, 3, 5, 7}
After 2nd rotation - {7, 9, 1, 3, 5}


*/

#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    vector<int> b(a);
    int index=0;
    for(int i = 0; i<b.size(); i++)
    {
        index = (i+k)%b.size();
        a[index] = b[i];
    }
    return a;
}