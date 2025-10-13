#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int val;
    struct node* left;
    struct node* right;
}leaf;
void inorder(leaf* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->val);
    inorder(root->right);
}
void add(leaf* root,int val)
{
    leaf* newleaf=malloc(sizeof(leaf));
    newleaf->val=val;
    newleaf->left=NULL;
    newleaf->right=NULL;
    if(val<root->val)
    {
        if(root->left==NULL)
        {
            root->left=newleaf;
        }
        else
        {
            add(root->left,val);
        }
    }
    else if(val>root->val)
    {
        if(root->right==NULL)
        {
            root->right=newleaf;
        }
        else
        {
            add(root->right,val);
        }
    }
    else return;
}
int main()
{
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the array index %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("Non Sorted Array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    leaf* root=malloc(sizeof(leaf));
    root->val=array[size/2];
    root->left=NULL;
    root->right=NULL;
    leaf* ptr=root;
    for(int i=0;i<size;i++)
    {
        if(i!=sizeof(array)/2)
        {
            add(root,array[i]);
        }
    }
    printf("\n");
    inorder(root);
    return 0;
}