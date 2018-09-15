#include <stdio.h>

int main( void )
{
	int box;
	int sideline;
	int premium;
	int genAd;
	int box_st;
	int sideline_st;
	int premium_st;
	int genAd_st;
	int b;
	int s;
	int p;
	int g;
	float soldtickets;
	float totalsaleamount;

	FILE *pFile;

	pFile = fopen("Sales.txt", "w");

	if (pFile != NULL)
	{

		box = 250;
		sideline = 100;
		premium = 50;
		genAd = 25;

		printf( "Enter number of sold box tickets\n" );
		scanf( "%d", &box_st );
		b = box * box_st;

		printf( " \n" );

		printf( "Enter number of sold sideline tickets\n" );
		scanf( "%d", &sideline_st );
		s = sideline * sideline_st;

		printf( " \n" );

		printf( "Enter number of sold premium tickets\n" );
		scanf( "%d", &premium_st );
		p = premium * premium_st;

		printf( " \n" );

		printf( "Enter number of sold general admission tickets\n" );
		scanf( "%d", &genAd_st );
		g = genAd * genAd_st;

		printf( " \n" );

		fprintf(pFile, "                  |Ticket prices|     |Tickets Sold|\n" );
		fprintf(pFile, "        Box             %d                   %d \n", box, box_st );
		fprintf(pFile, "      Sideline          %d                   %d \n", sideline, sideline_st );
		fprintf(pFile, "      Premium           %d                   %d \n", premium, premium_st );
		fprintf(pFile, "  General Admission     %d                   %d \n", genAd, genAd_st );

		soldtickets = box_st + sideline_st + premium_st + genAd_st;
		totalsaleamount = b + s + p + g;
		fprintf(pFile, " \n" );
		fprintf(pFile, "Total amount of sold tickets is %.2f\n", soldtickets );
		fprintf(pFile, "Total sales amount is %.2f\n", totalsaleamount );

		fclose(pFile);
	}
	else
	{
		printf("Could not open the file.\n");
	}

	return 0;
}
