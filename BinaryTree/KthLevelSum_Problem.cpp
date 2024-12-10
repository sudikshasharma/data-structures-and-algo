/*

K-th Level
Given a binary tree with N nodes. Your task is to print its Kth level.

Input Format

In the function a pointer to the root node of the binary tree is passed.

Output Format

Return a vector containing nodes at Kth level

*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

vector<int> printKthLevel(Node* root, int k){
    // your code goes here
if(root==NULL)
{
    return {};
}
 if(k==0)
 {
     vector<int> newVec = {root->key};
     return newVec;
 }
 vector<int> newVec1 = printKthLevel(root->left,k-1);
 vector<int> newVec2 = printKthLevel(root->right,k-1);
 newVec1.insert(newVec1.end(),newVec2.begin(),newVec2.end());
 return newVec1;
}