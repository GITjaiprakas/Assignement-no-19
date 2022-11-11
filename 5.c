#include<stdio.h>
#include<string.h>
int main(){
    char email[5][20]={"nai.rhd@gmail.com","shory@gmail.com","prakash@gmail.com","shhudi@gmail.com","akr.ah$gmail.com"};
    int i;
    for(i=0;i<5;i++){
        if(strchr(email[i],'@')==0){
            printf("%s",email[i]);
        }
    }
    return 0;
}
