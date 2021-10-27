#include <unistd.h>
#include <stdio.h>

void main(){
 
   printf("Parent Process Id = %d\nChild Process Id = %d\n", getppid(),getpid());
 
  }
