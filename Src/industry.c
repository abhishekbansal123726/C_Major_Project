#include <stdio.h>

void industry() {
    int ind;
    printf("\nSelect Industry:\n");
    printf("1. Bollywood\n2. Hollywood\n3. Tollywood\n");
    printf("Select: ");
    scanf("%d", &ind);

    if(ind == 1) {
        printf("Bollywood Picks: Pathaan, Dangal, Drishyam 2, Jawan\n");
    } 
    else if(ind == 2) {
        printf("Hollywood Picks: Avatar, Inception, Avengers, John Wick\n");
    } 
    else if(ind == 3) {
        printf("Tollywood Picks: RRR, Baahubali, Pushpa, Arjun Reddy\n");
    }
    else {
        printf("Invalid industry\n");
    }
}
