#include<typeslow.h>
#include<conio.h>


void run_game(void);
void print_the_board(char game_board[], int user_input, char player);
int check_game_continty(char game_board[]);
int check_win(char game_board[]);
void exit_game(char);

void main(){
	run_game();
}

void run_game(){
	char game_board[9] = {
							' ', ' ', ' ',
							' ', ' ', ' ',
							' ', ' ', ' ',
						};
	int player_1, player_2, game_continuity=1, win_check;

	print_the_board(game_board, 0, ' ');

	while(game_continuity)
	{
		printf("\n\n\nPlayer 1: ");
		scanf("%d", &player_1);
		game_board[player_1] = 'O';

		game_continuity = check_game_continty(game_board);

		if(game_continuity)
			print_the_board(game_board, player_1, 'O');
		else
			{
				print_the_board(game_board, player_1, 'O');
				break;
			}

		win_check = check_win(game_board);
		if(win_check)
			exit_game('O');

		printf("\n\n\nPlayer 2: ");
		scanf("%d", &player_2);
		game_board[player_2] = 'X';

		print_the_board(game_board, player_2, 'X');
		win_check = check_win(game_board);
		if(win_check)
			exit_game('X');
}
}

void print_the_board(char game_board[], int user_input, char player)
{
	game_board[user_input] = player;
	system("cls");
	for(int i=0; i<9; i++)
		{
			if(!(i%3))
				printf("\n");
			printf("%c|", game_board[i]);
		}
}

int check_game_continty(char game_board[])
{
        int game_continuity = 0;
        for (int j = 0; j < 9; j++) {
            if (game_board[j] == ' ')
                game_continuity = 1;
        }
        return game_continuity;
}

int check_win(char game_board[])
{
	if('O' == game_board[0] && 'O' == game_board[1] && 'O' == game_board[2] || 'O' == game_board[3] && 'O' == game_board[4] && 'O' == game_board[5] ||'O' == game_board[6] && 'O' == game_board[7] && 'O' == game_board[8] || 'O' == game_board[0] && 'O' == game_board[3] && 'O' == game_board[6] || 'O' == game_board[1] && 'O' == game_board[4] && 'O' == game_board[7] || 'O' == game_board[2] && 'O' == game_board[5] && 'O' == game_board[8] || 'O' == game_board[0] && 'O' == game_board[4] && 'O' == game_board[8] || 'O' == game_board[2] && 'O' == game_board[4] && 'O' == game_board[6])
		return 1;
	else if('X' == game_board[0] && 'X' == game_board[1] && 'X' == game_board[2] || 'X' == game_board[3] && 'X' == game_board[4] && 'X' == game_board[5] ||'X' == game_board[6] && 'X' == game_board[7] && 'X' == game_board[8] || 'X' == game_board[0] && 'X' == game_board[3] && 'X' == game_board[6] || 'X' == game_board[1] && 'X' == game_board[4] && 'X' == game_board[7] || 'X' == game_board[2] && 'X' == game_board[5] && 'X' == game_board[8] || 'X' == game_board[0] && 'X' == game_board[4] && 'X' == game_board[8] || 'X' == game_board[2] && 'X' == game_board[4] && 'X' == game_board[6])
		return 1;
	else
		return 0;
}

void exit_game(char winner)
{
	printf("\n\n\n\tPlayer %c Won!! Congradulations\n\n", winner);
	printf("\nPress any key to exit...");
	getch();
	exit(0);
}