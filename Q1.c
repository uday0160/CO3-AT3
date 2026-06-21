#include<stdio.h>
int binarySearch(int trains[],int n,int key)
{
int low=0,high=n-1;
while(low<=high)
{
int mid=(low+high)/2;
if(trains[mid]==key)
return mid;
else if(trains[mid]<key)
low=mid+1;
else
high=mid-1;
}
return -1;
}
int main()
{
int trains[50],n,search,result;
printf("Enter number of train records: ");
scanf("%d",&n);
printf("Enter sorted train numbers:\n");
for(int i=0;i<n;i++)
scanf("%d",&trains[i]);
printf("Enter train number to search: ");
scanf("%d",&search);
result=binarySearch(trains,n,search);
if(result!=-1)
printf("Train found at position %d",result+1);
else
printf("Train record not found");
return 0;
}

OUTPUT:
Enter number of train records: 4
Enter sorted train numbers:
1 2 5 3
Enter train number to search: 2
Train found at position 2
 

