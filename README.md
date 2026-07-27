# Second Semester C++ Coursework

An archive of second-semester C++ coursework, data-structure assignments,
programming-techniques exercises, and historical Qt/qmake project metadata.
The repository is preserved as an academic record rather than presented as a
single production-ready application or a uniformly buildable codebase.

## Clone

```text
https://github.com/xfelipealves/SecondSemester.git
```

```bash
git clone https://github.com/xfelipealves/SecondSemester.git
cd SecondSemester
```

## Featured Work

The following projects are the strongest representative entry points based on
the source currently in the archive. They are described as coursework, not as
maintained software.

### Game Physics with an AVL tree

[`Estrutura de dados/trab avl/Game Physics Felipe Camilo/main.cpp`](<Estrutura%20de%20dados/trab%20avl/Game%20Physics%20Felipe%20Camilo/main.cpp>)

This is the most substantial data-structures project in the repository. Its
console simulation models players and obstacles on a bounded grid. Players can
move, attack in four directions, build blocks, and destroy blocks while using
action points. The program stores spatial objects in the templated
[`AVLTree.h`](<Estrutura%20de%20dados/trab%20avl/Game%20Physics%20Felipe%20Camilo/AVLTree.h>)
and keeps player state in a linked list, updating health and positions as the
simulation proceeds.

The matching
[`untitled.pro`](<Estrutura%20de%20dados/trab%20avl/Game%20Physics%20Felipe%20Camilo/untitled.pro>)
lists `main.cpp`, `ListaC.cpp`, and `Objeto.cpp` as its sources and requests
C++11 console settings. Input is positional and command-driven; no sample
input file is included in this project directory, so a build alone does not
provide a ready-made demonstration.

### Mau Mau card game

[`Estrutura de dados/trab lista pilha fila/maumau/Nova pasta/untitled/main.cpp`](<Estrutura%20de%20dados/trab%20lista%20pilha%20fila/maumau/Nova%20pasta/untitled/main.cpp>)

This multi-file console game coordinates players, cards, a draw pile, a discard
pile, and turn order. The implementation uses custom circular and ordered
lists plus a stack, distributes five cards per player, reads a 104-card deck,
handles special-card effects such as direction changes and skipped turns, and
reports the winner of each match. The source is duplicated under `maumau2/`
and both folders retain their accompanying PDF coursework document.

### Minotaur labyrinth solver

[`Estrutura de dados/LABIRINTO MINOTAURO.cpp`](<Estrutura%20de%20dados/LABIRINTO%20MINOTAURO.cpp>)

This standalone exercise reads multiple rectangular grids, marks visited cells,
recursively explores four directions, backtracks, and prints the solved grid
when the destination is reachable. It is a compact representative of the
coursework's recursion and search exercises. Its input is positional and its
console messages include historical Portuguese text and encoding artifacts.

### Hangman game and Qt variant

The console-oriented game is split across
[`Tecnicas de programação 1/trab forca/main.cpp`](<Tecnicas%20de%20programação%201/trab%20forca/main.cpp>)
and its supporting classes. The larger
[`trabforcabrabo`](<Tecnicas%20de%20programação%201/trabforcabrabo/>)
folder contains another version with a Qt project file, a `.ui` form, resource
icons, word lists for Linux and Windows, and a score file. The source supports
letter guesses, whole-word guesses, lives, elapsed-time records, and a
new-game option. The archive preserves both variants because they document
different stages of the assignment rather than a single canonical release.

### Programming-techniques exercise library

[`Tecnicas de programação 1/biblioteca trab n1/sucrilhos.cpp`](<Tecnicas%20de%20programação%201/biblioteca%20trab%20n1/sucrilhos.cpp>)

This file collects functions corresponding to several numbered exercise
lists, including geometry, factorials, primality checks, Fibonacci values,
string manipulation, and integer ordering. It is useful as a survey of
introductory exercises and pointer/string practice, but it also contains an
explicitly incomplete function and historical implementations that should not
be treated as a reusable library.

## Directory Map

