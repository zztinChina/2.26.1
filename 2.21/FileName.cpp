#include<stdio.h>
int find(char arr[3][3], int n, int* x, int * y)
{
	int row = 0;
	int col = *y-1;
	while (row < *x && col>=0)
	{
		if (arr[row][col] > n)
		{
			col--;
		}
		else if(arr[row][col] < n)
		{
			row++;
		}
		else if (arr[row][col] == n)
		{  
			*x = row;
			*y = col;
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int n = 0;
	int x = 3;
	int y = 3;
	scanf_s("%d", &n);
	int res=find(arr, n,&x,&y);
	if (res == 1)
	{
		printf("找到了\n");
		printf("横坐标：%d  纵坐标为： %d ", x, y);
	}
	else
		printf("没有找到");
	return 0;
}