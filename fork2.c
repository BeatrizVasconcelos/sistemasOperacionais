#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
 
 
int main(void) {
	fork();
	fork();
	fork();
 
	printf("PID = %d\n", getpid());
	return 0;
}
 
