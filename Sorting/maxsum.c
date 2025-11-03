int summax(int* array, int size)
{
    int sum=INT_MIN; int i,j;
    int sumnew;
    for(i=0;i<size;i++)
    {
        sumnew=0;
        for(j=i;j<size;j++)
        {
            sumnew=sumnew+array[j];
            if(sumnew>sum)
            {
                sum=sumnew;
            }
        }
    }
    return sum;
}