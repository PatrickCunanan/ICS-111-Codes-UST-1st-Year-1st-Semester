#include <stdio.h>
int main(void)
{
    printf("Enter the last names of five candidates in a local election and the number of votes received by each candidate\n");
    int i=0;
    char* name[5][100];
    int curVotes=0;
    int votes[5];

    for( i=0; i<5; ++i )
    {
        printf( "%d. Last name: ", i+1 );
        scanf( "%s", name[i] );
        printf( "Number of votes:\n" );
        scanf( "%d", &curVotes );
        votes[i] = curVotes;
    }
    float sum = 0;

    for( i=0; i<5; ++i )
    {
        sum = sum + votes[i];
    }

    float percentage[5];
    for( i=0; i<5; ++i )
    {
        percentage[i] = 100*votes[i]/sum;
    }

    for( i=0; i<5; ++i )
    {
        printf( "%s: %d votes( %.2f %%)\n", name[i], votes[i], percentage[i]);
    }
    int curWinner=0;
    float curValue = 0;

    for( i=0; i < 5; ++i )
    {
        if( percentage[i] > curValue )
        {
            curValue = percentage[i];
            curWinner = i;
        }
    }
    printf( "Winner: %s\n", name[curWinner] );

    getch();
    return 0;
}
