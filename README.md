This project has been created as part of the 42 curriculum by zloo.

# push_swap

## Description

**push_swap** is a sorting algorithm project from the 42 curriculum. The goal of the project is to sort a stack of integers using a limited set of operations while minimizing the total number of instructions.

The program takes a list of integers as input and outputs the sequence of stack operations required to sort them in ascending order. The challenge lies in designing an efficient algorithm that produces as few operations as possible.

This implementation uses:

- **Normalization** to convert input values into indexed ranks
- **Specialized sorting** for very small inputs (2–5 numbers)
- **Chunk-based sorting** for larger datasets to reduce rotation costs

Two stacks are used:

- **Stack A** – contains the input numbers
- **Stack B** – used as a temporary stack during sorting

The algorithm pushes elements from stack A to stack B in **chunks of index ranges**, partially organizing the data. It then reconstructs the sorted stack by repeatedly moving the largest indexed element from stack B back to stack A using optimized rotations.

---

## Instructions

### Compilation

To compile the program, run:

```bash
make
```

This will generate the executable:

```
push_swap
```

---

### Usage

Run the program with a list of integers:

```bash
./push_swap 3 2 1
```

Example output:

```
sa
rra
```

Each line represents a stack operation.

---

### Testing with the 42 checker

To verify that the output correctly sorts the stack, you can use the **checker provided by 42**:

```bash
./push_swap 3 2 1 | ./checker_linux 3 2 1
```

Expected result:

```
OK
```

If the stack is not sorted correctly, the checker will return:

```
KO
```

---

### Counting operations

To see how many operations your algorithm generates:

```bash
./push_swap 3 2 1 | wc -l
```

---

## Features

- Robust input parsing and validation
- Duplicate detection
- Integer overflow protection
- Optimized handling for small datasets (≤5 numbers)
- Chunk-based sorting strategy for larger inputs
- Rotation cost optimization when rebuilding the stack

---

## Technical Choices

### Normalization

Before sorting, the input values are converted into **indexes representing their sorted rank**.  
This simplifies comparisons and allows the algorithm to work with a predictable range of values.

Example:

```
Original values:
40 5 100 -3

Normalized indexes:
2 1 3 0
```

---

### Chunk Sorting

For larger inputs, the algorithm divides the dataset into **chunks (index ranges)**.

Example for 100 numbers:

```
Chunk 1: 0–19
Chunk 2: 20–39
Chunk 3: 40–59
Chunk 4: 60–79
Chunk 5: 80–99
```

Elements are pushed from stack A to stack B based on these ranges, which helps partially organize stack B and significantly reduces the number of rotations required during reconstruction.

---

### Optimized Reconstruction

When rebuilding stack A, the algorithm repeatedly:

1. Finds the **largest index in stack B**
2. Rotates stack B using the **shortest rotation path**
3. Pushes the element back to stack A

This ensures the final stack is sorted while minimizing operations.

---

## Resources

### Documentation

- 42 push_swap subject PDF
- Stack data structure references
- Sorting algorithm references

### Articles and Tutorials

- https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0
- https://satyadeepmaheshwari.medium.com/sorting-large-datasets-with-limited-memory-the-chunked-merge-sort-approach-318275275c81
- https://en.wikipedia.org/wiki/Stack_(abstract_data_type)
- https://www.youtube.com/watch?v=wRvipSG4Mmk&t=2786s&pp=ygUNY2h1bmsgc29ydCA0Mg%3D%3D

---

### Use of AI

AI tools were used during development to assist with:

- Understanding algorithm design concepts
- Debugging logic errors
- Clarifying data structure behavior
- Reviewing and explaining implementation details
- Structuring project documentation

AI assistance was used as a **learning aid**, while the algorithm design, implementation, and testing were completed and validated manually.
