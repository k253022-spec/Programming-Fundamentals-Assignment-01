#include <stdio.h>

int main() {

    int a, b, c, d, e;

    printf("Enter 5 card numbers (1-13):");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);



    if((a==b && b==c && d==e && a!=d) ||
       (a==b && b==d && c==e && a!=c) ||
       (a==b && b==e && c==d && a!=c) ||
       (a==c && c==d && b==e && a!=b) ||
       (a==c && c==e && b==d && a!=b) ||
       (a==d && d==e && b==c && a!=b) ||
       (b==c && c==d && a==e && b!=a) ||
       (b==c && c==e && a==d && b!=a) ||
       (b==d && d==e && a==c && b!=a) ||
       (c==d && d==e && a==b && c!=a))
      
    {
        printf("Full House\n");
    }
    else
    {
        printf("Not a Full House\n");
    }

    return 0;
}
