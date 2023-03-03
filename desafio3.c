#include <stdio.h>
#include <string.h>

int main(){
    char palavra[]="caixa";
    int x=strlen(palavra);
    printf("palavra:%s",palavra);
    printf("\ntamanho da palavra:%d",x);
    int j=x-1;
    int i;
    char palavrainvertida[x];
    for(i=0;i<x;i++){
        palavrainvertida[i]=palavra[j];
        j--;
    }
    printf("\npalavra invertida:");
     for(i=0;i<x;i++){
        printf("%c",palavrainvertida[i]);
    }
    
    


}