void construction(root)
{
    if(queueempty)
    {
        return;
    }
    dequeue(root);
    construction(root->left);
    construction(root->right);
    return
}