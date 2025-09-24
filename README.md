# Simple Calculator Program (C)

A simple command-line calculator written in C that performs basic arithmetic operations: addition, subtraction, multiplication, and division. It takes two integers as input and allows the user to select the operation to be performed.

## Features

- Supports four basic arithmetic operations:
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
- Handles division by zero error.
- Simple user input prompts for two numbers and an operation.
  
## Files

- **CLI-Calcu.c**: The main C source code file implementing the calculator logic.

## Requirements

- C compiler (e.g., GCC)
- Operating System: Any OS that supports C compilation (Linux, Windows, macOS)

## Compilation and Execution

To compile and run the program, follow these steps:

### 1. Clone the Repository
```bash
git clone https://github.com/yourusername/simple-calculator.git
cd simple-calculator
```

### 2. Compile the Program

```
gcc CLI-Calcu.c -o calculator
```

### 3. Run the Program
```
./calculator
```
### Example Run:
```
Enter First Number:
5
Enter Second Number:
3
Enter Your Operation (+, -, *, /): +
5 + 3 = 8
```
Notes:

    The program will prompt for two integers and then ask the user for an operation.

    If an invalid operation or division by zero is entered, appropriate error messages are displayed.

Contributing

Feel free to fork this repository, submit issues, or create pull requests. Contributions are welcome!
