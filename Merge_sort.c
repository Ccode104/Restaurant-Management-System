//
int a[10],c[10];
void merge_self(int l,int m,int h)
{
    int i,j,k;

    k=l;//Pointer for temp array c
    i=l;//Pointer for elements from pos l to m
    j=m+1;//Pointer for elements from pos m+1 to h
    
    while((i<=m)&&(j<=h))
    {
        if(a[i]<=a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=m)
    {
        c[k]=a[j];
        j++;
        k++;
    }
    for(i=l;i<=h;i++)
    {
        a[i]=c[i];
    }
}

void merge_sort(int l,int h)
{
    int mid;

    if(l<h)
    {
        mid=(l+h)/2;
        
        merge_sort(l,mid);
        merge_sort(mid+1,h);
        merge_self(l,mid,h);
    }
}

#define SIZE 100

void main()
{
    int array[SIZE];
    int n,c[SIZE];

    printf("\n Enter the number of elements you want to enter\t");
    scanf("%d",&n);

    printf("Now enter the elements\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(0,n-1);

    printf("\nThe sorted array is\n");

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}