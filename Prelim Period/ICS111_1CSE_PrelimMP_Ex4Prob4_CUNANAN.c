#include <stdio.h>

int main(void)
{
	float grossamount;
	char surname[ 30 ];
	char name[ 30 ];
	float fedtax;
	float statetax;
	float sstax;
	float meditax;
	float pensionplan;
	float healthInsurance;
	float netpay;

	FILE *inFile;

	inFile = fopen( "Monthly Paycheck.txt", "w" );

	if ( inFile != NULL )
	{

		printf( "Enter the employee's first name and surname.\n" );
		scanf( "%s %s", name, surname );
		printf( " \n" );
		printf( "Enter gross amount.\n" );
		scanf( "%f", &grossamount );

		fedtax = grossamount * 0.15;
		statetax = grossamount * 0.035;
		sstax = grossamount * 0.0575;
		meditax = grossamount * 0.0275;
		pensionplan = grossamount * 0.05;
		healthInsurance = 75.00;
		netpay = grossamount - fedtax - statetax - sstax - meditax - pensionplan - healthInsurance;

		fprintf( inFile, "%s %s\n", name, surname );
		fprintf( inFile, "Gross Amount: .............$%.2f\n", grossamount );
		fprintf( inFile, "Federal Tax: ..............$%.2f\n", fedtax );
		fprintf( inFile, "State Tax: ................$%.2f\n", statetax );
		fprintf( inFile, "Social Security Tax: ......$%.2f\n", sstax );
		fprintf( inFile, "Medicare/Medicaid Tax: ....$%.2f\n", meditax );
		fprintf( inFile, "Pension Plan: .............$%.2f\n", pensionplan );
		fprintf( inFile, "Health Insurance: .........$%.2f\n", healthInsurance );
		fprintf( inFile, "Net Pay: ..................$%.2f\n", netpay );

		fclose(inFile);
	}
	else
	{
		printf("Could not open file. Sorry.\n");
	}

	getch();

}
