#include<stdio.h>
void signup(void);
int main(){
    int l;
    printf("WELCOME to the Ride sharing application\n");
    printf("Do you want to login(1) or signup(0)?\n");
    scanf("%d",&l);
    if(l==1){
        printf("welcome new user\n");
    }else{
        printf("welcomeback\n");
        signup();
    }
}
void signup(void){
    char email[39];
    printf("Enter Your  email id\n");
    scanf("%39s",email);
    printf("%39s",email);

}