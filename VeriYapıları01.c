#include <stdio.h>
#include <stdlib.h>


void diziYaz(int *dizi,int size){
    int i;
    for(i=0;i<size;i++)
        prinf("%4d",*(dizi+i));
    printf("\n");
}

void diziyaz(int (*dizi)[2],int row,int column){
    int i,j;
    for(i=0;i<row;i++){
      for(j=0;j<column;j++){
          printf("%10d",dizi[i][j]);
          }
          printf("\n");
      }
    }

void diziYaz1(int (*dizi)[3][5],int size){
    int i,j,k;
    for(i=0;i<size;i++){
      for(j=0;j<3;j++){
        for(k=0;k<5;k++){
            printf("%4d",dizi[i][j][k]);
        printf("\n");
        }
        printf("\n");
    }
}

void matrisCarpim(int A[][3], int A_row, int A_column,
                  int B[][2], int B_row, int B_column,
                  int C[][2], int C_row, int C_column){
    int i,j,k;

    if(A_column!=B_row){

        printf("Carpim matrislerinin boyutlari uyusmuyor!!!");
        return;

    }

    else if(A_row!=C_row || B_column!=C_column){

        printf("Sonuc matrisinin boyutlari carpan matrislere uymuyor!!!\n");
        return;

    }

    else{

        for(i=0; i<A_row; i++){

            for(j=0; j<B_column; j++){

                C[i][j]=0;
                for(k=0; k<A_column; k++){
                
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];

                    }
                    
                printf("%4d",C[i][j]);
                
            }
            
        printf("\n");
        
        }

    }

}

//--------MAİN------

int main(int argc, char** argv) {
    int A[]={0,1,2,3,4,5,6,7,8,9};

    int B[][5]={{0,1,2,3,4},
                 {5,6,7,18,9},
                 {10,221,232,243,234},
                 {0,321,32,32,22}};

    int C[2][3][5]= {{{0,1,234,333,32},{1,77,2,1,4},{0,2,242,243,244}},
                 {{0,1,2,3,4},{1,8,5,3,14},{0,1,2,3,74}}};


    int AA[][3]={{7,5,6},
                 {23,14,443},
                 {335,144,0},
                 {143,243,34}};

    int BB[][2]={{0,1},
                 {2,3},
                 {4,5}};

    int CC[4][3];

    diziYaz(&C[0][0][0], 7);

    diziyaz(CC,4,2);

    diziYaz1(C+1, 1);

    matrisCarpimi(AA,4,3,BB,3,2,CC,4,2);


    return 0;
}
