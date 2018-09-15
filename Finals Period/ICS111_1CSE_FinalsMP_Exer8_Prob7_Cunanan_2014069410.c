#include <stdio.h>


int main()
{
char reservation[13][6];
int i;
int j;
int ch = 0;
int row1 = 0;
int row2 = 0;
int classChoice = 0;

for( i = 0; i < 13; i++ )
{
	for( j = 0; j < 6; j++ )
	{
		reservation[i][j]= '*';
	}
}

do
{
	printf("1. Enter ticket type.\n");
	printf("2. Display Full Reservation Status.\n");
	printf("3. Exit.\n\n");
	printf("Input your choice: ");
	scanf( "%d", &ch );
	
	switch( ch )
	{
		case 1:
			printf("\n1. First Class\n");
			printf("2. Business Class\n");
			printf("3. Economy Class\n");
			printf("Enter your choice: ");
			scanf("%d", &classChoice);

			switch(classChoice)
			{
				case 1:
					printf("\nClass specified by you : First Class\n");
					row1=0;row2=1;
					break;
				case 2:
					printf("\nClass specified by you : Business Class\n");
					row1=2;row2=6;
					break;
				case 3:
					printf("\nClass specified by you : Economic Class\n");
					row1=7;row2=12;
					break;
				default:
					printf("Unknown Choice\n");
					break;
			}

			printf("\n* - Available Seats");
			printf("\nX - Occupied Seats\n");
			printf("\nAvailable seats for you are :: \n");
			printf("\n\tA	B	C	D	E	F\n");
			
			for( i = row1; i <= row2; i++ )
			{
				printf("Row %d", i + 1 );
				for( j = 0; j < 6; j++ )
				{
					printf("\t%c", reservation[i][j]);
				}
				printf("\n");
			}

			int seat_row, seat;

			printf("\nEnter desired row :");
			scanf("%d", &seat_row);
			
			if(seat_row < (row1 + 1) || seat_row > (row2 + 1))
			{
                printf("Invalid row selected\n");
                system("pause");
                break;   
            }     
			
			printf("Enter desired seat number (1-6) :");
			scanf("%d", &seat);

			if(seat < 1 || seat > 6)
			{
				printf("Invalid seat selected\n");
			    system("pause");
				break;
			}

			if( reservation[seat_row - 1][seat - 1] != 'X')
			{
				reservation[seat_row - 1][seat - 1]= 'X';
				printf("\nReserved!\n");
			}

			else
			{
				printf("======SEAT IS ALREADY OCCUPIED=====");
				break;
			}

			system("pause");
			break;

		case 2:
			printf("\t A\t B\t C\t D\t E\t F\n");
			for( i=0; i<13; i++ )
			{
				printf("Row %d", i+1 );
				for( j = 0; j < 6; j++ )
				{
					printf("\t *", reservation[i][j]);
				}
				printf("\n");
			}
			system("pause");
		case 3:
			break;
}
}while( ch != 3);

return 0;
}
