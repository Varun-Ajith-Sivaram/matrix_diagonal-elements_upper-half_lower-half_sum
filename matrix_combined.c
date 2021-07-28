#include<stdio.h>
#include<stdlib.h>

void mat_read(int x,int y,int[x][y]);
void mat_display(int x, int y,int[x][y]);
void mat_diagonal(int x,int y,int[x][y]);
void mat_lower(int x,int y,int[x][y]);
void mat_upper(int x,int y,int[x][y]);

int i,j,m,n;

void main()
{
    printf("\tDiagonal Elements, Lower Half & Upper Half of Square Matrix\n");
    
    printf("\n Enter the no. of rows & columns (order) of the matrix: \n");
    scanf("%d %d",&m,&n);
    
    int a[m][n];
    
    if(m!=n)
    {
        printf("\n   --> Inputted matrices are not square\n");
        printf("\n   --> Exited the program\n");

        exit(1); 
    }
    
    printf("\n   Enter the elements of the matrix: \n");
    mat_read(m,n,a);
                
    printf("\nMatrix: \n");
    mat_display(m,n,a);
    
    printf("\nDiagonal elements of matrix: \n");
    mat_diagonal(m,n,a);
    
    printf("\nLower half of matrix: \n");
    mat_lower(m,n,a);
    
    printf("\nUpper half of matrix: \n");
    mat_upper(m,n,a);
}

void mat_read(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Element at index(%d,%d): ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void mat_display(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("\t");
        for(j=0;j<y;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}

void mat_diagonal(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("\t");
        for(j=0;j<y;j++)
        {
            if(i==j)
                printf("%d  ",mat[i][j]);
            
            else
                printf("   ");
        }
        printf("\n");
    }
}

void mat_lower(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("\t");
        for(j=0;j<y;j++)
        {
            if(i>=j)
                printf("%d  ",mat[i][j]);
            
            else
                printf("   ");
        }
        printf("\n");
    }
}

void mat_upper(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("\t");
        for(j=0;j<y;j++)
        {
            if(i<=j)
                printf("%d  ",mat[i][j]);
            
            else
                printf("   ");
        }
        printf("\n");
    }
}
