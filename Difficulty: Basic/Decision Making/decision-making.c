#include <stdio.h>

int main() {
    // code here
    int n, m;
    scanf("%d %d", &n, &m);
    
    if(n > m){
        printf("greater\n");
    } else if(n < m){
        printf("less\n");
    } else {
        printf("equal\n");
    }


    return 0;
}