#include <iostream>
#include <cmath>
using namespace std;
bool canPlace(int mat[][9],int i,int j,int n,int number) 
{
    ///check for the row and column
    for(int x=0;x<n;x++) 
    {
        if(mat[i][x]==number || mat[x][j]==number) 
        {
            return false;
        }
    }

    ///check for the grid
    int rn=sqrt(n);

    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;

    for(int p=sx;p<sx+rn;p++) 
    {
        for(int q=sy;q<sy+rn;q++) 
        {
            if(mat[p][q]==number) 
            {
                return false;
            }
        }
    }

    return true;
}


///i,j - represents cell in a sudoku
///n - is size of the matrix (n*n)
bool solvesudoku(int mat[9][9],int i,int j,int n) 
{
    ///Check row is over or not
    if(i==n) 
    {
        ///print
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n;j++) 
            {
                cout << mat[i][j] << " ";
            }
            cout <<endl;
        }
        return true;
    }

    ///Check column is over or not
    if(j==n) 
    {
        return solvesudoku(mat,i+1,0,n);
    }

    ///Skip the pre filled cells
    if(mat[i][j]!=0) 
    {
        return solvesudoku(mat,i,j+1,n);
    }

    ///Rec case
    ///Fill the current postition with possible options
    for(int number=1;number<=n;number++) 
    {
        if(canPlace(mat,i,j,n,number)) 
        {
            ///Assume we can place x in this position
            mat[i][j]=number;

            ///Solve for the rest
            bool couldWesolve = solvesudoku(mat,i,j+1,n);

            if(couldWesolve==true) 
            {
                return true;
            }  
        }
    }

    ///Backtrack
    mat[i][j]=0;
    ///We tried all possible combination but we coundn't print it

    return false;
}

int main() 
{
    int n;
    cin >> n;

    int mat[9][9];
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++)  
        {
            cin >> mat[i][j];
        }
    }

    solvesudoku(mat,0,0,n);

    return 0;
}
