// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

enum { max_length = 127 };
static char response[max_length];

int main( int argc, char ** argv ) {
	printf("What it is, blood? ");
	fflush(stdout);
	fgets(response, max_length, stdin);
	printf("It is: %s\n", response);
	return 0;
}

