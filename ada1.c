
#include<stdio.h>
int main()
{
	int t,n,i,j,ele,first,last,mid,a[50];
	printf("Enter the number of testcases\n");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		printf("\nEnter the number of elements in array and element to be searched\n");
		scanf("%d %d",&n,&ele);
		first = 0;
		last = n-1;
		printf("Enter the elements of array\n");
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		while(first<=last)
		{
			mid = (int)(first+last)/2;
			if(a[mid]==ele)
			{
				printf("1 (Element is present)\n");
				break;
			}
			else if(a[mid]<ele)
				first = mid+1;
			else 
				last = mid-1;
		}
		if(first>last)
			printf("-1 (Element is not present)\n");
	}
	return 0;
}
