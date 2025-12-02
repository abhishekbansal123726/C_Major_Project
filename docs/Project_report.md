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
 1. MAIN FUNCTION-Algorithm

1.	Start the program.

2.	Take the user’s name as input.

3.	Run a loop that keeps displaying 
the menu again and again.

4.	Take the user’s choice.

5.	If:

o	1 → call the category function

o	2 → call the mood function

o	3 → call the genre function

o	4 → call the age function

o	5 → call the industry function

o	6 → print the exit message

6.	If the user enters a wrong choice 

→ print an error message.

7.	When the user presses 6, the program should stop.


2.	CATEGORY FUNCTION- Algorithm

1.	Print the category menu.

2.	Take the category number as input 
from the user.

3.	If:

•	1 → print action movies

•	2 → print comedy movies

•	3 → print horror movies

•	4 → print drama movies

4.	Otherwise → print “wrong option”.


3.	MOOD FUNCTION – Algorithm

1.  Show the mood list to the user.

2. Take the user’s input.

3. Match the mood using a switch-case.

4. Print the movies for that mood.

5. If the input is wrong → print an error message


5.	GENRE FUNCTION – Algorithm

1.	the genre options.

2.	Take input from the user.

3.	Print movies based on the user’s 
input.

4.	If the input is incorrect → show “invalid Print entry”.


5.	AGE-BASED FUNCTION – Algorithm

1.  The user enters their age.

2. Compare the age:

•	<13 → show kids’ movies

•	13–17 → show teen movies

•	18–40 → show adult movies

3.   Print the output.


6.	INDUSTRY FUNCTION - Algorithm

 1.Show the industry options.
 
 2.Wait for the user’s input.
 
 3.Print movies based on the input.
 
 4.If the value is wrong → show an invalid message.



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

    printf("1. Happy\n2. Sad\n3. Lonely\n4.

     Excited\n");

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



