//Agl

#include <stdio.h>
#include <string.h>

int secret;
int secrettwo[];

void encryp(char *nome,int qnt){
    char *origin=nome;
    for(int x=0;x<strlen(origin);x++){
        nome[x]=*(origin+x)+qnt;
        if ((int)nome[x]>122 && (int)nome[x]!=122+qnt){
            secrettwo[x]=(int)nome[x]-122;
            nome[x]=48+(secrettwo[x]+qnt);
            }
        if((int)nome[x]==122+qnt){
            secret=0;
            nome[x]=48;
        }
    }
}

void decryp(char *nome,int qnt){
    char *origin=nome;
    int test;
    for(int x=0;x<strlen(origin);x++){
        *(nome+x)=origin[x]-qnt;
        if((int)*(nome+x)==48+secrettwo[x]){
            test=qnt-secrettwo[x];
            *(nome+x)=122-test;
            }
        if((int)*(nome+x)+qnt==48){
            *(nome+x)=122;
            }
    }
}


int main(){

    char pass[100];
    int qnt=2;//select number need to encrypt
    
    fflush(stdin);
    fgets(pass,100,stdin);
    printf("Your input: %s\n",pass);
    
    encryp(pass,qnt);
    
    printf("\nEncrypted is: %s",pass);
    
    decryp(pass,qnt);
    
    printf("\nDecrypted is: %s",pass);

    return 0;
}