#include<stdio.h>
#include<string.h>
int main(){
    char s[6][10]={"the","quick","brown","quick","max","fox"};
    char word1[5]="the",word2[5]="fox";
    int i,start,end,n1,n2,j;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(strcmp(s[i],s[j])==0){
                n1=i;
                n2=j;
            }
        }
        if(strcmp(s[i],word1)==0){
            start=i;
        }
        if(strcmp(s[i],word2)==0){
            end=i;
        }
    }
    if(end-start-1>0){
        start=n2;
    }
    if(start-end-1>0){
        start=n2;
    }
    if(start<end)
        printf("%d",end-start);
    else
        if((start-end)<(end-start))
            printf("%d",start-end);
        else
            if(n1-end)
                printf("%d",n1-end);
    return 0;
}
