/*multiplication of matrix*/
#include<stdio.h>
main()
{
	int a[5][5],b[5][5],c[5][5],i,j,k,r1,r2,c1,c2;
	printf("enter no of rows and columns in matrix A..:");
	scanf("%d%d",&r1,&c1);
	printf("\nenter no of rows and columns in matrix B..:");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("\nenter %d no of elements in matrix A..:\n",r1*c1);
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nenter %d no of elements in matrix B..:\n",r2*c2);
		for(i=0;i<r2;i++)       	
		{
				for(j=0;j<c2;j++)
			    {
				scanf("%d",&b[i][j]);
			    }
     	}
     	printf("\n\ngiven matrix A is..:\n");
     	for(i=0;i<r1;i++)
     	{
     		for(j=0;j<c1;j++)
     		{
     			printf("%5d",a[i][j]);
			}
			printf("\n");
		}
		printf("\n\ngiven matrix B is..:\n");
     	for(i=0;i<r2;i++)
     	{
     		for(j=0;j<c2;j++)
     		{
     			printf("%5d",b[i][j]);
			}
			printf("\n");
		}
	    printf("\nMULTIPLICATION OF GIVEN MATRICES IS..:\n");
        for(i=0;i<r1;i++);
        {
        	for(j=0;j<c2;j++)
        	{
        		c[i][j]=0;
        		for(k=0;k<c1;k++)
        		{
        			c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
				printf("%5d",c[i][j]);
			}
			printf("\n");
		}

	}
	else
	{
		printf("\nMULTIPLICATION NOT POSSIBLE");
	}
}
