#include <stdio.h>
#include <stdlib.h>
typedef struct node_02{
    int val_02;
    struct node_02* next;
}node_02;
int main()
{
    int n_02=35;
    node_02* head_02=NULL, *evenptr_02=NULL, *oddptr_02=NULL, *evenhead_02=NULL, *temp_02=NULL;
    for(int i=1;i<=n_02;i++)
    {
        if(i==1)
        {
            head_02=(node_02*)malloc(sizeof(node_02));
            head_02->val_02=i;
            temp_02=head_02;
        }
        else
        {
            temp_02->next=(node_02*)malloc(sizeof(node_02));
            temp_02=temp_02->next;
            temp_02->val_02=i;
        }
    }
    temp_02->next=NULL;
    temp_02=head_02;
    while(temp_02)
    {
        printf("%d->",temp_02->val_02);
        temp_02=temp_02->next;
    }
    printf("\n");
    temp_02=head_02;
    //Logic For Odd Even node Seperation
    int count=1;
    evenhead_02=head_02->next;
    oddptr_02=head_02;
    evenptr_02=head_02->next;
    //While loop will terminate when it encounters the last node.
    while(oddptr_02->next&&evenptr_02->next)
    {
        oddptr_02->next=oddptr_02->next->next;
        oddptr_02=oddptr_02->next;
        evenptr_02->next=evenptr_02->next->next;
        evenptr_02=evenptr_02->next;
    }
    //The next of the oddptr is linked with the temporary head assigned to the evenptr list.
    oddptr_02->next=evenhead_02;
    //Depending upon the size of the list and if even or odd elements are present, evenptr may or may not be zero.
    //This means that if the evenptr is not zero (in the case of lists which are odd in length, evenptr->next must be assigned NULL)
    if(evenptr_02)
    {
        evenptr_02->next=NULL;
    }
    temp_02=head_02;
    //Printing the new list.
    while(temp_02)
    {
        printf("%d->",temp_02->val_02);
        temp_02=temp_02->next;
    }
    temp_02=head_02;    
    printf("\n");
    return 0;
}
