# Data Structures 1

## Overview
The course Data Structures 1 covered the implementation and application of various fundamental data structures using C and C++. The focus was on developing skills to create, manipulate, and apply efficient data structures in different contexts, as well as optimizing algorithms to solve complex problems.

## Developed Projects

### Mau Mau

The code in the **maumau** folder is the implementation of a card game called Mau Mau, similar to Uno. The code is divided into several C++ files that together make up the game:

- **baralho.cpp/h**: Implementation of the deck of cards.
- **carta.cpp/h**: Implementation of the card class.
- **jogo.cpp/h**: Main game logic.
- **jogador.cpp/h**: Implementation of the player class.
- **main.cpp**: Entry point of the game, where execution begins.

These files collectively implement the game’s functionality, managing cards, players, and the game logic.

### Data Structures Project 1 (trab ed1)

The project in the **trab ed1** folder is a practical implementation of several fundamental data structures. The presence of files such as `avl.c` (AVL tree), `fila.c` (queue), `lista.c` (list), and `pilha.c` (stack) indicates that the project's objective is to demonstrate the understanding and implementation of these data structures. The file `ed.c` integrates these different structures, showing how they can be used together. The header `structs.h` contains the definitions of the structures used in the project.

### Game Physics Felipe Camilo

The **Game Physics Felipe Camilo** project is a combat and strategy game developed for the fictional company Truvão Games, where the main goal is to implement collision logic for the game. The game's physics is managed through a **Collision Tree**, a binary search tree that stores all objects in the scene (rocks and players).

**Game Features**:
- **Movement**: Players can move in four directions (up, down, left, right).
- **Actions**:
  - **Move (M)**: 1 action point.
  - **Attack (A)**: 1 action point.
  - **Build (C)**: 4 action points.
  - **Destroy (D)**: 3 action points.
- **Collision Rules**: Managed through an AVL tree that keeps objects balanced to ensure maximum performance in searches and alterations.

**Code Structure**:
- **avl.c and avl.h**: Implementation of the AVL tree used to manage game objects.
- **main.c**: Contains the main game logic and integrates the AVL tree with player actions.
- **dados.txt, insere.txt, percurso.txt**: Data files used to test the AVL tree implementation and game collisions.
- **Makefile**: Automation script for compiling the project.

**Functionality**:
The game is based on a 2D board where players and objects are positioned. Player actions are processed sequentially, and each player has a limited number of action points per round. The AVL tree implementation is crucial for efficiently managing collisions and interactions between game objects.

### Generic Binary Search Tree with Templates (arvore template)

The **untitled** folder in the **SecondSemester** repository contains a project focused on implementing generic binary search trees using templates in C++. The files present are:

- **main.cpp**: Entry point of the program, where the tree is tested.
- **arvore.h**: Header file containing the definition of the generic binary search tree using templates.

### Project Implementation:
- **Templates**: Use of templates to create a generic binary search tree, allowing the insertion of different data types.
- **Binary Search Tree (BST)**: Implementation of standard operations such as insertion, removal, and search in a binary search tree.

This project demonstrates the application of advanced C++ concepts, such as templates, to create flexible and reusable data structures.

### Minotaur Labyrinth

The **LABIRINTO MINOTAURO.cpp** code is a project related to solving mazes with a minotaur theme. Analyzing the code, here are the main functionalities:

### Features:
- **Maze Generation and Solution**: The code generates a maze and implements algorithms to solve it, possibly including obstacles or enemies like a minotaur.
- **Movement**: The code manages movement through the maze, verifying valid paths and impediments.
- **Search Algorithms**: Implementation of search algorithms such as depth-first search (DFS) or breadth-first search (BFS) to find the maze solution.

### Code Structure:
- **Data Structures**: Use of data structures to represent the maze, positions, and paths.
- **Manipulation Functions**: Functions to move through the maze, check collisions, and find the way to the exit.

This project demonstrates skills in search algorithms and manipulation of complex data structures, applied in a maze-solving context.
