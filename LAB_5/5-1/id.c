#include <stdio.h> 
#include <unistd.h> 
void main()
{ 
printf("Real user-ID : %d\n", (long)getuid()); 

printf("Effective user-ID : %d\n", (long)geteuid()); 

printf("Real group-ID: %d\n", (long)getgid()); 

printf("Effective groupID: %d\n", (long)getegid()); 

}
