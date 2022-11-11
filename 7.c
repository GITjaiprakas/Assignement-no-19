#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,count=0;
    char str[8][15]={"121.34.45.54","131.24.15.35","353.35.135.146","24.15.435.35","234.34.125.43","34.3.7.0","1.5.0.0","15.43.15.8"};
    for(i=0;i<8;i++){
        printf("%s",str[i]);
        char *a=strtok(str[i],".");
        while(a!=NULL){
            int x=atoi(a);
            if((x>=0)&&(x<=255)){
                count++;
            }
            a=strtok(NULL,".");
        }
        if(count==4){
            printf(" valid ip address");
            printf("\n");
        }
        else{
            printf(" this ip address is not valid");
            printf("\n");
        }
        count=0;
    }
    return 0;
}
