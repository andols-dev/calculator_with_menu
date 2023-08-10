# Calculator Program

This is a calculator program written in C. It provides a menu where the user can choose from various mathematical operations, including addition, subtraction, multiplication, and division. The user can input two numbers for the selected operation, and the program will display the result.

## Program Structure

The program is divided into multiple functions to perform different tasks:

### `menu()`

Displays a menu with operation choices: "Add", "Subtract", "Multiply", "Divide", and "Exit".

### `chooseNumbers(int *num1, int *num2)`

Prompts the user to input two numbers and stores them using pointers.

### `chooseMenuNumber(int *menuNumber)`

Prompts the user to choose an option from the menu and stores their choice using a pointer.

### Mathematical Operations

The program defines functions for each mathematical operation:

- `add(int num1, int num2)`: Adds two numbers and returns the result.
- `subtract(int num1, int num2)`: Subtracts the second number from the first and returns the result.
- `multiply(int num1, int num2)`: Multiplies two numbers and returns the result.
- `divide(int num1, int num2)`: Divides the first number by the second and returns the result as a float.

### `calculate(int menuNumber, int num1, int num2, int result, float dividedResult)`

Processes the user's choice from the menu, performs the corresponding operation using the above functions, and displays the result.

## Main Loop

The program's main loop continuously displays the menu, prompts the user for a menu choice, and processes the chosen operation until the user selects "Exit".






