#include<stdio.h>
#include<string.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    
    return n*fact(n-1);
}
int main(){
    int n,i;
    char usname[7][25]={"praveen@gmail.com","jai.prakas@gmail.com","prabhu@gmail.com","raghav@gmail.com","prashant@gmail.com","husain@gmail.com","wasim@gmail.com"};
    char name[25];
    printf("Enter your username : ");
    fgets(name,25,stdin);
    for(i=0;i<7;i++){
        if(strcmp(usname[i],name)==0){
            printf("Enter the factorial number to calculate it's factorial : ");
            scanf("%d",&n);
            printf("%d",fact(n));
            break;
        }
    }
    if(i==7){
        printf("Please enter the valid username ");
    }
    return 0;
}
