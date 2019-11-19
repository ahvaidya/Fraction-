How to run
-Download the fraction project.
-To compile the program > g++ fraction_main.cpp -o main	
-Run->  ./main

What it does
-This project contains Fraction class that performs airthmetic and conditional operations on fractions.
-User interface that dynamically takes the user input and perform operations.
-The fraction_main.cpp file performs unit test cases to test each of the designed operations. 

Testcases descriptions
-There are 9-unit test cases to exercise and verify each designed operation. 
-Test cases 1-4 will take 3 fractions numbers as input and will perform the pre-defined arithmetic operations. The expected value for each test is already defined. The calculated value will be matched against the expected output and will throw assertion if they don’t match.
-Test cases 5-8 will take two fraction numbers and will perform the pre-defined conditional operations. If conditions get violated than it will throw assertions. 
 For example, for greater than (>) operator, the first defined fraction should be greater than second one. If it doesn’t hold true than program will assert saying ‘>’ operator is not working. This test is to just check functionality of ‘>’ operator. Similarly, for lower than operation.
-Test case 9 is to verify mutilple airtmetic operations works properly. 
-The expected value of these 9 test cases are hardcoded. User can change the input fractions value in fraction_main.cpp but will also need to change the expected value or else program will assert if it doesn’t match to calculated output. Will need to compile the code if anything is changed in fraction_main.cpp. 
-Also, there is an user interactive program where user can dynamically provide two fraction numbers. The program will perform all designed arithmetic operations and display. Also, it will display the relation between these numbers.


Limitation
-If any fraction number or sequence of arithmetic operations are changed in fraction_main.cpp for first 4-unit testcases than the expected output also needs to be changed and recompiled.
-For greater than and lower than operations in test case 5-6, the first number is assumed will be greater or lower than second number respectively for greater than and lower than operations.
-User interface can dynamically can enter only two fraction numbers in a/b format.

Scope of improvement
-Need to have more conditions to check the safety of arithmetic operations. Need to keep check on maximum values and handle overflow errors.
-The test framework should have a mock class than can mimic the fraction class. The inputs should be passed through both the actual class and mock class and results should be compared. This way the actual program can be regressed thoroughly for corner cases and user don’t need to provide any hardcoded values.
-User interface can be more dynamic to take in more number of inputs and provide choice to user to determine type of operations it want to perform.

