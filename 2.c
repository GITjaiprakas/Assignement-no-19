#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char city[10][20],t[20];
    printf("Enter the names of the 10 cities : ");
    for(i=0;i<10;i++){
        fgets(city[i],20,stdin);
    }
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(strcmpi(city[i],city[j])>0){
                strcpy(t,city[i]);
                strcpy(city[i],city[j]);
                strcpy(city[j],t);
            }
        }
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%s",city[i]);
    }
}
