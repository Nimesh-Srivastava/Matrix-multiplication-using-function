#include<stdio.h>
#include<conio.h>

int r1,r2,c1,c2;

void cal(int arr1[5][5],int arr2[5][5])
{
	int i,j,k,sum=0;
	clrscr();
	printf("\n\tMultiplication matrix :- \n\n");
	for(i=0;i<r1;i++)
	{
		for(k=0;k<c2;k++)
		{
			for(j=0;j<r2;j++)
			{
				sum+=arr1[i][j]*arr2[j][k];
			}
			printf("\t%d",sum);
			if(k==c2-1)
			{
				printf("\n");
			}
			sum=0;
		}
	}
}

int main()
{
	int i,j,k,row[2],col[2],arr1[5][5],arr2[5][5];
	char ans='y';
	while(ans=='y')
	{
		clrscr();
		printf("\n\tInput the number of rows (M-1)    : ");
		scanf("%d",&row[0]);
		r1 = row[0];
		printf("\n\tInput the number of columns (M-1) : ");
		scanf("%d",&col[0]);
		c1 = col[0];
		printf("\n\tInput the number of rows (M-2)    : ");
		scanf("%d",&row[1]);
		r2 = row[1];
		printf("\n\tInput the number of columns (M-2) : ");
		scanf("%d",&col[1]);
		c2 = col[1];
		if(row[1]!=col[0])
		{
			printf("\n\n\tMultiplication cannot take place");
			printf("\n\n\twhen number of rows of matrix 2 is");
			printf("\n\n\tnot equal to the number of columns");
			printf("\n\n\tof matrix 1");
			getch();
			exit(0);
		}
		for(k=0;k<2;k++)
		{
			printf("\n\tInput the matrix %d :  ",k+1);
			for(i=0;i<row[k];i++)
			{
				printf(" Row %d : ",i+1);
				for(j=0;j<col[k];j++)
				{
					if(k==0)
					{
						scanf("%d",&arr1[i][j]);
						printf("\t\t\t\t       ");
					}
					else
					{
						scanf("%d",&arr2[i][j]);
						printf("\t\t\t\t       ");
					}
				}
				printf("\n\t\t\t      ");
			}
		}
		cal(arr1,arr2);
		printf("\n\n\n\tDisplaying a %d x %d matrix for input matrices of %d x %d",row[0],col[1],row[0],col[0]);
		printf("\n\n\tand %d x %d because the resultant matrix is always",row[1],col[1]);
		printf("\n\n\tcomposed of rows of first matrix and columns of second");
		printf("\n\n\tmatrix according to the Matrix Multiplication rule.");
		printf("\n\n\n\n\n\tWant to enter again(y/n) : ");
		scanf("%s",&ans);
	}
	return 0;
}