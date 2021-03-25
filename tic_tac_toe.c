#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

char block[10] = {'0','1','2','3','4','5','6','7','8','9'};
int checkifWin();
void drawBoard();

int main(){
	system("color 0b");
	int player = 1, i ,choice;
	char mark;
	do {
		drawBoard();
		player = (player % 2) ? 1 : 2;
		printf("Player %d, enter the choice : ",player);
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O';
		if(choice == 1 && block[1] == '1')
			block[1] = mark;
		else if(choice == 2 && block[2] == '2')
			block[2] = mark;
			else if(choice == 3 && block[3] == '3')
			block[3] = mark;
			else if(choice == 4 && block[4] == '4')
			block[4] = mark;
			else if(choice == 5 && block[5] == '5')
			block[5] = mark;
			else if(choice == 6 && block[6] == '6')
			block[6] = mark;
			else if(choice == 7 && block[7] == '7')
			block[7] = mark;
			else if(choice == 8 && block[8] == '8')
			block[8] = mark;
			else if(choice == 9 && block[9] == '9')
			block[9] = mark;
			
			else {
				printf("Invalid option !");
				player--;
				getch();
			}
			i = checkifWin();
			player++;	
		
	}while(i == -1);
	
	drawBoard();
	if(i==1){
		printf("==>Player %d won!!<==",--player);
	}
	else {
		printf("==>Game draw");
	}
		getch();
		return 0;
}
int checkifWin(){
	if(block[1] == block[2] && block[2] == block[3])
		return 1;
	else if (block[4] == block[5] && block[5] == block[6])
		return 1;
	else if(block[7] == block[8] && block[8] == block[9])
		return 1;
	else if(block[1] == block[4] && block[4] == block[7])
		return 1;
	else if(block[2] == block[5] && block[5] == block[8])
		return 1;
	else if(block[3] == block[6] && block[6] == block[9])
		return 1;
	else if(block[1] == block[5] && block[5] == block[9])
		return 1;
	else if(block[3] == block[5] && block[5] == block[7])
		return 1;
	else if(block[1] != '1' && block[2] != '2' && block[3] != '3' && block[4] !='4' && block[5] != '5' && block[6] != '6' && block[7] != '7' && block[8] != '8' && block[9] != '9')
		return 0;
	else 
		return -1;	
}

void drawBoard(){
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",block[1],block[2],block[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",block[4],block[5],block[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",block[7],block[8],block[9]);
	printf("     |     |     \n");	
}

