#include<stdio.h>
#include<stdbool.h>
bool **creategraph(int N);
void addedge(bool **adjmatrix,int N,int m,int n);
void removeedge(bool **adjmatrix,int N,int m,int n);
bool checkedge(bool**adjmatrix,int N,int m,int n);
void displayadjmatrix(bool **adjmatrix,int N);
int main()
{
    bool **mygraph=creategraph(6);
    addedge(mygraph,6,1,1);
    addedge(mygraph,6,1,6);
    addedge(mygraph,6,2,6);
    addedge(mygraph,6,3,4);
    addedge(mygraph,6,3,5);
    addedge(mygraph,6,4,6);
     removeedge(mygraph,6,1,6);
    displayadjmatrix(mygraph,6);
    return 0;

}
bool **creategraph(int N)
{
    bool **matrix=malloc(N*sizeof(bool *));
   for( int i=1;i<=N;i++)
   {
        matrix[i]=calloc(N,sizeof(bool));
   }

    return matrix;

}
void displayadjmatrix(bool **adjmatrix,int N)
{
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            printf("%d",adjmatrix[i][j]);
        }
        printf("\n");
    }
}
void addedge(bool **adjmatrix,int N,int m,int n)
{
  if(m>N || n>N)
  {
      return;
  }
  adjmatrix[m][n]=1;
  //adjmatrix[n][m]=1;
}
void removeedge(bool **adjmatrix, int N ,int m, int n) {
    if (m > N || n > N)
        {
        return;
    }
    adjmatrix[m][n] = 0;
    adjmatrix[n][m] = 0;
}
bool checkedge(bool **adjmatrix,int N, int m, int n) {
    if (m > N || n > N)
        {
        return false;
        }
    return adjmatrix[m][n];
}



