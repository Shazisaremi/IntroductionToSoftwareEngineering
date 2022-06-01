//
// Created by rezaz on 5/28/2022.
//

#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a + *b;
    int abs_different = *a - *b;
    *a = sum;
    if (abs_different < 0){
        abs_different = -abs_different;
    }
    *b = abs_different;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
