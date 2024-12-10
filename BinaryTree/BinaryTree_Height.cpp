// Height of BT : Traverse left-right subtree 
#include<iostream>
#include<queue>
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

// Building Level order Tree 
TreeNode *BuildTree(int *ar,int index)
{
	queue<TreeNode*> treeQueue;
	TreeNode *root = new TreeNode(ar[index]);
	++index;
	treeQueue.push(root);
	while(!treeQueue.empty())
	{
		TreeNode *curNode = treeQueue.front();
		if(ar[index]!=-1)
		{
			curNode->leftNode = new TreeNode(ar[index]);
			treeQueue.push(curNode->leftNode);
		}
		index++;
		if(ar[index]!=-1)
		{
			curNode->rightNode = new TreeNode(ar[index]);
			treeQueue.push(curNode->rightNode);	
		}
		index++;
		treeQueue.pop();
	}
	return root;
}

// Level order Traverse Binary Tree
void PrintTree(TreeNode *rootNode)
{
	queue<TreeNode*> treeQueue;
	treeQueue.push(rootNode);
	treeQueue.push(NULL);
	while(!treeQueue.empty())
	{
		if(treeQueue.front()==NULL)
		{
			treeQueue.pop();
			std::cout<<std::endl;
			if(!treeQueue.empty())
				treeQueue.push(NULL);
		}
		else
		{
			if(treeQueue.front()->leftNode)
				treeQueue.push(treeQueue.front()->leftNode);
			if(treeQueue.front()->rightNode)
				treeQueue.push(treeQueue.front()->rightNode);
			std::cout<<treeQueue.front()->data<<", ";
			treeQueue.pop();
		}
	}
}

// Return height of Binary Tree
int TreeHeight(TreeNode *rootNode)
{
	if(rootNode == NULL)
	{
		return 0;
	}
	return max(TreeHeight(rootNode->leftNode),TreeHeight(rootNode->rightNode))+1;
}

int main()
{
	// input : 13 1 2 -1 -1 3 4 5 -1 -1 6 -1 -1 -1
	int a[20],num, index=0;
	std::cout<<"Element count in binary tree (leaf as -1) : ";
	std::cin>>num;
	std::cout<<std::endl<<"Enter Tree Elements : ";
	for(int i=0; i<num; i++)
	{
		std::cin>>a[i];
	}
	TreeNode *rootNode = BuildTree(a,index);
	std::cout<<"\nBinary Tree (Level order) : ";
	PrintTree(rootNode);
	std::cout<<"\nHeight of Binary Tree : "<<TreeHeight(rootNode);
	return 0;
}