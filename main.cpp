/* https://github.com/sohitfirs/5.6.git */

#include <stdio.h>
#include <cstdlib>
#include <time.h>

main()
{
	int mas[100][100];
	int n, m;
	
	printf("n=");
	scanf("%i", &n);
	
	printf("m=");
	scanf("%i", &m);
	
	srand(time(NULL));
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			mas[i][j]=rand()%11;
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			printf("%3i", mas[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\n");

	bool skip = false;
	int buf;
	
	while (!skip) 
	{
	    skip = true;
	    for (int i = 0; i < n; i++)
	    {
	      for (int j = 0; j < m-1; j++)
	      {
	        if (mas[i][j] > mas[i][j + 1]) 
			{
	          buf=mas[i][j];
	          mas[i][j]=mas[i][j + 1];
	          mas[i][j + 1]=buf;
	          skip = false;
	        }
	        
	      }
	    }
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			printf("%3i", mas[i][j]);
		}
		printf("\n");
	}

	for(int j=0; j<m/2; j++)
	{
		for(int i=0; i<n; i++) 
		{
			if(mas[i][j]==mas[i][0] || mas[i][j]==mas[i][m-1])
			{
				int q = mas[i][j];
				mas[i][j] = mas[i][m-1-j];
				mas[i][m-1-j] = q;
			}
		}
	}
	
	printf("\n\n\n\n");
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			printf("%3i", mas[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
}

