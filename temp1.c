#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{ 
    char usrfile[20],c;
    FILE *fptr1, *fptr2;
    fptr1 = fopen("CS531_Inet.txt", "r"); 
    printf("enter file-name: ");
    scanf("%s", usrfile); 
    // Open another file for writing 
    fptr2 = fopen(usrfile, "w+"); 
    // Read contents from file 
    c = fgetc(fptr1); 
    while (c != EOF) 
    { 
        fputc(c, fptr2); 
        c = fgetc(fptr1); 
    } 
    printf("\nContents copied to %s", usrfile); 
    fclose(fptr1); 
    fclose(fptr2); 
    return 0; 
}