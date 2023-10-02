#include<stdio.h>
//void read_sm(int sm[][3]){
  //  int r, c, i, j, n;
    //printf("\nEnter r and c and nonzero values: ");
 //   scanf("%d  %d  %d", &r,&c,&n);
  //  printf("enter the non zero values:");
 //   for(i = 0; i < n; i++){
   //     printf("enter row, col and value: ");
    //    scanf("%d %d %d", &sm[i][0], &sm[i][1], &sm[i][2]);
    //}
   // sm[0][0] = r;
   // sm[0][1] = c;
    //sm[0][2] = n;
//}

//void print_sm(int sm[][3]){
  //  int i;
    //printf("\n\nSparse matrix...\n");
    //for(i = 0; i < sm[0][2]; i++)
      //  printf("%d\t%d\t%d\n", sm[i][0], sm[i][1], sm[i][2]);
    
//}
void add_sp(int sm1[][3], int sm2[][3], int sm3[][3]){
    int r, c, i, j, k1, k2, k3, tot1, tot2;
    if(sm1[0][0] != sm2[0][0] || sm1[0][1] != sm2[0][1]){
        printf("invalid matrix size");
        return;
    }
    tot1 = sm1[0][2];
    tot2 = sm2[0][2];
    k1 = k2 = k3 = 1;
    while(k1 <= tot1 && k2 <= tot2){
        if(sm1[k1][0] < sm2[k2][0]){
            sm3[k3][0] = sm1[k1][0];
            sm3[k3][1] = sm1[k1][1];
            sm3[k3][2] = sm1[k1][2];
            k3++; k1++;
        }
        else
        if(sm1[k1][0] > sm2[k2][0]){
            sm3[k3][0] = sm2[k2][0];
            sm3[k3][1] = sm2[k2][1];
            sm3[k3][2] = sm2[k2][2];
            k3++; k2++;
        }
        else
        if(sm1[k1][1] < sm2[k2][1]){
            sm3[k3][0] = sm1[k1][0];
            sm3[k3][1] = sm1[k1][1];
            sm3[k3][2] = sm3[k1][2];
            k1++; k3++;
        }
        else
        if(sm1[k1][1] > sm2[k2][1]){
            sm3[k3][0] = sm3[k2][0];
            sm3[k3][1] = sm3[k2][1];
            sm3[k3][2] = sm3[k2][2];
            k3++; k2++;
        }
        else
        if(sm1[k1][0] == sm2[k2][0]){
            sm3[k1][0] = sm2[k2][0];
            sm3[k1][1] = sm2[k2][1];
            sm3[k1][2] = sm2[k2][2];
            k3++; k2++; k1++;
        }
    }
    while(k1 <= tot1){
        sm3[k3][0] = sm1[k1][0];
        sm3[k3][1] = sm1[k1][1];
        sm3[k3][2] = sm1[k1][2];
        k3++; k1++;
    }
    while(k2 <= tot2){
        sm3[k3][0] = sm2[k2][0];
        sm3[k3][1] = sm2[k2][1];
        sm3[k3][2] = sm2[k2][2];
        k3++; k2++;
    }
    sm3[0][0] = sm1[0][0];
    sm3[0][1] = sm1[0][1];
    sm3[0][2] = k3 -1;
}

int main(){
    int sm1[10][3] = {
        {4,   5,   4},
        {0,   3,   30},
        {1,   1,   10},
        {2,   3,   40},
        {3,   4,   21}};

    int sm2[10][3] = {
        {4,   5,   5},
        {0,   2,   65},
        {1,   1,   12},
        {2,   3,   45},
        {3,   3,   71}};

    int sm3[10][3];
    int i, j, k3;
    printf(" Sparse matrix1 is : %d ", sm1[10][3]);
    printf("sparse matrix2 is : %d ", sm2[10][3]);

    printf("after addition of sparse matrix1 & 2 is:\n");

    add_sp(sm1, sm2, sm3);

    k3 = sm3[0][2];
    for(i = 0; i <= k3; i++){
        for(j = 0; j < 3; j++){
            printf("%d  ", sm3[i][j]);
        }
        printf("\n");

    }
   return 0;
}
