<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:111827,45:0F766E,100:22D3EE&height=190&section=header&text=C%20Programming%20%26%20DSA&fontSize=36&fontColor=FFFFFF&fontAlignY=38&desc=From%20Hello%20World%20to%20Practical%20Projects&descAlignY=62&descSize=16" width="100%" alt="C Programming and DSA" />

<p>
<img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=black" alt="C language" />
<img src="https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-0F766E?style=for-the-badge" alt="Beginner to intermediate" />
<img src="https://img.shields.io/badge/Focus-Problem%20Solving-2563EB?style=for-the-badge" alt="Problem solving" />
</p>

**A numbered path through C programming, problem-solving, introductory data structures, and manageable console projects.**

</div>

---

## 👋 About

This repository is my rebuilt C learning workspace. It starts with **Hello World**, progresses through input/output, conditions, loops, functions, arrays, strings, pointers, structures, and introductory data structures, then applies those concepts in small console projects.

The goal is to practise writing programs independently, understand the logic, and build confidence—not to collect code I cannot explain.

## 🗺️ Learning Roadmap

<table>
<tr>
<td width="50%" valign="top">
<h3>🟢 Foundations</h3>
<ol>
<li><a href="01_Fundamentals/">C Fundamentals</a></li>
<li><a href="02_Input_Output/">Input and Output</a></li>
<li><a href="03_Conditions/">Conditions and Decisions</a></li>
<li><a href="04_Loops/">Loops and Number Problems</a></li>
<li><a href="05_Functions/">Functions and Recursion</a></li>
</ol>
</td>
<td width="50%" valign="top">
<h3>🔵 Build Skills</h3>
<ol start="6">
<li><a href="06_Arrays/">Arrays and Searching/Sorting</a></li>
<li><a href="07_Strings/">Strings</a></li>
<li><a href="08_Pointers/">Pointers and Dynamic Memory</a></li>
<li><a href="09_Structures/">Structures</a></li>
<li><a href="10_Data_Structures/">Introductory Data Structures</a></li>
</ol>
</td>
</tr>
</table>

## 📂 Topic Index

| Folder | Coverage |
|---|---|
| [01 · Fundamentals](01_Fundamentals/) | Hello World, variables, data types, operators, conversion |
| [02 · Input/Output](02_Input_Output/) | User input, arithmetic, swapping values, area and interest |
| [03 · Conditions](03_Conditions/) | Even/odd, comparisons, leap years, calculator |
| [04 · Loops](04_Loops/) | Summation, factorial, prime numbers, Fibonacci, reversal |
| [05 · Functions](05_Functions/) | Reusable functions, return values, recursion |
| [06 · Arrays](06_Arrays/) | Array operations, searching, sorting |
| [07 · Strings](07_Strings/) | Length, vowels, reversal, word counting |
| [08 · Pointers](08_Pointers/) | Addresses, pointer-based updates, dynamic memory |
| [09 · Structures](09_Structures/) | Structs and student records |
| [10 · Data Structures](10_Data_Structures/) | Stack, circular queue, singly linked list |
| [Projects](Projects/README.md) | Five small console projects |

Each learning program has a numbered filename to make the study order clear. This repository intentionally uses only one main README and one README in the Projects folder.

## 🚀 Compile and Run

Install GCC, then run these commands from the repository root:

~~~bash
gcc -std=c11 -Wall -Wextra -pedantic 01_Fundamentals/01_hello_world.c -o hello
./hello
~~~

Compile another program by changing the source path and executable name:

~~~bash
gcc -std=c11 -Wall -Wextra -pedantic 03_Conditions/04_simple_calculator.c -o calculator
./calculator
~~~

- <code>-std=c11</code> selects the C11 standard.
- <code>-Wall -Wextra</code> enables useful compiler warnings.
- <code>-pedantic</code> diagnoses non-standard language extensions.
- <code>-o calculator</code> sets the executable name.

## 🧪 Practice Loop

1. Read the filename and predict the program behaviour.
2. Try writing your own version before looking at the reference.
3. Compile with warnings enabled.
4. Test ordinary, boundary, and invalid inputs where appropriate.
5. Explain the logic and modify one part yourself.

The [Projects README](Projects/README.md) lists five manageable programs that combine concepts from the learning folders.

## 🎯 Scope

This repository targets beginner-to-early-intermediate C and introductory data structures. It is a practical learning portfolio, not an exhaustive advanced algorithms library.

---

<div align="center">**Learn the concept · Write it yourself · Compile · Test · Improve**</div>
