 

#include<stdio.h>
#include<time.h>
int bsearch(int a[],int f,int l,int key);

int main()
{
	int a[20],n,i,pos,key;
	int startt,endt,timebs;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the key element\n");
	scanf("%d",&key);
	startt=clock();

	pos = bsearch(a,0,n-1,key);
	endt=clock();
	timebs=endt-startt;
	printf("time taken =%d\n",timebs);
	if(pos!=-1)
		printf("\nThe key element is present at position %d",pos);
	else
		printf("\nThe key element is not present in the array\n");
	return 0;
}
int bsearch(int a[], int f, int l, int key)
{
	int mid;
	if(f<=l)
	{
		mid = (f+l)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]<key)
			return bsearch(a,mid+1,l,key);
		else 
			return bsearch(a,f,mid-1,key);
	}
	return -1;
}
