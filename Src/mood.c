#include <stdio.h>

void mood() {
    int m;
    printf("\nYour Mood:\n");
    printf("1. Happy\n2. Sad\n3. lonely\n4. Excited\n");
    printf("Select: ");
    scanf("%d",&m);

    switch(m) {
        case 1: printf("Watch: 3 Idiots, houseful, Munna Bhai\n"); break;
        case 2: printf("Watch: Tamasha, Aashique 2, Raanjhanaa\n"); break;
        case 3: printf("Watch: Avengers, Arjun Reddy, Uddan\n"); break;
        case 4: printf("Watch: Chichhore, Student of the year, HeroPanti\n"); break;
        default: printf("Invalid mood\n");
    }
}