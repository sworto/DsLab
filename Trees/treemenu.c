#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node* left;
    struct node* right;
} leaf;

void inorder(leaf* root) {
    if (!root) return;
    inorder(root->left);
    printf("%d ", root->val);
    inorder(root->right);
}

void preorder(leaf* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d",root->val);
    preorder(root->left);
    preorder(root->right);
}
int keyAdd(leaf** root, int key) {
    if (*root == NULL) {
        *root = malloc(sizeof(leaf));
        (*root)->val = key;
        (*root)->left = (*root)->right = NULL;
        return 0;
    }
    if (key < (*root)->val)
        return keyAdd(&(*root)->left, key);
    else if (key > (*root)->val)
        return keyAdd(&(*root)->right, key);
    else {
        printf("Duplicate!!\n");
        return 1;
    }
}

leaf* root = NULL;

int main() {
    int choice, key;
    printf("**TREE MENU**\n1. Add Element\n2. Remove Element\n3. Inorder\n4. Preorder\n5. Postorder\n6. Exit\n");

    while (1) {
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to add: ");
                scanf("%d", &key);
                keyAdd(&root, key);
                break;
            case 3:
                inorder(root);
                printf("\n");
                break;
            case 4:
                preorder(root);
                printf("\n");
            default:
                printf("Exiting Program..\n");
                return 0;
        }
    }
}
