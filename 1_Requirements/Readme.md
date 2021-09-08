# Requirements
## Introduction



The Tic-Tac-Toe game is a thought-provoking game which is performed on a panel of 3 by 3 grid consisting 9 boxes. Each participant is assigned a special symbol i.e. either X or O to demonstrate that the particular box is filled by the particular participant.
The empty boxes on the panel are chosen by the participants to mark their symbol on the game panel alternatively.
It is a game of perfect information which illustrates that the previously occurred actions are known to each participant at the time of decision. The winner of the game is the participant who first cover a horizontal, vertical or diagonal row of the board having only their symbols.

# Research
Tic-Tac-Toe Game Boards.![Tic-Tac-Toe Game Boards](https://miro.medium.com/max/512/1*YgslEHb5SVUr3rLw7-vagA.png)


The participant who covers a row on the game panel with his assigned symbol first, will be declared as the winner. The game outcome is a draw when none of the boxes are empty and none of the sequences are formed i.e. vertical, horizontal or diagonal by any of the participant. 
The participants of this game have a special scheme to play it. However, the chances of win is more for the participant who has performed this earlier, in comparison with the new participant. If both of the participants perform smartly, then game outcome will be a draw. An optimal strategy is required to play the game so that
either the player win or game will be a draw and also play optimally with a sub-optimal opponent.

## Features
The computer implementation of the game Tic-Tac-Toe has many features as compared to the
traditional way of playing it with paper and pencil.The various features are:
- The game has been made user friendly with proper use of VS code.
- The user can play as many games without any interruption.
- By defualt the player1 that is first player as symbol of X and another palyer as O.
- The player can win the game, draw the game or will loose the game.
- It’s a good brain exercise for all age group people.


## Defining Our System

Minimax Algorithm is a decision rule formulated for 2 player zero-sum games (Tic-Tac-Toe, Chess, Go, etc.). This algorithm sees a few steps ahead and puts itself in the shoes of its opponent. It keeps playing and exploring subsequent possible states until it reaches a terminal state resulting in a draw, a win, or a loss. Being in any of these possible terminal states has some utility for the AI — such as being in a ‘Win’ state is good (utility is positive), being in a ‘Loss’ state is bad (utility is negative), and being in a draw in neither good nor bad (utility is neutral).


 it works by visualizing all future possible states of the board and constructs it in the form of a tree. When the current board state is given to the algorithm (the root of the tree), it splits into ’n’ branches (where n denotes the number of moves that can be chosen by the number of empty cells where the AI can be placed). If any of these new states is a terminal state, no further splits are performed for this state and it is assigned a score.
 
 there are no terminal states — each of these new states is considered as new root and they give rise to a tree of their own. But, there’s a catch — since this is a 2-player game and the players take turns alternatively, therefore whenever we go one layer deeper in the network, we need to change the player which would be placed in one of the empty cells. This way we can visualize what moves the other player would take as a result of our move. The algorithm evaluates the best move to take by choosing the move which has the maximum score when it is the AI’s turn and choosing the minimum score when it is the Human’s turn.
 
# Rules
-  The game is played on a 3x3 game board.
- The first player is known as X and the second is O.
- X always goes first.
- Players alternate placing Xs and Os on the game board.
- If one has 3 in a row and all nine squares are filled no one wins, the game is a draw.



# Detail requirements
## High Level Requirements:

| ID | Descriptions | Status (Implemented/Future) |     
| ------ | ------ | ------ |
| 01 | Initial game board as to created with empty cell | Done |
| 02 | Here the single board is used in the entire iteration  | Done |


## Low level Requirements:
| ID | Descriptions | Status (Implemented/Future) |     
| ------ | ------ | ------ |
| 01 | In this project no need to assign the symbol fro each palyer | Done |
