#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(int argc,char *argv[]){

    char CAP[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char sp[14] = {'!','@','#','$','%','^','&','*','(',')','_','-',',','.'};
    char SMAL[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'm', 'n', 'o', 'p', 'q','r', 's', 't', 'u', 'v', 'w', 'x', 'y','z'};
    int rep , length ; 
    srand(time(NULL));
    FILE *file ; 
    file = fopen("pass1.txt","w");
    printf("Number of lines? -> "); 
    scanf("%d",&rep); 
    printf("Length of password ? -> "); 
    scanf("%d",&length ); 
    for(int i =0 ; i < rep ; i++){
        for(int j = 0 ; j< length;j++){
            int cap = rand()%26, n = rand()%10,s = rand()%14,smal = rand()%26;
            char letters[3]= {CAP[cap],num[n],SMAL[smal]}; 
            int random = rand()%3 ;
            if(letters[random] != '\0'){
               fprintf(file,"%c",letters[random]);
            }
        }
        fprintf(file,"\n");
    }
    // convert(rep);
    fclose(file);
    return 0 ;
}
