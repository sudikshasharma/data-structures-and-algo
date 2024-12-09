//Level order Traversal BT : Using queue(FIFO) to store elements of each level and print iteratively
//Do : Push root, then null(to define nextline print). Push children of root, pop root and null. Repeat for childern
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

// Level order Traverse Binary Tree
void PrintTree(TreeNode *rootNode)
{
	queue<TreeNode*> treeQueue;
	treeQueue.push(rootNode);
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
	std::cout<<"\nBinary Tree (Level order) : ";
	PrintTree(rootNode);

	return 0;
}