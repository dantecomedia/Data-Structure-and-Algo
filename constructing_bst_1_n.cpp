//Constructing BST from 1 to n 
#include<bits/stdc++.h>
using namespace std ; 
struct node
{
	int key;
	node *left;
	node *right;
};
struct node *newnode(int data)
{
	struct node * root = new node ;
	root->key=data;
	root->left=NULL;
	root->right=NULL;
	return root;
}
void preorder(struct node * root)
{
	if(root!=NULL)
	{
		cout<<root->key<<" ";
		preorder(root->left);
		preorder(root->right);
	}
	
}
vector< struct node*> constructtrees(int start, int end)
{
	vector<struct node *> list;
	if(start>end)
	{
		list.push_back(NULL);
		return list;
	}
	for(int i=start; i<=end;i++)
	{
		vector<struct node *> leftsubtree=constructtrees(start, i-1);
		vector<struct node *> rightsubtree=constructtrees(i+1, end);
		for(int j=0;j<leftsubtree.size();j++)
		{
			struct node * left =leftsubtree[j];
			for(int k=0;k<rightsubtree.size();k++)
			{
				struct node *right =rightsubtree[k];
				struct node* node = newnode(i);
				node->left=left;
				node->right=right;
				list.push_back(node);

			}
		}
	}
	return list;
	
}


int main(int argc, char const *argv[])
{
	int start,end;
	cin>>start>>end;
	vector<struct node *> totaltrees= constructtrees(start,end);
	for(int i=0;i<totaltrees.size();i++)
	{	preorder(totaltrees[i]);
		cout<<endl;
}
	/* code */
	return 0;
}