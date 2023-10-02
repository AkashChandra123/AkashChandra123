#include <stdio.h>

void swap (int* a59, int* b59) {
    int t = *a59;
    *a59 = *b59;
    *b59 = t;
}

void gen_perms (int arr59[], int start59, int end59) {
    if (start59 == end59) {
        for (int i59 = 0; i59 <= end59; i59++) {
            printf("%d ", arr59[i59]);
        }
        printf("\n");
    } else {
        for (int i59 = start59; i59 <= end59; i59++) {
            swap(&arr59[start59], &arr59[i59]);
            gen_perms(arr59, start59 + 1, end59);
            swap(&arr59[start59], &arr59[i59]); 
        }
    }
}

void main () {

    int n59;
    printf("Enter the number of Elements: \n");
    scanf("%d", &n59);

    int arr59[n59];

    printf("Enter the Elements: \n");    
    for (int i59 = 0; i59 < n59; i59++) {
        scanf("%d", &arr59[i59]);
    }

    printf("The permutations are:\n");
    gen_perms(arr59, 0, n59 - 1);
}