#include<stdio.h>
void vowel(char [][20]);
int main(){
    int i;
    char str[5][20];
    printf("Enter any five strings : ");
    for(i=0;i<5;i++){
        fgets(str[i],20,stdin);
    }
    vowel(str);
    return 0;
}
void vowel(char str[][20]){
    int i,j,k,count=0;
    char che[]="aAeEiIoOuU";
    for(i=0;i<5;i++){
        for(j=0;str[i][j];j++){
            for(k=0;che[k];k++){
                if(str[i][j]==che[k]){
                    count++;
                }
            }
        }
        printf("\n string %d contains %d vowels",i+1,count);
        count=0;
    }
}
