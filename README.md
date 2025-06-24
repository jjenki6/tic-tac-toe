# tic-tac-toe

Made for an undergraduate project, compile and follow the gameplay rules below. Have fun! :)

GAMEPLAY:
The game first starts asking where would the player like to move to. They have to select a number 1,2,3,4,5,6,7,8,9 these are the only accepted numbers. Then hit enter without pressing a space. The player's X's and O'x are 0's and 10's so the person who makes the first move. I am assuming the players will not try to move in another player's space. I have an if statement to check if where the player wants to move if it's occupied by someone else.

IMPLIMENTATION
Everytime a move is made, that number in the array list becomes replaced by whomever is making the move. In the for loop it starts off with the player using O and then 10. The loop repeats while the wincondition =0. The wincondition will equal 1 when there are 3 0's/10's going diagonaly, across in a row, or down a column. If the board is full and there are no 3's in a row, the wincondition is set to 1 and the game notifys the players that it is a tie.
