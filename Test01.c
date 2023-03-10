#include<stdio.h>
#include<time.h>

#define N 9

int main() {
    int i,j,k,l,m;
    for ( i = 1; i < N; i++ ) {
        for ( j = 0; j < N; j++ ) {
            printf("%03d ", i*j);
        }
        printf("\n");
    }
    return 0;
}