#include<stdio.h>
#include<string.h>
void find(char [][20],char []);
int main(){
    int i;
    char str[10][20],search[20];
    printf("Enter any ten city names : ");
    for(i=0;i<10;i++){
        fgets(str[i],20,stdin);
    }
    printf("Enter any string to search : ");
    fgets(search,20,stdin);
    find(str,search);
    return 0;
}
void find(char str[][20],char search[]){
    int i;
    for(i=0;i<10;i++){
        if(strcmpi(search,str[i])==0){
            printf("string found on location no %d",i+1);
            break;
        }
    }
    if(i==10){
        printf("string not found");
    }
}
