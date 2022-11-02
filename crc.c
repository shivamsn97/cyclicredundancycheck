#include<stdio.h>
#define GSIZE 50
#define DSIZE 300

#include"functions.c"

int main()
{
    char genp[GSIZE], data[DSIZE], data_copy[DSIZE], *rem;
    int i, j;
    printf("Enter generating polynomial (in bitstring): ");
    gets(genp);
    printf("Enter message (in bitstring): ");
    gets(data);
    
    for(i = 0; data[i]; ++i) data_copy[i] = data[i];
    for(j = 1; genp[j]; ++j) data[i + j - 1] = '0';
    data[i+j-1] = 0;
    // printf("LOG: DATA = %s\n", data);
    rem = get_reminder(genp, data);
    // printf("reminder = %s\n", rem);
    for(j = 0; rem[j]; ++j) data_copy[i+j] = rem[j];
    data_copy[i+j] = 0;
    
    printf("\nMessage after CRC is: %s\n(Appended reminder is %s)", data_copy, rem);
    return 0;
}
