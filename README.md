# M.tic-tac-toe
A simple code for the game TIC TAC TOE.

I just took a simple array of 9 elements and took inputs from two users(in a loop for 5 iterations) to let them select their tile.
The loop is executed for 5 iterations because the total tiles are 9 with 2 players palying at a time. This gives each player a chance of 4.5 moves.
Player 1 is always X and player 2 is always O.
The program checks for 3 X or O in a row-wise, column-wise or diagonal manner to see if either of the player has won the game using the 'winner' function.
If neither of the players has a win by the last iteration, the game is declared a draw
