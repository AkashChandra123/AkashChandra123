#include<stdio.h>
int main(){
    int sm1[5][3] = {
        {4,   5,   4},
        {0,  3,   30},
        {1,   1,   10},
        {2,   3,   40},
        {3,   4,   21}}
    int sm2[5][3] = {
        {4,   5,   5},
        {0,   2,   65},
        {1,   1,   12},
        {2,   3,   45},
        {3,   3,   71}}
    int sm3[5][3];
    sm3[0][0] = 4;
    sm3[0][1] = 5;
    sm3[0][2] = count;
     for(int i = 1; i <= 5; i++){
        for(int j = 0; j < 3; j++){
            if(sm1[i][0] >)
            if(sm1[i][0] == sm2[i][0] && sm1[i][1] == sm2[i][1]){
                sm3[i][2] = sm1[i][2] + sm2[i][2];
                count++;
            }
        }
    }
    int count = 0;
   
        
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", sm3[i][j]);
        }
        printf("\n");
    }
    return 0;

}