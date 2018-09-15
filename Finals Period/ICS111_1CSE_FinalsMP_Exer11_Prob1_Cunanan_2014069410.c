#include <stdio.h>
#include <string.h>

struct movieType
{
char movie_name[50];
char movie_director[50];
char movie_producer[50];
int movie_year;
};

int main()
{
struct movieType movie;

printf("Input movie title:");
gets(movie.movie_name);
printf("Input movie director:");
gets(movie.movie_director);
printf("Input movie producer:");
gets(movie.movie_producer);
printf("Input movie year:");
scanf("%d",&movie.movie_year);

printf("\nMovie Title: %s\nDirector: %s\nProducer: %s\nYear Released: %d",movie.movie_name,movie.movie_director,movie.movie_producer,movie.movie_year);

getch();
return 0;
}
