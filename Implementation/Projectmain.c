#include<stdio.h>
#include "test.h"
#include<string.h>
#include<stdlib.h>
void signup(void);
void login(void);
void driver(void);
void passenger(void);
int main(){
    int l;
    printf("WELCOME to the Ride sharing application\n");
    printf("Do you want to login(1) or signup(0)?\n");
    scanf("%d",&l);
    if(l==1){
        printf("welcome new user\n");
        login();
    }else{
        printf("welcomeback\n");
        signup();
    }
}
void signup(void){
    char email[39];
    char pass[20];
    char rpass[20];
    printf("Enter Your  email id\n");
    scanf("%39s",email);
    printf("%39s\n",email);
    printf("Enter Password\n");
    scanf("%20s",pass);
    printf("re enter password\n");
    scanf("%20s",rpass);
    if(strcmp(pass,rpass)==0){
        printf("success\n");
        login();
    }else{
        printf("something wrong\n");
        
    }

}
void login(void){
    char email[39];
    char pass[20];
    int n;
    printf("Enter Your  email id\n");
    scanf("%39s",email);
    printf("%39s\n",email);
    printf("Enter Password\n");
    scanf("%20s",pass);
    printf("select between driver(1) or passanger(2)?\n");
    scanf("%d",&n);
    if(n==1){
        printf("driver\n");
        driver();
    }else{
        printf("passenger");
        passenger();
    }


}
void driver(void){
    system ("driverdet.exe");
    printf("done");


}
void passenger(){
    char s1[20],e1[20],a[20];
    //system ("fetchdriv.exe");
    //fetchdriv();
    int a1;
    char s;
    char e;
    printf("Enter pickup location\n");
    scanf(" %c",&s);
    printf("Enter enter drop location\n");
    scanf(" %c",&e);
    printf("%c,%c",s,e);
    a1=fetchdriv(s,e);
    printf("%d",a1);
}