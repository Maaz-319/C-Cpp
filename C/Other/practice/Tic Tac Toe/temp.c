/*
	Code by Maaz Bin Asif
*/


// Header Files
#include<typeslow.h>
#include<conio.h>
#include<stdio.h>


// Function Signatures
void run_game(void);
void print_the_board(char game_board[], int user_input, char player);
int check_game_continty(char game_board[]);
int check_win(char game_board[]);
void exit_game(char);


void main(){
	// Greetings=====================================================
	printf("\n\t\t=======================================\n");
    printf("\t\t          Welcome to Tic Tac Toe!        \n");
    printf("\t\t               Made by Maaz\n");
    printf("\t\t=======================================\n\n");
    printf("\n\n\t\t     Press any key to continue....");
    getch();
    // ==============================================================

    system("cls");

    // Rules=====================================================================
    printf("\n\t\t| RULES |\n\n");
    printf("\n\t> Enter the Number of Box you Wish to Play-In and Press Enter");
    printf("\n\t> Number of Boxes Range from 1-9");
    printf("\n\t> You can Play in One box only One Time");
    printf("\n\t> 'O' Will Play First Turn");
    printf("\n\n\tPress Any Key and Dive into the Game!!...");
    getch();
    //===========================================================================

	run_game();
}

// Main Game Handling Function
void run_game(){
	// Variable Declaration===============================
	char game_board[9] = {
							' ', ' ', ' ',
							' ', ' ', ' ',
							' ', ' ', ' ',
						};
	int player_1, player_2, game_continuity=1, win_check=0;
	// ====================================================

	// Draw the game board
	print_the_board(game_board, 0, ' ');

	// Check If the game should continue
	while(game_continuity)
	{
		// Player 1 Input=============================================
		do
		{
			printf("\n\n\nPlayer O: ");
			scanf("%d", &player_1);
			player_1-=1;
		}while(game_board[player_1] != ' ');
		game_board[player_1] = 'O';
		// ===========================================================

		game_continuity = check_game_continty(game_board);

		// If the game is Eligible to move ahead, The board of game is refreshed otherwise, game ends!!
		if(game_continuity)
			print_the_board(game_board, player_1, 'O');
		else
			{
				print_the_board(game_board, player_1, 'O');
				break;
			}

		// Check if a Player has won===========
		win_check = check_win(game_board);
		if(win_check == 8)
		{
			printf("\n\n===============================================\n");
    		printf("            Game Tied! Try Again           \n");
    		printf("===============================================\n\n");
    		getch();
    	}
		else if(win_check == 1)
			exit_game('O');
		//=====================================



		// Player 2 input
		do
		{
			printf("\n\n\nPlayer X: ");
			scanf("%d", &player_2);
			player_2-=1;
		}while(game_board[player_2] != ' ');
		game_board[player_2] = 'X';

		print_the_board(game_board, player_2, 'X');
		win_check = check_win(game_board);
		if(win_check == 8)
		{
			printf("\n\n===============================================\n");
    		printf("            Game Tied! Try Again           \n");
    		printf("===============================================\n\n");
    		getch();
    	}
		else if(win_check == 1)
			exit_game('X');
	}
}


// Function that draws the game board with all the requirments and updates
void print_the_board(char game_board[], int user_input, char player)
{
	char sample_game_board[9] =
							{
								'1', '2', '3',
								'4', '5', '6',
								'7', '8', '9',
							};
	game_board[user_input] = player;
	system("cls");
	printf("\n\n");
	for(int i=0; i<9; i++)
		{
			if(!(i%3) && i>2)
				printf("\n--------------------\n"); // Prints lines after every row
			printf("  %c  ", game_board[i]);
			if(i==0 || i==1 || i==3 || i==4 || i==6 || i==7) // prints the middle divider
				printf("|");
		}
}


// Function that check wether game should continue or not by checking empty cells
int check_game_continty(char game_board[])
{
        int game_continuity = 0;
        for (int j = 0; j < 9; j++) {
            if (game_board[j] == ' ') // Checks if there is any unplayed box in game
                game_continuity = 1;
        }
        return game_continuity;
}


// Function that check for all the combinations of the win of a player
int check_win(char game_board[])
{
	int a;
	if('O' == game_board[0] && 'O' == game_board[1] && 'O' == game_board[2] || 'O' == game_board[3] && 'O' == game_board[4] && 'O' == game_board[5] ||'O' == game_board[6] && 'O' == game_board[7] && 'O' == game_board[8] || 'O' == game_board[0] && 'O' == game_board[3] && 'O' == game_board[6] || 'O' == game_board[1] && 'O' == game_board[4] && 'O' == game_board[7] || 'O' == game_board[2] && 'O' == game_board[5] && 'O' == game_board[8] || 'O' == game_board[0] && 'O' == game_board[4] && 'O' == game_board[8] || 'O' == game_board[2] && 'O' == game_board[4] && 'O' == game_board[6])
		return 1; // For Player O
	else if('X' == game_board[0] && 'X' == game_board[1] && 'X' == game_board[2] || 'X' == game_board[3] && 'X' == game_board[4] && 'X' == game_board[5] ||'X' == game_board[6] && 'X' == game_board[7] && 'X' == game_board[8] || 'X' == game_board[0] && 'X' == game_board[3] && 'X' == game_board[6] || 'X' == game_board[1] && 'X' == game_board[4] && 'X' == game_board[7] || 'X' == game_board[2] && 'X' == game_board[5] && 'X' == game_board[8] || 'X' == game_board[0] && 'X' == game_board[4] && 'X' == game_board[8] || 'X' == game_board[2] && 'X' == game_board[4] && 'X' == game_board[6])
		return 1; // For Player X
	for(a=0; a<9; a++)
	{
		if(game_board[a] == ' ')
    		return 0; // Game is not finished yet
	}
    return 8; // It's a tie
}


// Functions that exits the game with the status of a win or tie
void exit_game(char symbol)
{
	printf("\n\n===============================================\n");
    printf("            Congratulations!           \n");
    printf("===============================================\n\n");
    
    printf("         Player %c is the ultimate champion!\n\n", symbol);
    
    printf("          _______   _______   _______\n");
    printf("         |       | |       | |       |\n");
    printf("         |   %c   | |   %c   | |   %c   |\n", symbol, symbol, symbol);
    printf("         |_______| |_______| |_______|\n\n");
    
    printf("===============================================\n\n");
	getch();
	exit(0);
}