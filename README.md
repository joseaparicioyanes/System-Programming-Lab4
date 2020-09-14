# System-Programming-Lab4
Write a C program to run on ocelot which will either set or clear a single bit in a number entered by the
user using the binary representation of the number. The user should input the original integer value
between 1 and 1000 inclusive using a scanf. Use an unsigned integer type. Output is to the screen. You
must use only bitwise operators for this program. You can shift bits and or use the logical bitwise
operators.
For this assignment give the user directions asking them to enter the integer and then ask the user if he
or she wants to clear or set a bit. Then ask the user which bit to set or clear. That can be a number
between 0 and 31. Prompt the user for what should be entered each time. Be sure to validate all user
input so the program cannot be crashed. After completing the operation ask the user if they want to do
the entire operation again. The user would enter Y or y to do it again. This would be the entire operation
from entering the first integer.
You do not need to use getopt for this program since there are no command line arguments.
• If the user enters a 1 as the initial value and a 0 for the bit to clear the result would be 0.
• If the user enters a 1 as the initial value and a 0 for the bit to set the result would be 1.
• If the user enters a 10 as the initial value and a 1 for the bit to clear then the result would be 8.
• If the user enters a 10 as the initial value and a 1 for the bit to set then the result would be 10.
• If the user enters a 10 as the initial value and a 2 for the bit to clear then the result would be 10.
• If the user enters a 10 as the initial value and a 2 for the bit to set then the result would be 14.
Output for each operation should be easy to read giving the number before the switch and then the
decimal number after the switch. No other output should be included.
The program should compile to create an executable called bitops.
• Test the program with the following commands:
o bitops
▪ enter 10 as the initial value and a 2 for the bit to clear
o bitops
▪ enter 10 as the initial value and a 1 for the bit to set
• Take a screenshot of the screen showing the output on ocelot. Name it FirstNameLastName.png
or .jpg.
Submit your source file, the screenshot and your Makefile in one zip file called FirstnameLastnameL4.zip
to the assignment dropbox in Canvas.
If the program does not compile and do something useful when it runs it will not earn any credit.
