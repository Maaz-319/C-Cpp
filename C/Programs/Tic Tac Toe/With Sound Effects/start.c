/*
	Code by Maaz Bin Asif
*/

// Header Files
#include<typeslow.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include <unistd.h>


// Function Signatures
void run_game(void);
void print_the_board(char game_board[], int user_input, char player);
int check_game_continty(char game_board[]);
int check_win(char game_board[]);
void exit_game(char);
int play_again(void);
void play_sound(char);

void main(){
	char sample_game_board[9] = {
									'1','2','3',
									'4','5','6',
									'7','8','9'
								};

	// Greetings=====================================================
	play_sound('S'); // Plays the sound effect
	play_sound('1'); // Plays the sound effect
	usleep(109990);

	print_slowly("\n\t\t=======================================\n");
    print_slowly("\t\t          Welcome to Tic Tac Toe!        \n");
    print_slowly("\t\t               Made by Maaz\n");
    print_slowly("\t\t=======================================\n\n");
    print_slowly("\n\n\t\t     Press any key to continue....");
    getch();
    // ==============================================================

    system("cls");
    play_sound('2');
	usleep(199990);

    // Rules=====================================================================
    print_slowly("\n\t\t| RULES |\n\n");
    print_slowly("\n\t> Enter the Number of Box you Wish to Play-In and Press Enter.");
    print_slowly("\n\t> You Only Get One Turn per Box.");
    print_slowly("\n\t> 'O' Will Go First");
    print_slowly("\n\t> Number of Boxes Range from 1-9 as Shown below...");
    print_slowly("\n\n\tHit any Key to Dive into the Game!!...\n\n");
    for(int i=0; i<9; i++)
		{
			if(!(i%3) && i>2)
				printf("\n--------------------\n"); // Prints lines after every row
			printf("  %c  ", sample_game_board[i]);
			if(i==0 || i==1 || i==3 || i==4 || i==6 || i==7) // prints the middle divider
				printf("|");
		}
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
			print_slowly("\n\n\nPlayer O: ");
			scanf("%d", &player_1);
			player_1-=1;
			if(game_board[player_1] != ' ')
			{
				usleep(109990);
				play_sound('D');
			}
		}while(game_board[player_1] != ' ');

		play_sound('O'); // Sound of Player O input
		usleep(109990);

		game_board[player_1] = 'O';
		// ===========================================================
		print_the_board(game_board, player_1, 'O');

		// Check if a Player has won===========
		win_check = check_win(game_board);
		if(win_check == 8)
		{
			exit_game('T');
    	}
		else if(win_check == 1)
			exit_game('O');
		//=====================================


		game_continuity = check_game_continty(game_board);

		// If the game is Eligible to move ahead, The board of game is refreshed otherwise, game ends!!
		if(game_continuity)
			print_the_board(game_board, player_1, 'O');
		else
			{
				print_the_board(game_board, player_1, 'O');
				break;
			}


		// Player 2 input
		do
		{
			print_slowly("\n\n\nPlayer X: ");
			scanf("%d", &player_2);
			player_2-=1;
			if(game_board[player_2] != ' ')
			{
				usleep(109990);
				play_sound('D');
			}
		}while(game_board[player_2] != ' ');

		play_sound('X'); // Sound of Player X input
		usleep(109990);

		game_board[player_2] = 'X';

		print_the_board(game_board, player_2, 'X');
		win_check = check_win(game_board);
		if(win_check == 8)
		{
			exit_game('T');
    	}
		else if(win_check == 1)
			exit_game('X');
	}
}


// Function that draws the game board with all the requirments and updates
void print_the_board(char game_board[], int user_input, char player)
{
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
	if(symbol=='T')
	{
		play_sound('T');
		print_slowly("\n\n===============================================\n");
    	print_slowly("            Game Tied! Try Again           \n");
    	print_slowly("===============================================\n\n");
	}else
		{
			usleep(109990);
			play_sound('W');
			printf("\n\n===============================================\n");
			printf("            Congratulations!           \n");
			printf("===============================================\n\n");
			printf("         Player %c is the ultimate champion!\n\n", symbol);
			    
			printf("          _______   _______   _______\n");
			printf("         |       | |       | |       |\n");
			printf("         |   %c   | |   %c   | |   %c   |\n", symbol, symbol, symbol);
			printf("         |_______| |_______| |_______|\n\n");
			print_slowly("===============================================\n\n");
		}
	getch();
	play_again();
}


int play_again()
{
	char user_choice;
	print_slowly("\n\n\tChoose:\n\ta) Run again\n\tb) Exit\n\t\tChoice: ");
	scanf(" %c", &user_choice);
	if(user_choice == 'a')
		run_game();
	else if(user_choice == 'b')
	{
		system("cls");
		print_slowly("\n\t\t@ This game by Maaz Bin Asif @\n");
		print_slowly("\t\tContact --> maazbinaasif@gmail.com");
		print_slowly("\n\n\nEnter to exit....");
		getch();
	}
	else
		play_again();
	exit(0);
}


void play_sound(char sound)
{
	if(sound=='S')
		PlaySound("utilities/startgame.wav", NULL, SND_FILENAME);
	else if(sound=='1')
		PlaySound("utilities/type1.wav", NULL, SND_FILENAME | SND_ASYNC);
	else if(sound=='2')
		PlaySound("utilities/type2.wav", NULL, SND_FILENAME | SND_ASYNC);
	else if(sound=='T')
		PlaySound("utilities/gameover.wav", NULL, SND_FILENAME | SND_ASYNC);
	else if(sound=='O')
		PlaySound("utilities/playerO.wav", NULL, SND_FILENAME | SND_ASYNC);
	else if(sound=='W')
		PlaySound("utilities/victory.wav", NULL, SND_FILENAME | SND_ASYNC);
	else if(sound=='D')
		PlaySound("utilities/wronginput.wav", NULL, SND_FILENAME | SND_ASYNC);
	else
		PlaySound("utilities/playerX.wav", NULL, SND_FILENAME | SND_ASYNC);
}