//Level order Build BT : Using queue(FIFO) 
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
TreeNode *BuildTree(int *ar,int &index)
{
	queue<TreeNode*> treeQueue;
	TreeNode *root = new TreeNode(ar[index++]);
	treeQueue.push(root);
	while(!treeQueue.empty())
	{
		TreeNode *curNode = treeQueue.front();
		if(ar[index]!=-1)
		{
			curNode->leftNode = new TreeNode(ar[index++]);
			treeQueue.push(curNode->leftNode);
		}
		if(ar[index]!=-1)
		{
			curNode->rightNode = new TreeNode(ar[index++]);
			treeQueue.push(curNode->rightNode);
		}
		treeQueue.pop();
	}

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