#include <stdio.h>

void cat() {
    int c;
    printf("\nCategory:\n");
    printf("1. Action\n2. Comedy\n3. Horror\n4. Drama\n");
    printf("Select: ");
    scanf("%d",&c);

    if(c==1) {
        printf("Try: pathaan, pushpha, RRR, KGF, Marco, Salaar\n");
    } else if(c==2) {
        printf("Try: Bhool Bhulaiyaa, 3idiots, houseful, Welcome\n");
    } else if(c==3) {
        printf("Try: Tumbbad, Kanchana, stree\n");
    } else if(c==4) {
        printf("Try: Mission Mangal, Dear Zindagi, Chak De India\n");
    } else {
        printf("Wrong option\n");
    }
}
