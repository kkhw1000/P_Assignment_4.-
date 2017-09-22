#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;

    printf("Enter column and rows for first matrix: ");
    scanf("%d %d", &c1, &r1);


    printf("Enter column androws for second matrix: ");
    scanf("%d %d",&c2, &r2);


   

    while (r1 != c2 || c1>10 || c2>10 || r1>10 || r2>10)
    {
        printf("Error! column of first matrix not equal to row of second or Out of Range (1~10) .\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &c1, &r1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&c2, &r2);
    }



   
    printf("\nEnter elements of matrix 1:\n");
    for(i=0;i<c1;i++)
{
	for(j=0;j<r1;j++)
	{
	printf("a%d%d =",i+1,j+1);
	scanf("%d", &a[i][j]);
	
	}
	printf("\n");
}

   
    printf("\nEnter elements of matrix 2:\n");
      for(i=0;i<c2;i++)
{
	for(j=0;j<r2;j++)
	{
	printf("b%d%d =",i+1,j+1);
	scanf("%d", &b[i][j]);
	
	}
	printf("\n");
}

	  for (i = 0; i < c1; i++)
	  {
		  for (j = 0; j < r2; j++)
		  {
			  result[i][j] = 0;
			  for (k = 0; k < r1; k++)
			  {

				  result[i][j] += a[i][k] * b[k][j];
			  }

		  }
	  }








   for(i=0;i<c1;i++)
{
	for(j=0;j<r2;j++) printf("%d\t", result[i][j]);
		printf("\n");
}
    return 0;
}
