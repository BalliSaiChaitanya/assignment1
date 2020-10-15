#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct address_t
{
    int ad1;
    int ad2;
    int ad3;
    int ad4;     
    char alias[10]; 
    struct address_t *next; 
};

int main()
{
    FILE * fPointer;
    fPointer=fopen("CS531_Inet.txt","r");
    char sl[30];

    while(!feof(fPointer)){
        fgets(sl,30,fPointer);
        char *token = strtok(sl, ".") ;
        int ad[3],i=0;
        while (i<3) 
        { 
        //printf("%s\n", token); 
        sscanf(token, "%d", &ad[i]); 
        token = strtok(NULL, ".");
        i++; 
        }
        //strcpy(alise,token);
        char *token1 = strtok(sl, "");
        //printf("%s\n", token);
        const char* a;
        const long number = strtol(token, &a, 10);
        //printf("%d\n",number);
        ad[3]=number;
        const char* d = a;
        a += 1;
        
        struct address_t *node;
        node->ad1=ad[0];
        node->ad2=ad[1];
        node->ad3=ad[2];
        node->ad4=ad[3];
        //node->alias=a;


        printf("%s", a);
    }
    fclose(fPointer);

}