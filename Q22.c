//Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>
float percent(int ccp, int ssp){
   if(ccp>ssp)
   return ((ccp-ssp)/(1.0*ccp))*100;
   else 
   return ((ssp-ccp)/(1.0*ccp))*100;

}

int main(){
    int cp,sp;
    printf("Enter cost and selling price\n");
    scanf("%d %d",&cp,&sp);
    if(cp>sp)
        printf("Loss %.1f",percent(cp , sp));
    else if(cp<sp)
        printf("Profit %.1f",percent(cp , sp));
    else
         printf("No profit No loss"); 
    return 0;
}