#include<stdio.h>
#include<string.h>
#include<conio.h>
int readkey(){
    char c;
    c=_getch();
    return c;
}
int main(){
    int i,flag=0,x;
    char check[3][2][10]={{"chandra","123b"},{"pramod","345d"},{"varun","231n"}};
    char user[20];
    char pass[20];
    printf("\a\a\a\a\a\t\t\t\tWelcome : \a\a\a\a\a\n");
    while(1){
        if(flag==1){
            printf("\n\t\tPress Enter to login again");    
        }
        else{
            printf("\n\t\tPress Enter to login");
        }
        printf("\tPress Esc to Exit\t\t\t\t\n\n");
        x=readkey();
        if(x==13){
            printf("Enter the username : ");
            scanf("%s",user);
            printf("Enter the password : ");
            scanf("%s",pass);
            for(i=0;i<3;i++){
                if(strcmp(user,check[i][0])==0&&strcmp(pass,check[i][1])==0){
                    printf("Login Successful");
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("Login failed \twrong username or password entered\n\n");
            }
        }
        else{
            break;
        }
    }
    return 0;
}
