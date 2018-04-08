#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
 
int main(){
	pid_t id;
 
	printf("Processo pai. PID do avô = %d\n", getpid());
	printf("Processo pai. PID = %d\n", getpid());
 
	if((id = fork()) != 0)
		printf("Processo pai. PID do filho = %d\n", id);
	else {
		sleep(1);
		printf("Processo filho. PID = %d\n", getpid());
	}
 
return 0;
 
}
