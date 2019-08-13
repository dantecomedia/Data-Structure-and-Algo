#include<bits/stdc++.h>
using namespace std ; 
struct node
{
	int data;
	node * left;
	node * right;
};
struct node * newnode( int data)
{
	struct node * root = new node;
	root->data=data;
	root->left=NULL;
	root->right=NULL;
	return root;
}

int max(int arr[], int start, int end)
{
	int index=0;
	int max=arr[0];
	for(int i=start;i<end;i++)
	{
		if(arr[i]>max){
			max=arr[i];
			index=i;
		}
	}	
	return index;
}
struct node *buildtree(int inorder[], int start, int end)
{
	if(start>end)
		return NULL;
	int i=max(inorder, start,end);
	struct node * root= newnode(inorder[i]);

	if(start==end)
		return root;
	root->left=buildtree(inorder, start, i-1);
	root->right=buildtree(inorder,i+1, end);

	return root;
}

void printinorder(struct node * root)
{
	if(root!=NULL)
	{
		printinorder(root->left);
		cout<<root->data<<" ";
		printinorder(root->right);
	}
}

int main()  
{  
    /* Assume that inorder traversal of following tree is given  
        40  
        / \  
        10 30  
        /    \  
        5    28 */
  
    int inorder[] = {5, 10, 40, 30, 28};  
    int len = sizeof(inorder)/sizeof(inorder[0]);  
    node *root = buildtree(inorder, 0, len - 1);  
  
    /* Let us test the built tree by printing Insorder traversal */
    cout << "Inorder traversal of the constructed tree is \n";  
    printinorder(root);  
    return 0;  
}  