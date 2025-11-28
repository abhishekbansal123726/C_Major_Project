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

void ageR() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age < 13) {
        printf("Kids Movies: Doraemon, Kung Fu Panda, Cars, Toy Story,My Freind Ganesha\n");
    } else if(age >= 13 && age < 18) {
        printf("Teen Movies: Spider-Man, Student of the Year, Spiderman\n");
    } else if(age >= 18 && age <= 40) {
        printf("Adult Picks: 12th Fail, Rockstar, munna bhai Mbbs, Dangal\n");
    } else {
        printf("Senior Choices: sallar, Sita Raman\n");
    }
}

void industry() {
    int ind;
    printf("\nSelect Industry:\n");
    printf("1. Bollywood\n2. Hollywood\n3. Tollywood\n");
    printf("Select: ");
    scanf("%d", &ind);

    if(ind == 1) {
        printf("Bollywood Picks: Pathaan, Dangal, Drishyam 2, Jawan, War, Dhoom3, Baaghi\n");
    } 
    else if(ind == 2) {
        printf("Hollywood Picks: Avatar, Inception, Avengers, John Wick\n");
    } 
    else if(ind == 3) {
        printf("Tollywood Picks: RRR, Baahubali, Pushpa, Arjun Reddy, Guntur Karam, Leo, Maharshi\n");
    }
    else {
        printf("Invalid industry\n");
    }
}