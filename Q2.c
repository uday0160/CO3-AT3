#include<stdio.h>
void merge(int a[],int l,int m,int h)
{
int i=l,j=m+1,k=l,temp[100];
while(i<=m&&j<=h)
{
if(a[i]<=a[j])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}
while(i<=m)
temp[k++]=a[i++];
while(j<=h)
temp[k++]=a[j++];
for(i=l;i<=h;i++)
a[i]=temp[i];
}
void mergeSort(int a[],int l,int h)
{
if(l<h)
{
int m=(l+h)/2;
mergeSort(a,l,m);
mergeSort(a,m+1,h);
merge(a,l,m,h);
}
}
void quickSort(int a[],int l,int h)
{
if(l<h)
{
int pivot=a[h],i=l-1,j,temp;
for(j=l;j<h;j++)
{
if(a[j]<pivot)
{
i++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[i+1];
a[i+1]=a[h];
a[h]=temp;
quickSort(a,l,i);
quickSort(a,i+2,h);
}
}
void display(int a[],int n)
{
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
int main()
{
int a[100],b[100],n;
printf("Enter number of data records: ");
scanf("%d",&n);
printf("Enter dataset values:\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
mergeSort(a,0,n-1);
printf("Merge Sort:\n");
display(a,n);
quickSort(b,0,n-1);
printf("\nQuick Sort:\n");
display(b,n);
return 0;
}
OUTPUT:
Enter number of data records: 5
Enter dataset values:
5 7 1 4 2
Merge Sort:
1 2 4 5 7 
Quick Sort:
1 2 4 5 7 
