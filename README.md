# C_Major_Project
Movie Recommender System (C Project)

This is a C-based Movie Recommender Program that suggests movies based on:
Category (Action, Comedy, Horror, Drama)
Mood (Happy, Sad, Lonely, Excited)
Genre (Adventure, Romance, Thriller, Animation)
Age Group
Film Industry (Bollywood, Hollywood, Tollywood)

The program runs in a menu-driven format and provides movie suggestions based on user choices.

 Features
✔ Category-based recommendations
✔ Mood-based movie suggestions
✔ Genre selection
✔ Age-wise movie suggestions
✔ Choose industry: Bollywood / Hollywood / Tollywood
✔ User-friendly menu
✔ Works on any GCC compiler

Project Structure
 Movie-Recommender
├── movie_recommender.c      # Main C source code
└── README.md                # Documentation

🛠️ Technologies Used
Component	Description
Language	C Programming
Compiler	GCC / MinGW / Clang
Concepts Used	Functions, Menus, Loops, Conditional Statements

Compilation & Execution

Step 1 — Compile
gcc movie_recommender.c -o movie

Step 2 — Run
./movie

How It Works
User enters their name
A menu displays 6 options
User selects an option (1–6)
Program calls the respective function
Movie recommendations are shown
Loop continues until user selects Exit (6)

Menu Overview:
1 -> cat()       : Category-based suggestions
2 -> mood()      : Mood-specific recommendations
3 -> genre()     : Genre selection & suggestions
4 -> ageR()      : Age wise recommendations
5 -> industry()  : Industry (Bollywood/Hollywood/Tollywood)
6 -> Exit        : Close the program

Sample Output:
======== Movie Recommender ========
Enter Name : Abhishek

Menu:
1. Category Based
2. Mood Based
3. Genre Based
4. Age Based
5. Industry Based (Bollywood / Hollywood / Tollywood)
6. Exit

Enter choice: 2
Your Mood:
1. Happy
2. Sad
3. Lonely
4. Excited
Select: 1

Watch: 3 Idiots, Housefull, Munna Bhai
