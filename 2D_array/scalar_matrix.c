#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==j)
            {
                if(a[i][j] != a[0][0])
                {
                    flag=0;
                }
            }
            else if(a[i][j]!=0)
            {
                flag=0;
            }
        }
        
    }

    if(flag)
    {
        printf("Scalar Matrix");
    }
    else
    {
        printf("Not Scalar Matrix");
    }
    
    return 0;
}


// input
// 3 3
// 2 0 0
// 0 2 0
// 0 0 2