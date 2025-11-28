1.	Title Page
Project Title:
MOVIE RECOMMENDATION SYSTEM (C Programming Project)
Submitted By: Abhishek Bansal
Course: B.Tech (Computer Science)
University: UPES Dehradun
Submitted To: Dr. Tanu singh

2. Abstract
A basic movie recommendation system created with the C programming language is presented in this project.
The system recommends movies based on Category, Mood, Genre, Age Group, and Film Industry.
To make the code understandable, reusable, and simple to maintain, it employs modular programming with functions.
Conditional statements, loops, user input handling, and menus are among the fundamental C concepts that are demonstrated in this project.
The output is displayed in the terminal along with user-friendly, interactive options.

3. Problem Definition
Users often get confused about which movie to watch based on their mood or preferences.
The goal of this project is to create a console-based movie recommender that: • Accepts basic user input; • Recognizes the user's mood or preferred genre; • Instantaneously suggests appropriate films; and • Offers a simple, interactive menu-based interface.
The issue of searching or pondering over what to watch for too long is resolved by the system.

4. System Design

4.2 Algorithm
1. Start the program
2. Display the title of the project
3. Ask the user to enter their name
4. Display the main menu with six options
5. Take the user's choice as input
6. Call the appropriate function based on the choice
  1 → cat()
  2 → mood()
  3 → genre()
  4 → ageR()
  5 → industry()
  6 → Exit program
7. If the user enters an invalid choice show Invalid choice
8. Repeat the menu until the user chooses to exit
9. End the program



5. Implementation Details (with Snippets)
Use of Header File
void cat();
void mood();
void genre();
void ageR();
void industry();
Main Menu Snippet
do {
    printf("\nMenu:\n");
    printf("1. Category Based\n");
    printf("2. Mood Based\n");
    printf("3. Genre Based\n");
    printf("4. Age Based\n");
    printf("5. Industry Based\n");
    printf("6. Exit\n");

    scanf("%d",&ch);

    switch(ch) {
        case 1: cat(); break;
        case 2: mood(); break;
        case 3: genre(); break;
        case 4: ageR(); break;
        case 5: industry(); break;
        case 6: printf("Bye!"); break;
        default: printf("Invalid choice!");
    }
} while(ch != 6);
Example Function Snippet
void mood() {
    int m;
    printf("1. Happy\n2. Sad\n3. Lonely\n4. Excited\n");
    scanf("%d", &m);

    switch(m) {
        case 1: printf("Watch: 3 Idiots, Housefull\n"); break;
        case 2: printf("Watch: Tamasha, Aashique 2\n"); break;
        case 3: printf("Watch: Avengers, Udaan\n"); break;
        case 4: printf("Watch: Chichhore\n"); break;
        default: printf("Invalid mood\n");
    }
}

6. Testing & Results
Test Case 1
Input: Category → 1 (Action)
Output: Pathaan, Pushpa, RRR, KGF, Salaar
Test Case 2
Input: Mood → Happy
Output: 3 Idiots, Housefull, Munna Bhai
Test Case 3
Input: Age = 10
Output: Doraemon, Kung Fu Panda, Toy Story
Test Case 4
Input: Industry → Hollywood
Output: Avatar, Inception, John Wick
Program Output is correct + No crashes or segmentation faults.

7. Conclusion & Future Work
Conclusion
The Movie Recommendation System successfully recommends movies based on various user preferences.
It demonstrates core C programming concepts like loops, functions, conditionals, menus, and modular programming.
Future Work
•	Add file handling to store watch history
•	Add more advanced categories
•	Build a GUI version
•	Connect to an API for real-time movie suggestions


8. References
•	C Programming Textbook – Let us C
•	online C documentation
•	Class notes and lab materials



