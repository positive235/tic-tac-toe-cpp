# Tic-Tac-Toe in C++ (In Progress)

## How to run

```bash
g++ tictactoe.cpp tictactoe_functions.cpp
./a.out
```

## Example

```
 _______  ___   _______    _______  _______  _______    _______  _______  _______ 
|       ||   | |       |  |       ||   _   ||       |  |       ||       ||       |
|_     _||   | |       |  |_     _||  |_|  ||       |  |_     _||   _   ||    ___|
  |   |  |   | |       |    |   |  |       ||       |    |   |  |  | |  ||   |___ 
  |   |  |   | |      _|    |   |  |       ||      _|    |   |  |  |_|  ||    ___|
  |   |  |   | |     |_     |   |  |   _   ||     |_     |   |  |       ||   |___ 
  |___|  |___| |_______|    |___|  |__| |__||_______|    |___|  |_______||_______|

Tic-Tac-Toe is a paper-and-pencil game for two players,
X and O, who take turns marking the spaces in a 3x3 grid.
The player who succeeds in placing three of their marks
in a horizontal, vertical or diagonal row wins the game.

     |     |     
  1  |  2  |  3
_____|_____|_____
     |     |     
  4  |  5  |  6
_____|_____|_____
     |     |     
  7  |  8  |  9
     |     |     

Current Player: X
Next Player: O

Where do you want to put?(answer example: 3): 7
     |     |     
  1  |  2  |  3
_____|_____|_____
     |     |     
  4  |  5  |  6
_____|_____|_____
     |     |     
  X  |  8  |  9
     |     |     
Current Player: O
Next Player: X

Where do you want to put?(answer example: 3): 3
     |     |     
  1  |  2  |  O
_____|_____|_____
     |     |     
  4  |  5  |  6
_____|_____|_____
     |     |     
  X  |  8  |  9
     |     |     

Current Player: X
Next Player: O

Where do you want to put?(answer example: 3): 5
     |     |     
  1  |  2  |  O
_____|_____|_____
     |     |     
  4  |  X  |  6
_____|_____|_____
     |     |     
  X  |  8  |  9
     |     |     

Current Player: O
Next Player: X

Where do you want to put?(answer example: 3): 
```
