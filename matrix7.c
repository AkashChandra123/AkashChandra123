#include<stdio.h>
int main(){
    int i, list[100], n, position, data;

    printf("enter the number of elements: ");
    scanf("%d", &n);

    printf("enter the elements:%d", n);

    for(i = 0; i < n; i++){
        scanf("%d", &list[i]);
    }
    printf("enter the position of element to innsert: ");
    scanf("%d", &position);

    printf("enter the new element: ");
    scanf("%d", &data);
    for(i = n - 1; i >= position - 1; i--){
        list[i + 1] = list[i];
    }
    list[position - 1] = data;
    printf("resultant array is\n");
    for(i = 0; i <= n; i++){
        printf("%d\t", list[i]);
    }
    return 0;
}