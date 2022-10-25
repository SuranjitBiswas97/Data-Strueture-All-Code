 #include<stdio.h>
int linearSearch(int a[],int size,int data)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(a[i] == data)
            return i+1;
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int data;
    printf("Enter the data to search: ");
    scanf("%d",&data);
    int loc = linearSearch(arr,size,data);
    if(loc == -1)
        printf("Data Not Found.\n");
    else
        printf("Data is on Location: %d\n",loc);
}
