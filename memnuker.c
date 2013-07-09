#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Are you kidding me, booleans arent part of the stdlib ?????? 
   I just want a loop!! jdk
   */
#include <stdbool.h>

int main(int argc, char** argv) {
    int max = -1;
    int mb = 0;
    char* buffer;

    if(argc > 1)
        max = atoi(argv[1]);

		while((buffer=malloc(1024*1024)) != NULL && mb != max) {
		    memset(buffer, 0, 1024*1024);
		    mb++;
		    printf("Allocated %d MB\n", mb);
		}

        /* I want this thing to idle once the memory is taken up so we can observe things that occur, jdk */
		if ( mb >= max) {
			while( true ) {
				sleep(100);
				}
		}


    return 0;
}
