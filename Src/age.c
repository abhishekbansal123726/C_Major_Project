#include <stdio.h>

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