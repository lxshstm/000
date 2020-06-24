#include<stdio.h>
int main()
{
    int n,m;
 scanf("%d",&m);
 scanf("%d",&n);
    char num[100][100]={0};
    char count = 'A';
    int count1=1;
    int x = 0, y = 0;
    int dx = 0, dy = 1;
    if(n==1)
    {
        for(int i=0;i<m;i++)
        printf(" %c\n",count++);
        printf("\n");
    }
    else
    {
    while (count1 <= m * n)
    {
        num[x][y] = count;
        x += dx;
        y += dy;
        if (dy == 1 && (y >= n - 1 || num[x][y+1] != 0))
        {
            dx = 1;
            dy = 0;
        }
        else if (dx == 1 && (x >= m - 1 || num[x+1][y] != 0))
        {
            dx = 0;
            dy = -1;
        }
        else if (dy == -1 && (y <= 0 || num[x][y-1] != 0))
        {
            dx = -1;
            dy = 0;
        }
        else if (dx == -1 && (x <= 0 || num[x-1][y] != 0))
        {
            dx = 0;
            dy = 1;
        }
        if (count >=90)
        {
            count=count-90+65;
        }
        else
        {
            count++;
        }
        count1++;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %c",num[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}
