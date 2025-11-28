#include <stdio.h>

void cat();
void mood();
void genre();
void ageR();
void industry(); 

int main() {
    char name[40];
    int ch;

    printf("======== Movie Recommender ========\n");

    printf("Enter Name : ");
    scanf("%s", name);

    do {
        printf("\nMenu:\n");
        printf("1. Category Based\n");
        printf("2. Mood Based\n");
        printf("3. Genre Based\n");
        printf("4. Age Based\n");
        printf("5. Industry Based (Bollywood / Hollywood / Tollywood)\n"); 
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1: cat(); break;
            case 2: mood(); break;
            case 3: genre(); break;
            case 4: ageR(); break;
            case 5: industry(); break;  
            case 6: printf("Bye %s!\n", name); break;
            default: printf("Invalid choice!!\n");
        }

    } while(ch != 6);

    return 0;
}