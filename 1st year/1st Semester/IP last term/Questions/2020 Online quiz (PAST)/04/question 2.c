#include<stdio.h>
int main(void)
{
	int i,j,k;
	int matx1[5][5];
	int matx2[5][5];
	int num = 1;
	int total[5][5] ={0};
	
	printf("Enter Martix size : ");
	scanf("%d" , &i);
	
	//getting Input for Both matrix
	while(num <= 2)
	{
		printf("\nMatrix Number %d\n" , num);
		for(j=0 ; j<i ; j++)
		{
			for(k=0 ; k<i ; k++)
			{
				if(num == 1)
				{
					printf("%d row %d column element : " , j+1 , k+1);
					scanf("%d" , &matx1[j][k]);
				}
				else if(num == 2)
				{
					printf("%d row %d column element : " , j+1 , k+1);
					scanf("%d" , &matx2[j][k]);
				}
			}
		}
		num = num + 1;
	}
	
	//Calculating Total
		for(j=0 ; j<i ; j++)
		{
			for(k=0 ; k<i ; k++)
			{
				total[j][k] =  total[j][k]  + matx1[j][k] + matx2[j][k];
			}
		}
	puts("");
	puts("");
	num = 1;
	//print input matrix
	while(num <= 2)
	{
		printf("\nMatrix Number %d\n" , num);
		for(j=0 ; j<i ; j++)
		{
			for(k=0 ; k<i ; k++)
			{
				if(num == 1)
				{
					printf("%d\t" , matx1[j][k]);
				}
				else if(num == 2)
				{
					printf("%d\t" , matx2[j][k]);
				}
			}
			puts("");
		}
		num = num + 1;
		puts("");
		puts("");
	}
	
	num = 1;
	puts("");
	puts("");
	
	printf("Total \n");
	for(j=0 ; j<i ; j++)
	{
		for(k=0 ; k<i ; k++)
		{
				printf("%d\t" , total[j][k]);
		}
		puts("");
	}
	

	return 0;
}
