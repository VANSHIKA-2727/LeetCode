int removeDuplicates(int* a, int Size) {
    int k=0,i;
    if(Size==0)return 0;
    int *b=(int*)malloc(sizeof(int)*Size);
    b[0]=a[0];
    for(i=1;i<Size;i++)
    {
        if(a[i]!=b[k])
        b[++k]=a[i];
    }
    for(i=0;i<=k;i++)
    a[i]=b[i];
    return ++k;
}