#include <stdio.h>
#include <math.h>

int main() {
    // code here
    char s[100];
    int n;
    float f;
    
    scanf("%[^\n]", &s);
    scanf("%d", &n);
    scanf("%f", &f);
    
    printf("%s\n", s);
    printf("%d\n", n);
    printf("%d\n", (int)floor(f));

    return 0;
}