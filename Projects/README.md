<div align="center">

<img src="https://capsule-render.vercel.app/api?type=rounded&color=0:111827,100:0F766E&height=145&section=header&text=Small%20C%20Projects&fontSize=36&fontColor=FFFFFF&fontAlignY=42&desc=Build%20it%20%7C%20Test%20it%20%7C%20Explain%20it&descAlignY=70&descSize=14" width="100%" alt="Small C projects" />

**Five manageable console projects that combine concepts from the learning folders.**

[⬅ Back to the main roadmap](../README.md)

</div>

---

## 🧩 Project Index

<table>
<tr><th>Project</th><th>Concepts practised</th><th>Level</th></tr>
<tr><td><a href="01_Number_Guessing_Game/number_guessing_game.c">01 · Number Guessing Game</a></td><td>Loops, conditions, random numbers, attempts</td><td>Beginner</td></tr>
<tr><td><a href="02_Menu_Calculator/menu_calculator.c">02 · Menu Calculator</a></td><td>Switch, repeated menus, arithmetic, validation</td><td>Beginner</td></tr>
<tr><td><a href="03_Student_Grade_Manager/student_grade_manager.c">03 · Student Grade Manager</a></td><td>Structures, arrays, averages, grading</td><td>Beginner–Intermediate</td></tr>
<tr><td><a href="04_Quiz_Game/quiz_game.c">04 · C Basics Quiz</a></td><td>Arrays, conditions, score tracking</td><td>Beginner</td></tr>
<tr><td><a href="05_Expense_Tracker/expense_tracker.c">05 · Expense Tracker</a></td><td>Structures, arrays, loops, summaries</td><td>Beginner–Intermediate</td></tr>
</table>

Each project is a standalone C program. This is the only README inside Projects; project subfolders intentionally have no README files.

## 🚀 Compile and Run

Run the commands from the repository root and make sure GCC is installed.

### 01 · Number Guessing Game

~~~bash
gcc -std=c11 -Wall -Wextra -pedantic Projects/01_Number_Guessing_Game/number_guessing_game.c -o guessing_game
./guessing_game
~~~

### 02 · Menu Calculator

~~~bash
gcc -std=c11 -Wall -Wextra -pedantic Projects/02_Menu_Calculator/menu_calculator.c -o calculator
./calculator
~~~

### 03 · Student Grade Manager

~~~bash
gcc -std=c11 -Wall -Wextra -pedantic Projects/03_Student_Grade_Manager/student_grade_manager.c -o grade_manager
./grade_manager
~~~

### 04 · C Basics Quiz

~~~bash
gcc -std=c11 -Wall -Wextra -pedantic Projects/04_Quiz_Game/quiz_game.c -o quiz
./quiz
~~~

### 05 · Expense Tracker

~~~bash
gcc -std=c11 -Wall -Wextra -pedantic Projects/05_Expense_Tracker/expense_tracker.c -o expense_tracker
./expense_tracker
~~~

## ✅ Make Each Project Your Own

Before considering a project complete:
1. Test typical and boundary inputs.
2. Handle invalid input where practical.
3. Explain the core logic without reading every line.
4. Add one feature yourself, such as replay, another menu option, or a summary.
5. Compile with warnings enabled and fix any warnings you introduce.

---

[⬅ Back to the C Programming roadmap](../README.md)
