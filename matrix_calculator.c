#include<stdio.h>

//input MATRIX
void mat(int r, int c,int a[10][10]){
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
}

//display MATRIX
void dispmat(int b[10][10], int l, int m){
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
          printf("%d\t",b[i][j]);
        }
    printf("\n");
    }
}

//sum
void sum(int m[10][10], int n[10][10], int sum[10][10])
{
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      sum[i][j] = m[i][j] + n[i][j];
    }
      
  }
}
void diff(int m[10][10], int n[10][10], int diffr[10][10])
{
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      diffr[i][j] = m[i][j] - n[i][j];
    }
      
  }
}

void mult(int m[10][10], int n[10][10], int p, int q, int r, int s, int result[10][10])
{
    if(q==r){
  for(int i=0; i < p; i++)
  {
    for(int j=0; j < s; j++)
    {
      result[i][j] = 0; 
      for (int k = 0; k < q; k++)
      {
      result[i][j] = result[i][j] + m[i][k] * n[k][j];
      }
    }
  }
        
    }
    else{
        printf("INVALID");
    }
}

void trs(int matrix[10][10], int trans[10][10])
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      trans[i][j] = matrix[j][i];
        
    }
      
  }
}


void main()
{
    int a[10][10],b[10][10],c[10][10],m,l,n,o,sel;
    printf("ENTER THE NUMBER OF ROWS OF MATRIX 1:");
    scanf("%d",&l);
    printf("ENTER THE NUMBER OF COLOUMS OF MATRIX 1:");
    scanf("%d",&m);
    printf("ENTER MATRIX 1");
    mat(l,m,a);
    printf("ENTER THE NUMBER OF ROWS OF MATRIX 2:");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF COLOUMS OF MATRIX 2:");
    scanf("%d",&o);
    printf("ENTER MATRIX 2");
    mat(n,o,b);
    
    printf("SELECT AN OPTION\n 1. Sum \n2.Diff \n3.Mult \n4.Transpose");
    scanf("%d",&sel);
    
    switch(sel){
    case 1: 
      sum(a,b,c);
      dispmat(c,l,m);
      break;
    case 2: 
      diff(a,b,c);
      dispmat(c,l,m);
      break;
    case 3: 
      mult(a,b,l,m,n,o,c);
      dispmat(c,l,o);
      break;
    case 4: 
      trs(a,c);
      dispmat(c,l,m);
      trs(b,c);
      dispmat(c,n,o);
      break;
    }
    default:
      printf("Invalid Selection");
      break;
    
}