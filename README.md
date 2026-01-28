# OS Stack Applications

## Introduction
A stack is a linear data structure that follows the LIFO (Last In First Out) principle.
Stacks are widely used in Operating Systems for managing function calls, process execution,
memory allocation, and interrupt handling.

This project is developed as an Operating System assignment to demonstrate stack operations
through a real-life application.

---

## Stack Operations
The following basic stack operations are used in this project:
- Push: Insert an element into the stack
- Pop: Remove the top element from the stack
- Peek: View the top element of the stack

---

## Real-Life Application: Mobile Call History Using Stack

Mobile phones maintain call history in such a way that the most recent call appears first.
This behavior follows the LIFO principle, making stack an ideal data structure for this purpose.

### Working:
- Each new call is pushed into the stack
- The most recent call is stored at the top
- When a call is deleted, the last stored call is removed first

---

## Relation with Operating System

In Operating Systems, stack plays a crucial role in:
- Call Stack for function calls
- Process stack for storing execution context
- Interrupt handling by saving CPU state
- Context switching between processes

The real-life call history example demonstrates the same LIFO concept
that is internally used by the Operating System.

---

## Files Included in This Repository

- `call_history_stack.c` : C program implementing mobile call history using stack
- `output.txt` : Text output of the program execution
- `output.png` : Screenshot showing the program output
- `README.md` : Project documentation

---

## Output
The output of the program is provided both as:
- Text file (`output.txt`)
- Screenshot (`output.png`)

---

## Conclusion
This project successfully demonstrates the use of stack operations through
a real-life example while establishing a clear connection with Operating System concepts.
Stack is an essential data structure used extensively in OS for efficient process and memory management.
