#include <stdio.h>

void genre() {
    int g;
    printf("\nGenre List:\n");
    printf("1. Adventure\n2. Romance\n3. Thriller\n4. Animation\n");
    printf("Select: ");
    scanf("%d",&g);

    if(g==1) {
        printf("Try: Zindagi na milegi dobara, Yeh Jawaani hai Deewani, Mission Mumbai\n");
    } else if(g==2) {
        printf("Try: Aashiqui 2, saiyaara, Param sundari\n");
    } else if(g==3) {
        printf("Try: Deva, Kantara, War2\n");
    } else if(g==4) {
        printf("Try: Motu Patlu, chota Bheem, Bal Ganesh\n");
    } else {
        printf("Invalid entry\n");
    }
}
