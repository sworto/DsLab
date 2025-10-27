#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* left;
    struct node* right;
}leaf;

void inorder(leaf* root)
{
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ",root->val);
    inorder(root->right);
}

void preorder(leaf* root)
{
    if(root==NULL) return;
    printf("%d ",root->val);
    preorder(root->left);
    preorder(root->right);
}

void postorder(leaf* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->val);
}

void add(leaf* root,int val)
{
    leaf* newleaf=malloc(sizeof(leaf));
    newleaf->val=val;
    newleaf->left=NULL;
    newleaf->right=NULL;
    if(val<root->val)
    {
        if(root->left==NULL) root->left=newleaf;
        else add(root->left,val);
    }
    else if(val>root->val)
    {
        if(root->right==NULL) root->right=newleaf;
        else add(root->right,val);
    }
    else return; // duplicate
}

int search(leaf* root,int key)
{
    if(root==NULL) return 0;
    if(root->val==key) return 1;
    else if(key<root->val) return search(root->left,key);
    else return search(root->right,key);
}

leaf* minValueNode(leaf* root)
{
    leaf* ptr=root;
    while(ptr->left!=NULL) ptr=ptr->left;
    return ptr;
}

leaf* delete(leaf* root,int key)
{
    if(root==NULL) return root;

    if(key<root->val) root->left=delete(root->left,key);
    else if(key>root->val) root->right=delete(root->right,key);
    else
    {
        if(root->left==NULL)
        {
            leaf* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            leaf* temp=root->left;
            free(root);
            return temp;
        }
        leaf* temp=minValueNode(root->right);
        root->val=temp->val;
        root->right=delete(root->right,temp->val);
    }
    return root;
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
        printf("%d ",array[i]);

    leaf* root=malloc(sizeof(leaf));
    root->val=array[size/2];
    root->left=NULL;
    root->right=NULL;

    for(int i=0;i<size;i++)
        if(i!=size/2) add(root,array[i]);

    int choice,key;
    while(1)
    {
        printf("\n\n--- MENU ---\n");
        printf("1. Inorder Traversal\n");
        printf("2. Preorder Traversal\n");
        printf("3. Postorder Traversal\n");
        printf("4. Search Element\n");
        printf("5. Add Element\n");
        printf("6. Delete Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Inorder: ");
                inorder(root);
                printf("\n");
                break;
            case 2:
                printf("Preorder: ");
                preorder(root);
                printf("\n");
                break;
            case 3:
                printf("Postorder: ");
                postorder(root);
                printf("\n");
                break;
            case 4:
                printf("Enter element to search: ");
                scanf("%d",&key);
                if(search(root,key)) printf("Element %d found.\n",key);
                else printf("Element %d not found.\n",key);
                break;
            case 5:
                printf("Enter element to add: ");
                scanf("%d",&key);
                add(root,key);
                printf("Element %d added.\n",key);
                break;
            case 6:
                printf("Enter element to delete: ");
                scanf("%d",&key);
                root=delete(root,key);
                printf("Element %d deleted (if it existed).\n",key);
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