```text
Estrutura de dados/
├── trab avl/
│   ├── Game Physics Felipe Camilo/  AVL-backed grid combat simulation
│   ├── AVLTree.h                    Preserved AVL implementation variant
│   └── Game_Physics_trab_final (1).doc
├── trab lista pilha fila/
│   ├── maumau/                      Mau Mau implementation and coursework PDF
│   └── maumau2/                     Preserved duplicate/variant of Mau Mau
├── arvore template/untitled/        Template BST/AVL headers and Qt metadata
├── trab ed1/trab/                   Queue/stack exercise and project metadata
├── AVLTree.h                         Additional AVL header variant
└── LABIRINTO MINOTAURO.cpp          Recursive labyrinth exercise

Tecnicas de programação 1/
├── trab forca/                      Console hangman assignment
├── trabforcabrabo/                  Larger Qt/console hangman variant
├── biblioteca trab n1/               Exercise library and numbered solutions
├── Programas TP/                    Exercises grouped as lists 1A through 3B
├── trab de arquivo/                 File-oriented exercise and qmake metadata
└── Prova 3/prova3/                  Exam exercise with a tic-tac-toe component
```

The names and layout above are part of the archive. This curation does not
move or rename coursework directories, and it preserves `.cpp`, `.h`, `.cxx`,
`.pdf`, `.doc`, `.txt`, image assets, qmake project files, Qt forms/resources,
archives, and IDE metadata such as `.pro` and `.pro.user` files.

## Build and Run

There is no root-level build system, dependency manifest, test suite, or
project-wide compile target. Build one selected exercise or project at a time.
The preserved source may require source-specific input files, working
directories, Qt, or historical compiler behavior.

### Standalone console exercise

With a C++11 compiler, the labyrinth can be tried from the repository root:

```bash
g++ -std=c++11 "Estrutura de dados/LABIRINTO MINOTAURO.cpp" -o labyrinth.out
./labyrinth.out < input.txt
```

`input.txt` is not supplied by this repository. The command is an example of
how to compile one self-contained source, not a claim that every exercise
compiles with the same flags. The generated `labyrinth.out` is intentionally
ignored and should not be added to Git.

### qmake projects

For a project with Qt/qmake installed, enter its directory and use the
project file that names the desired sources:

```bash
cd "Estrutura de dados/trab avl/Game Physics Felipe Camilo"
qmake untitled.pro
make
./untitled
```

The Mau Mau project is also a C++11 console qmake project. The hangman variant
under `trabforcabrabo` requests Qt Core/GUI/Widgets and includes a `.ui` form
and a resource file, so it needs a compatible Qt installation and its relative
word-list/score files available from the working directory. On Windows,
Dev-C++ or Qt Creator may better match the historical project setup.

Before compiling, inspect the relevant `.pro` file and confirm which variant
is intended. The archive contains duplicate directories, similarly named
projects, and intermediate revisions.

## Historical and Academic Limitations

- The files are coursework snapshots with no claim of production readiness,
  security, portability, or complete correctness.
- There is no automated test coverage or reproducible root-level build.
- Many programs expect positional standard input, course-provided test data,
  or a particular working directory; those inputs are not consistently
  included.
- The projects use historical Portuguese console text, inconsistent source
  encoding, and platform-specific commands such as `clear||cls`.
- Qt/qmake and `.pro.user` files reflect a local development environment and
  may require an older Qt/compiler combination or manual project adjustments.
- The template tree exercise has implementation headers but an empty
  `main.cpp`; it is preserved as an intermediate academic artifact, not as a
  runnable demonstration.
- The exercise library includes rough, incomplete, and experimental functions;
  the source has deliberately not been corrected as part of this curation.
- The archive contains duplicate Mau Mau and hangman variants, numbered
  exercise revisions, generated files from historical builds, and ambiguous
  filenames. Do not infer that every similarly named file is a canonical
  version.

## Cleanup Roadmap

Future maintenance can remain incremental and non-destructive:

1. Inventory each assignment and identify representative versions without
   deleting coursework or changing directory names.
2. Add small, source-specific input examples and build notes where their
   provenance is clear.
3. Verify selected programs individually with documented compiler and Qt
   versions; record failures as archive notes rather than silently rewriting
   source.
4. Normalize source encoding and user-facing text in a separate, reviewed
   change if historical fidelity permits it.
5. Compare duplicate variants and document their differences before deciding
   whether any should be marked as superseded; retain the original files.
6. Add focused tests only for explicitly selected teaching examples, keeping
   the original coursework untouched.
7. Revisit IDE metadata and per-project build scripts only when a reproducible
   learning workflow is a stated goal.

The present public-readiness pass is intentionally limited to documentation,
ignore rules, and removal of clearly generated tracked build outputs. It does
not rewrite C++ source, repair exercises, move files, rename sources, delete
course documents, remove archives, or delete coursework.
