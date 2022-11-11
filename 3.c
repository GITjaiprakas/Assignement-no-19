#include<stdio.h>
int main(){
    int i;
    char str[2][10]; 
    printf("Enter any two strings : ");
    for(i=0;i<2;i++){
        fgets(str[i],10,stdin);
    }
    for(i=0;i<2;i++){
        printf("%s",str[i]);
    }
    return 0;
}
