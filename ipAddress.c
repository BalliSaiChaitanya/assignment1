#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct address_t
{
    int ad1;
    int ad2;
    int ad3;
    int ad4;     
    char alias[10]; 
};
int menu();
int addAddress();
int lookUpAddress();
int updateAddress();
int deleteAddress();
int displayList();
int displayAliasesForLocation();
int saveToFile();



int main(){
char c;
char array[100], input[100];
menu();
return 0;
}


int menu()
{
    int choice;
    printf("Select from the below options: \n1) Addaddress\n2) Lookupaddress\n3) Updateaddress\n4) Deleteaddress\n5) Displaylist\n6) Displayaliasesforlocation\n7) Savetofile\n8) Quit\n");
    scanf("%d",&choice);
    switch(choice){
    case 1: {
        addAddress(); 
        }
    case 2: {
        lookUpAddress();
        }
    case 3: {
        updateAddress();
        }
    case 4: {
        deleteAddress();
        }
    case 5: {
        displayList();
        }
    case 6: {
        displayAliasesForLocation();
        }
    case 7: {
        saveToFile();
        }
    case 8: {
        printf("Good Bye!");
        return 0;
        }
     default: { // Keeping just a default in case of alternative inputs if any
            printf("Enter only 1-8 options"); 
            scanf(" %d",&choice);
            break;   
        }     
    }
    return 0;
}

int addAddress()
{
    int x=0;
    char userAlias[10],alias[10],add[12],newIP[30];
    printf("Enter alias: ");
    scanf("%s",userAlias);
    FILE * fPointer;
    fPointer=fopen("CS531_Inet.txt","r");
    char sl[30];

    while(!feof(fPointer)){
        fgets(sl,22,fPointer);
        char *token1 = strtok(sl, " ");
        strcpy(add,token1);
        token1 = strtok(NULL, " ");
        strcpy(alias,token1);
        //puts(alias);
        x=strcmp(alias,userAlias);
        if (x==0)
        {
            printf("%s already exists\n",userAlias);
            break;
        }
    }
    fclose(fPointer);
    if(x!=0)
    {
    printf("Enter address for %s\n",userAlias);
    scanf("%s",newIP);
    fPointer=fopen("CS531_Inet.txt","a");
    fprintf(fPointer, "\n%s %s\n",newIP,userAlias);
    }
    fclose(fPointer);
    return 0; 
}

int lookUpAddress()
{
    char userAlias[10],alias[10],add[12];
    printf("Enter alias: ");
    scanf("%s",userAlias);
    FILE * fPointer;
    fPointer=fopen("CS531_Inet.txt","r");
    char sl[30];

    while(!feof(fPointer)){
        fgets(sl,22,fPointer);
        char *token1 = strtok(sl, " ");
        strcpy(add,token1);
        token1 = strtok(NULL, " ");
        strcpy(alias,token1);
        //puts(alias);
        if (strcmp (alias,userAlias))
        {
            printf("%s already exists\n",userAlias);
            return 1;
            break;
        }
    }
    fclose(fPointer);
    return 0; 
}

int updateAddress()
{
    int x=0;
    char userAlias[10],alias[10],add[12],newIP[30];
    printf("Enter alias: ");
    scanf("%s",userAlias);
    FILE * fPointer;
    fPointer=fopen("CS531_Inet.txt","r");
    char sl[30];

    while(!feof(fPointer)){
        fgets(sl,22,fPointer);
        char *token1 = strtok(sl, " ");
        strcpy(add,token1);
        token1 = strtok(NULL, " ");
        strcpy(alias,token1);
        //puts(alias);
        x=strcmp(alias,userAlias);
        if (x==0)
        {
            printf("%s already exists\n",userAlias);
            break;
        }
    }
    fclose(fPointer);
    if(x!=0)
    {
    printf("Enter address for %s\n",userAlias);
    scanf("%s",newIP);
    fPointer=fopen("CS531_Inet.txt","a");
    fprintf(fPointer, "\n%s %s\n",newIP,userAlias);
    }
    fclose(fPointer);
    return 0; 

}

int deleteAddress()
{   
    int x=0;
    char userAlias[10],alias[10],add[12],newIP[30];
    printf("Enter alias: ");
    scanf("%s",userAlias);
    FILE * fPointer;
    fPointer=fopen("CS531_Inet.txt","r");
    char sl[30];

    while(!feof(fPointer)){
        fgets(sl,22,fPointer);
        char *token1 = strtok(sl, " ");
        strcpy(add,token1);
        token1 = strtok(NULL, " ");
        strcpy(alias,token1);
        //puts(alias);
        x=strcmp(alias,userAlias);
        if (x==0)
        {
            printf("%s already exists\n",userAlias);
            break;
        }
    }
    fclose(fPointer);
    if(x!=0)
    {
    printf("Enter address for %s\n",userAlias);
    scanf("%s",newIP);
    fPointer=fopen("CS531_Inet.txt","a");
    fprintf(fPointer, "\n%s %s\n",newIP,userAlias);
    }
    fclose(fPointer);
    return 0; 

}

int displayList()
{
    FILE * fPointer;
    fPointer=fopen("CS531_Inet.txt","r");
    char sl[30];

    while(!feof(fPointer)){
        fgets(sl,22,fPointer);
        puts(sl);
    } 
    fclose(fPointer);
    return 0;

}

int displayAliasesForLocation()
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
        //const long number = strtol(token, &a, 10);
        //printf("%d\n",number);
        //ad[3]=number;
        const char* d = a;
        a += 1;
    }
    return 0;
}

int saveToFile()
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



