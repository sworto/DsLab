void rotateanti(head,k)
{
    int i=1; node* temp,ptr;
    while(i<k)
    {
        ptr=ptr->next;i++;
    }
    temp=ptr->next;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
    while(temp->prev!=ptr)
    {
        temp=temp->prev;
    }
    ptr->next=NULL;
    head=temp;
    return;
}