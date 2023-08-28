# [C Operators](https://youtu.be/orhuwwJryEU)

- There are mainly three types of operator available in C language.
  - Unary Operator
  - Binary Operator
  - Ternary Operator

## Unary Operator

- Only have one operand. Ex: a++, --b

## What is operand?

- a + b --> here + is operator, a and b is operand

## Binary Operator

- Have two operand.
- There are different type of binary operators available in C language.
  - Arithmetic Operator (+, -, *, /, %)
  - Relational Operator (==, !=, >, <, >=, <=)
  - Logical Operator (&&, ||, !)
  - Bitwise Operator (&, |, ^, ~, <<, >>)
  - Assignment Operator (=, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=)
  - Misc Operator (sizeof(), &, *, ? : )

## Ternary Operator

- Have three operand.
- Only one ternary operator available in C language.
  - Conditional Operator (?:)
  - Syntax: variable = Expression1 ? Expression2 : Expression3;
  - If Expression1 is true then Expression2 will be executed otherwise Expression3 will be executed.
  - Example: int a = 10, b = 20, c; c = (a > b) ? a : b; // c = 20
