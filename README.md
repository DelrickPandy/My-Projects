This C++ program calculates and displays the average test scores and corresponding grades for a set of students. Here's a breakdown of how it works:

Input the number of students: The program asks for the number of students.

Enter student information: For each student:

The program asks for the student's name.
The program then asks for the number of test scores that the student has.
The program prompts the user to input each test score (ensuring scores are between 0 and 100).

Calculations:

It calculates the average score for each student using the calculateAverage() function.
It then determines the grade based on the average score using the determineGrade() function. The grading scale is:
A for 90 and above

B for 80-89

C for 70-79

D for 60-69

F for below 60

Display Results: 

Finally, the program displays the name, average score, and grade of each student in a formatted table.

Key Functions:

calculateAverage(): Calculates the average score for each student.

determineGrade(): Determines the grade based on the average score.

displayResults(): Displays the results in a table format.

Code Structure:
The program uses vectors to store the names, averages, and grades of students dynamically.

It ensures input validation for test scores (between 0 and 100).

The overall goal is to collect student data, compute averages and grades, and present the results in an organized way.



