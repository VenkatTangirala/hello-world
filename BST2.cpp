#include<stdio.h>
#include<malloc.h>

typedef struct tree
{

	int num;
	tree* left; tree* right;
};
struct tree* insert(int num, struct tree* t);
void isBST(struct tree*,int);
void display(struct tree*);
int common_ancestor(struct tree* root, int num1, int num2);
int main()
{
	struct tree root1; 
	root1.num = 25; 
	struct tree *root;
	root = &root1;
	insert(13, root);
	insert(36, root);
	insert(12, root);
	insert(17, root);
	insert(15, root);
	insert(20, root);
	insert(10, root);
	int i;
	display(root);
	//common_ancestor(root,12,14);

	//isBST(root, -1);
	//scanf("%d", &i);

}


struct tree* insert(int num, struct tree *root)
{


	if (root == NULL)
	{
		struct tree* temp;
		temp = (struct tree*)malloc(sizeof(struct tree));
		temp->num = num; temp->right = NULL; temp->left = NULL;
		root = temp;
	}
	else
	{
		if (num < root->num)
			root->right=insert(num, root->right);

		if (num >= root->num)
			root->left=insert(num, root->left);
	}

	return root;
	
}



void display(struct tree* root)
{
	if (root != NULL)
	{

		display(root->left);
		printf("%d ", root->num);
		display(root->right);

	}
}


