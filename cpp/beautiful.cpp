#include <iostream>
#include <cmath>
int main()
{
	int matrix[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			std::cin>>matrix[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(matrix[i][j]==1)
			{
				std::cout<<abs(i-2)+abs(j-2);
				break;
			}
		}
	}
	return 0;
}