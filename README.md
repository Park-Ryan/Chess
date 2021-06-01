# Chess
 
 > Authors: \<[Yishao Wang](https://github.com/caKuma)\>, \<[Ryan Park](https://github.com/rpark028)\>, \<[akuan004](https://github.com/akuan004)\>, \<[jintei002](https://github.com/jintei002)\>
## Project Description
 > * We would like to make a chess game and to do that we would use c++, github, valgrind and googletest. The input of the game would be mouse and the output would be a gui of the chess board. 
 > 
 > * The language used is C++.
 > * Tools used:
 >   * [Github](https://github.com/) - For code sharing and code repository.
 >   * [Valgrind](https://github.com/) - For for testing functions for memory leaks.
 >   * [Googletest](https://github.com/google/googletest) - For writing unit tests.
 > 
 > * Design patterns:
 > * Composite: We picked this pattern because we’re making a game that can make a lot of use by implementing the players. Our assumption is there would be a lot of overlapping code between each piece such as moving in the directions. That is where the composite design pattern would come into play by using the component to define our default behaviors and the leafs can inherit those components. The chosen design is the most ideal solution for our project because it’s a well known pattern for making use of reusable code. 
 > * Factory: We picked the factory design pattern because this can go hand in hand with the composite design pattern. We would create a “piece” factory and from there you can create different pieces based on their movements. For instance, creating a rook with specific movements.This solves the problem of breaking down the players further and having less functions to rewrite. The chosen pattern will lead to a good solution because it will help us create families of related objects without specifying concrete classes. 
> * This project is interesting because we can put test our knowledge of design patterns to be put to actual use. Also, it's always fun being able to see a product you create yourself.

 ## Screenshots
![alt text](screenshots/3.png "Main Menu")
![alt text](screenshots/1.png "Main Menu")
![alt text](screenshots/2.png "Main Menu")
 ## Installation/Usage
 > 1. Clone this project directory into your local directory.
 > 2. Run cmake . or cmake3 . to create the Makefile for this project.
 > 3. Run make to make the executable.
 > 4. Run ./chess to start the chess game. 
 > 5. At the main menu screen, select to the mode as Player vs Player (PvP) or Player vs Computer (PvC).
 > 6. Enjoy a game of chess.
 > In the game UI, there is a red back button on the right to undo a move, and a Reset button to restart the game. The game UI also indicates black/white side's turn on the top of the reset button.
 ## Testing
 > The game is tested using googletest with self-written unit tests.
 > To the run the test:
 > 1. run make
 > 2. ./possible ->test for possible moves and tested for invaid movements
 > 3. ./move ->initial test for moving pieces 
 > 4. ./piece ->initial test for placing pieces
 
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 > ![alt text](screenshots/Final_Project_-_Chess_1.png)
