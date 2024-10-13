#include<stdio.h>
int main(){

  int i,j,k;
  int marks[2][2][3]={{{30,10,38},{20,90,75}},{{30,23,46},{57,42,51}}};
  for(i=0;i<2;i++){
  for(j=0;j<2;j++){
  for(k=0;k<3;k++){
    printf("marmks[%d][%d][%d]=%d\n" ,i,j,k, marks[i][j][k]);
    }
    }
    }
    return 0;
    }