#include<stdio.h>
#include<string.h>
int main(){
    int i,c=0,j;
    char data[5][11]={"mom","coloc","racecar","algorithm","technique"};
    for(i=0;i<5;i++){
        c=strlen(data[i]);
        for(j=0;data[i][j];j++){
            c--;
            if(data[i][c]!=data[i][j])
                break;   
        }
        if(c==0)
            printf("%s ",data[i]);
    }
    return 0;
}
