#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main ( )
{
	puts("Orphan process program start");
	int pid ;
	printf ("I'am the original process with PID %d and PPID %d.\n", getpid (
	), getppid ( ) ) ;
	pid = fork ( ) ; 
	if ( pid != 0 ) 
	{
	printf ("I'am the parent process with PID %d and PPID %d.\n", getpid (
	), getppid ( ) ) ;
	printf ("My child's PID is %d\n", pid ) ;
	}
	else 
	{
	sleep (4) ; /* make sure that the parent terminates first */
	printf ("I'am the child process with PID %d and PPID %d.\n", getpid ( ),
	getppid ( ) ) ;
	}
	printf ("PID %d terminates.\n", getpid ( ) ) ;

	puts("Orphan process program ended");


	puts("Zombie process program");
	
	if ( pid != 0 ) 
	{
	while (1) 
	sleep (100) ; 
	}
	else 
	{
	exit (42) ; 
}



}