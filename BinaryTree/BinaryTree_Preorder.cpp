//Preoreder Traversal BT : Root->Left->Right

#include<iostream>
using namespace std;

class TreeNode
{
public:
	int data;
	TreeNode *leftNode;
	TreeNode *rightNode;

	TreeNode(int d)
	{
		data = d;
		leftNode = NULL;
		rightNode = NULL;
	}
};

// Building Tree
TreeNode *BuildTree(int *ar,int &index)
{
	if(ar[index] == -1)
	{
		index++;
		return NULL;
	}
	TreeNode *newNode = new TreeNode(ar[index]);
	index++;
	newNode->leftNode = BuildTree(ar, index);
	newNode->rightNode = BuildTree(ar, index);
	return newNode;
}

// Preorder Traverse Binary Tree
void PrintTree(TreeNode *rootNode)
{
	if(rootNode == NULL)
	{
		return;
	}
	std::cout<<rootNode->data<<", ";
	PrintTree(rootNode->leftNode);
	PrintTree(rootNode->rightNode);
}

int main()
{
	int a[10],num, index=0;
	std::cout<<"Element count in binary tree (leaf as -1) : ";
	std::cin>>num;
	std::cout<<std::endl<<"Enter Tree Elements : ";
	for(int i=0; i<num; i++)
	{
		std::cin>>a[i];
	}
	TreeNode *rootNode = BuildTree(a,index);
	std::cout<<"\nBinary Tree (Preorder) : ";
	PrintTree(rootNode);

	return 0;
}