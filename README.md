# Data Structures and Algorithms (DSA) Tutorial

## Table of Content

1. [DSA Full Form](#dsa-full-form)
2. [What is DSA?](#what-is-dsa)
3. [How to Learn DSA](#how-to-learn-dsa)
4. [Learn Data Structures](#learn-data-structures)
   - [Array](#array)
   - [String](#string)
   - [Linked Lists](#linked-lists)
   - [Matrix/Grid](#matrixgrid)
   - [Stack](#stack)
   - [Queue](#queue)
   - [Heap](#heap)
   - [Hash](#hash)
   - [Tree](#tree)
   - [Graph](#graph)
5. [Learn Algorithms](#learn-algorithms)
   - [Searching Algorithm](#searching-algorithm)
   - [Sorting Algorithm](#sorting-algorithm)
   - [Divide and Conquer Algorithm](#divide-and-conquer-algorithm)
   - [Greedy Algorithms](#greedy-algorithms)
   - [Recursion](#recursion)
   - [Backtracking Algorithm](#backtracking-algorithm)
   - [Dynamic Programming](#dynamic-programming)
   - [Graph Algorithms](#graph-algorithms)
   - [Pattern Searching](#pattern-searching)
   - [Mathematical Algorithms](#mathematical-algorithms)
   - [Geometric Algorithms](#geometric-algorithms)
6. [Learn About Complexities](#learn-about-complexities)
7. [Practice Problem Cheat Sheets](#practice-problem-cheat-sheets)
8. [Manual Notes](#manual-notes)

---

## DSA Full Form

The term DSA stands for Data Structures and Algorithms in the context of Computer Science.

## What is DSA?

Data Structures and Algorithms (DSA) refer to the study of methods for organizing and storing data and the design of procedures (algorithms) for solving problems that operate on these data structures.

## How to Learn DSA

The process of learning DSA can be broken down into five parts:

1. Learn at least one programming language.
2. Learn Data Structures.
3. Learn Algorithms.
4. Learn about Time and Space complexities.
5. Practice Problems on DSA.

## Learn Data Structures

Data structures are essential components that help organize and store data efficiently in computer memory. Common data structures include arrays, linked lists, stacks, queues, trees, and graphs.

### Array

An array is a linear data structure that stores a collection of elements of the same data type. Elements are allocated contiguous memory, allowing for constant-time access.

#### Operations on Array:

- Traversal: Iterating through the elements of an array.
- Insertion: Adding an element to the array at a specific index.
- Deletion: Removing an element from the array at a specific index.
- Searching: Finding an element in the array by its value or index.

#### Types of Arrays:

- One-dimensional array: A simple array with a single dimension.
- Multidimensional array: An array with multiple dimensions, such as a matrix.

#### Applications of Array:

- Storing data in a sequential manner.
- Implementing queues, stacks, and other data structures.
- Representing matrices and tables.

#### Related Topics:

- [Arrays Tutorial](#)
- [Top 50 Array Coding Problems for Interviews](#)
- [Practice problems on Arrays](#)

### String

A string is a sequence of characters, typically used to represent text.

#### Operations on String:

- Concatenation: Joining two strings together.
- Comparison: Comparing two strings lexicographically.
- Substring extraction: Extracting a substring from a string.
- Search: Searching for a substring within a string.
- Modification: Changing or replacing characters within a string.

#### Applications of String:

- Text processing.
- Pattern matching.
- Data validation.
- Database management.

#### Related Topics:

- [String Tutorial](#)
- [Top 50 String Coding Problems for Interviews](#)
- [Practice Problems on String](#)

### Linked Lists

A linked list is a linear data structure that stores data in nodes, which are connected by pointers. Unlike arrays, linked lists are not stored in contiguous memory locations.

#### Operations on Linked List:

- Creation: Creating a new linked list or adding a new node to an existing list.
- Traversal: Iterating through the list and accessing each node.
- Insertion: Adding a new node at a specific position in the list.
- Deletion: Removing a node from the list.
- Search: Finding a node with a specific value in the list.

#### Types of Linked List:

- Singly Linked List: Each node points to the next node in the list.
- Doubly Linked List: Each node points to both the next and previous nodes in the list.
- Circular Linked List: The last node points back to the first node, forming a circular loop.

#### Applications of Linked List:

- Implementing queues and stacks.
- Representing graphs and trees.
- Maintaining ordered data.
- Memory management.

#### Related Topics:

- [Linked List Tutorial](#)
- [Top 50 Problems on Linked List for Interviews](#)
- [Practice problems on Linked Lists](#)

### Matrix/Grid

A matrix is a two-dimensional array of elements, arranged in rows and columns.

#### Applications of Matrix/Grid:

- Image processing.
- Data analysis.
- Optimization problems.

#### Related Topics:

- [Matrix/Grid Tutorial](#)
- [Top 50 Problems on Matrix/Grid for Interviews](#)
- [Practice Problems on Matrix/Grid](#)

### Stack

A stack is a linear data structure that follows a LIFO (Last In First Out) or FILO (First In Last Out) order.

#### Operations on Stack:

- Push: Adds an element to the top of the stack.
- Pop: Removes and returns the element at the top of the stack.
- Peek: Returns the element at the top of the stack without removing it.
- Size: Returns the number of elements in the stack.
- IsEmpty: Checks if the stack is empty.

#### Applications of Stack:

- Function calls.
- Expression evaluation.
- Backtracking.
- Undo/redo operations.

#### Related Topics:

- [Stack Tutorial](#)
- [Top 50 Problems on Stack for Interviews](#)
- [Practice problems on Stack](#)

### Queue

A queue follows the FIFO (First In First Out) principle.

#### Operations on Queue:

- Enqueue: Adds an element to the rear of the queue.
- Dequeue: Removes an element from the front of the queue.
- Peek: Retrieves the front element without removing it.
- IsEmpty: Checks if the queue is empty.
- IsFull: Checks if the queue is full.

#### Types of Queue:

- Circular Queue: Last element connects to the first element.
- Double-Ended Queue (Deque): Operations can be performed from both ends.
- Priority Queue: Elements are arranged based on priority.

#### Applications of Queue:

- Job scheduling.
- Message queuing.
- Simulation modeling.
- Data buffering.

#### Related Topics:

- [Queue Tutorial](#)
- [Top 50 Problems on Queue for Interviews](#)
- [Practice problems on Queue](#)

### Heap

A heap is a complete binary tree that satisfies the heap property.

#### Operations of Heap:

- Insert: Adds a new element to the heap while maintaining heap properties.
- Extract-Max/Extract-Min: Removes the root element and restructures the heap.
- Increase/Decrease-Key: Updates the value of a node and restructures the heap.

#### Types of Heap:

- Max-Heap: Root node has the maximum value among its children.
- Min-Heap: Root node has the minimum value among its children.

#### Applications of Heap:

- Priority queues.
- Sorting.
- Graph algorithms (e.g., Dijkstra’s algorithm).

#### Related Topics:

- [Heap Tutorial](#)
- [Top 50 Problems on Heap for Interviews](#)
- [Practice Problems on Heap](#)

### Hash

Hashing generates a fixed-size output (hash value) from an input of variable size.

#### Key Concepts:

- Hash Function: Maps an input to a hash value.
- Hash Table: Stores key-value pairs.
- Collision: When two different keys produce the same hash value.

#### Collision Resolution Techniques:

- Separate Chaining (Open Hashing): Stores colliding elements in a linked list at the corresponding hash value.
- Open Addressing (Closed Hashing): Finds an alternative location for colliding elements within the hash table.

#### Applications of Hashing:

- Efficiently storing and retrieving data in databases and file systems.
- Verifying passwords and digital signatures.
- Distributing requests across multiple servers.
- Generating secure hashes for data integrity and authentication.

#### Related Topics:

- [Hash Tutorial](#)
- [Practice Problems on Hashing](#)

### Tree

A tree is a non-linear hierarchical data structure consisting of nodes connected by edges.

#### Traversal of Tree:

- In-Order: Visit left subtree, current node, then right subtree.
- Pre-Order: Visit current node, left subtree, then right subtree.
- Post-Order: Visit left subtree, right subtree, then current node.

#### Classifications of Trees:

- Binary Tree: Each node has at most two children.
- Ternary Tree: Each node has at most three children.
- N-ary Tree: Each node has at most N children.
- Binary Search Tree (BST): Left child < parent < right child.
- Heap: Specialized binary tree with the heap property.
- Balanced Tree: Heights of subtrees differ by at most one.
- Unbalanced Tree: Heights of subtrees can differ significantly.

#### Applications of Trees:

- Organizing hierarchical data (e.g., file systems, XML/HTML documents).
- Representing relationships (e.g., organizational structures, family trees).
- Efficient searching and sorting (e.g., binary search trees, AVL trees).
- Storing data in memory (e.g., heap, trie, segment trees).

#### Related Topics:

- [Tree Tutorial](#)
- [Top 50 Problems on Trees for Interviews](#)
- [Practice problems on Trees](#)

### Graph

A graph is a non-linear data structure consisting of vertices (nodes) connected by edges.

#### Key Concepts of Graph:

- Vertex (Node): Fundamental unit of a graph.
- Edge (Link): Connection between two vertices.
- Directed Graph: Edges have direction.
- Undirected Graph: Edges have no direction.
- Weighted Graph: Edges have weights.
- Unweighted Graph: Edges have no weights.
- Adjacent: Two vertices connected by an edge.
- Path: Sequence of vertices connected by edges.
- Cycle: Path that starts and ends at the same vertex.
- Degree: Number of edges connected to a vertex.

#### Graph Representation:

- Adjacency Matrix: 2D array representing edge presence.
- Adjacency List: List of adjacent vertices for each vertex.

#### Applications of Graph:

- Representing networks (e.g., social networks, communication networks).
- Finding shortest paths (e.g., GPS navigation, Dijkstra’s algorithm).
- Modeling relationships and dependencies (e.g., task scheduling, dependency graphs).
- Analyzing data structures (e.g., trees, finite state machines).

#### Related Topics:

- [Graph Tutorial](#)
- [Top 50 Problems on Graphs for Interviews](#)
- [Practice problems on Graphs](#)

## Learn Algorithms

Algorithms are step-by-step procedures for solving specific problems. They play a crucial role in computer science and software development, providing efficient solutions to a wide range of problems.

### Searching Algorithm

Searching algorithms are designed to find specific elements within data structures.

#### Types of Searching Algorithms:

- Linear Search: Sequentially checks each element.
- Binary Search: Efficiently searches in a sorted array by dividing the search space in half.

#### Applications of Searching Algorithms:

- Information retrieval.
- Database management.
- Optimization problems.

#### Related Topics:

- [Searching Algorithms Tutorial](#)
- [Top 50 Problems on Searching Algorithms for Interviews](#)
- [Practice problems on Searching Algorithms](#)

### Sorting Algorithm

Sorting algorithms arrange elements in a specific order.

#### Types of Sorting Algorithms:

- Bubble Sort: Repeatedly swaps adjacent elements if they are in the wrong order.
- Selection Sort: Selects the smallest element and swaps it with the first unsorted element.
- Insertion Sort: Builds the sorted array one element at a time by inserting each new element in its correct position.
- Merge Sort: Divides the array into halves, recursively sorts each half, and merges the sorted halves.
- Quick Sort: Divides the array into subarrays based on a pivot, sorts each subarray, and combines them.

#### Applications of Sorting Algorithms:

- Data organization.
- Searching and filtering.
- Optimization problems.

#### Related Topics:

- [Sorting Algorithms Tutorial](#)
- [Top 50 Problems on Sorting Algorithms for Interviews](#)
- [Practice problems on Sorting Algorithms](#)

### Divide and Conquer Algorithm

Divide and Conquer algorithms solve problems by breaking them down into smaller subproblems, solving each subproblem independently, and combining their solutions.

#### Applications of Divide and Conquer Algorithms:

- Sorting (e.g., Merge Sort, Quick Sort).
- Searching (e.g., Binary Search).
- Matrix multiplication (e.g., Strassen's algorithm).

#### Related Topics:

- [Divide and Conquer Tutorial](#)
- [Top 50 Problems on Divide and Conquer Algorithms for Interviews](#)
- [Practice problems on Divide and Conquer Algorithms](#)

### Greedy Algorithms

Greedy algorithms make the locally optimal choice at each step, hoping to find a global optimum.

#### Applications of Greedy Algorithms:

- Optimization problems.
- Shortest path problems.

#### Related Topics:

- [Greedy Algorithms Tutorial](#)
- [Top 50 Problems on Greedy Algorithms for Interviews](#)
- [Practice problems on Greedy Algorithms](#)

### Recursion

Recursion is a programming technique where a function calls itself to solve a problem.

#### Applications of Recursion:

- Tree and graph traversal.
- Searching algorithms.
- Divide and conquer algorithms.

#### Related Topics:

- [Recursion Tutorial](#)
- [Top 50 Recursion Problems for Interviews](#)
- [Practice problems on Recursion](#)

### Backtracking Algorithm

Backtracking is a technique for finding solutions to combinatorial problems by systematically exploring all potential candidates.

#### Applications of Backtracking:

- Solving puzzles (e.g., Sudoku, N-Queens).
- Generating permutations and combinations.
- Constraint satisfaction problems.

#### Related Topics:

- [Backtracking Algorithm Tutorial](#)

# Manual Notes:

# C++ Memory Management and Function Calls

This `README.md` file provides an overview of memory management and function calls in C++.

## Pointers

* All pointers of all types take the same size of 8 bytes.

## Heap Memory

* Declaration in heap memory in C++ is done using the `new` keyword.
* For an array: `a = new int[5];`
* For a structure: `a = new rectangle;`

## Function Calls

* Call by value in function is not suitable for changing the value of actual parameters.
* Call by address is used when we have to change the value of actual parameters.
* Call by reference: the formal parameters becomes the nickname for actual parameters, thus can change the value of actual parameters.

## Returning Array

* When returning an array from a function, use a pointer:
```c++
int* fun(int n) {
    int* p;
    p = new int[n];
    return (p);
}

int main() {
    int* A;
    A = fun(5);
}
```
## Arrays

* Arrays are always passed by address, never by value.
* On passing array to a function, we can use `*` instead of `[]`.
* Array cannot be passed as call by value to a function, but while using array inside the structure, we can use call by value.

## Classes

* For creating objects of class in C++, the syntax is `classname objectname;`.
* Use `::` as scope resolution to define the function outside the class.
* For destroying or removing heap memory, use a destructor: `~class name(){}.`
* While changing the class to template class, we have to mention the template type after scope resolution also: `template <class T> class Arithmetic{};`.

## Memory Allocation

* Array is created in heap or in stack.
* Linked list is always created in heap.
