# push_swap

*This project has been created as part of the 42 curriculum by chabourk.*

## Description
**Push Swap** is a project that challenges you to sort data on a stack, with a limited set of instructions, and using the lowest possible number of actions. The project involves two stacks, `a` and `b`, and a set of specific operations to manipulate them.

The goal is to sort a random list of integers in ascending order in stack `a`. To achieve the efficiency required for 100 and 500 numbers, this implementation uses a **Chunk/Butterfly Algorithm**, which partitions data into smaller ranges to minimize the total number of operations.

## Instructions

### Compilation
The project is written in C and includes a `Makefile`. To compile the program, navigate to the project root and run:
```bash
make
```
This will produce the `push_swap` executable.

### Execution
To run the program, provide a list of integers as arguments. The program will output the sequence of instructions that sorts the list.

```bash
./push_swap 4 67 3 87 23
```

You can also pass the numbers as a single quoted string:
```bash
./push_swap "4 67 3 87 23"
```

To count how many operations your algorithm performs, you can pipe the output to `wc -l`:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

### Cleaning Up
- To remove object files: `make clean`
- To remove object files and the executable: `make fclean`
- To recompile: `make re`

## Technical Choices: The Chunk Algorithm
The algorithm used for this project is designed to handle large sets of numbers (100 and 500) efficiently. It follows these steps:

1.  **Simplification (Indexing)**: Before sorting, the input numbers are replaced by their relative rank (from 0 to N-1). This makes it easier to define "chunks" regardless of the actual value of the integers.
2.  **Pushing to B (Chunking)**: Numbers are moved from stack `a` to stack `b` based on their index. We use a dynamic "window" (chunk size). If a number is within the window, it is pushed to `b`. If it is in the lower half of the window, stack `b` is rotated to keep smaller numbers at the bottom.
3.  **Pushing to A**: Once stack `a` is empty, we find the largest number in stack `b` (which is now roughly sorted in a butterfly shape) and move it to the top using the most efficient rotation (`rb` or `rrb`) before pushing it back to `a`.

## Resources
- [42-Push-Swap-Guide](https://github.com/o-reo/push_swap) - General overview of the project logic.
- [Push Swap: The Tutorial](https://medium.com/m/global-identity-2?redirectUrl=https%3A%2F%2Fcodeburst.io%2Fpush-swap-27031ef39efd) - A guide on sorting logic.
- [Visualizer](https://github.com/o-reo/push_swap_visualizer) - Used to see the chunk algorithm in action during the testing phase.

### AI Usage
AI was used in the following ways for this project:
- **Documentation**: To generate and format this `README.md` file according to the specific 42 school requirements.
- **Logic Explanation**: To help understand the mathematical concept of "chunking" and the "butterfly" distribution of numbers between two stacks.
- **Code Optimization**: To assist in identifying more efficient ways to handle argument parsing and error management in C (e.g., checking for duplicates and integer overflows).