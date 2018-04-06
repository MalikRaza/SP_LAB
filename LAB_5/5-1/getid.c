#include <stdio.h> 
#include <unistd.h> 

void main(){ 

uid_t ruid, euid, suid; 
gid_t rgid, egid, sgid; 

int r=getresuid(&ruid, &euid, &suid); 
if(r==0)
	{
	printf(" Real user ID : %d\n", (long)ruid); 

	printf(" Effective user-ID : %d\n", (long)euid); 

	printf("Saved Set-user ID : %d\n", (long)suid); 
	}
else
	{
	printf("error");
	}
int k=getresgid(&rgid, &egid, &sgid); 
if(k==0)
	{
	printf("Real group ID : %d\n", (long)rgid); 

	printf(" Effective group ID is: %d\n", (long)egid); 

	printf(" Saved groupID is: %d\n", (long)sgid); 
	}
else
{
printf("error");
}

} 
