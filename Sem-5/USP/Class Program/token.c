#include<stdio.h>
#include<string.h>
int main(){
char str[100];
gets(str);
char *token;
token=strtok(str,"-");
while(token!=NULL){
printf("Token =%s \n ",token);
token=strtok(NULL,"-");
}
return 0;
}	
//"ITER-IBCS-SHM-SUM-IDS"
