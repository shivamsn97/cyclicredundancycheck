#include<stdio.h>
#define GSIZE 50
#define DSIZE 300

#include"functions.c"

int main()
{
    char genp[GSIZE], data[DSIZE], *rem;
    int i, j;
    printf("Enter generating polynomial (in bitstring): ");
    gets(genp);
    printf("Enter message (in bitstring): ");
    gets(data);
    
    rem = get_reminder(genp, data);
    
    for(i = 0; rem[i]; ++i) 
    	if (rem[i] == '1')
    		break;
	if(rem[i] == '1') 
		printf("Message recieved is incorrect.\n");
	else
		printf("Message recieved is correct.\n");
    return 0;
}
