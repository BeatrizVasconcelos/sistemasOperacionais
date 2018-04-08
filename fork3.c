#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
 
int main(void) {
	if(fork())
		if(fork())
			printf("Processo A\n");
		else
			printf("Processo C\n");
	else
		printf("Processo B\n");
 
 
	return 0;
}
