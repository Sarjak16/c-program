#include <stdio.h>
int main() {
    int i,j,k,s;
    for(i=1;i<=5;i++) {
        for(j=0;j<i;j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    s=3;
    for(i=1;i<=7;i+=2) {
        for(k=0;k<s;k++) {
            printf(" ");
        } 
        for(j=0;j<i;j++) {
            printf("*");
        }
        s--;
        printf("\n");
    }
    printf("\n");
    for(i=5;i>=1;i--) {
        for(j=5;j>=i;j--) {
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");
    s=4;
    for(i=1;i<=5;i++) {
        for(k=0;k<s;k++) {
            printf(" ");
        }
        if(i>1){
            for(j=i;j>1;j--) {
                printf("%d",j);
            }
        }
        
        for(j=1;j<=i;j++) {
            printf("%d",j);
        }
        s--;
        printf("\n");
    }

    printf("\n");
    s=0;
    for(i=7;i>=1;i-=2) {
        for(k=0;k<s;k++) {
            printf(" ");
        }
        for(j=i;j>=1;j--) {
            printf("*");
        }
        s++;
        printf("\n");
    }
    return 0;
}