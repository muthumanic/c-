#include<stdio.h>
#include<conio.h>
int main(){
           int f1,f2,rem,i;
           printf("   Give the First num for the Range :   \n");
           scanf("%d",&f1);
           printf("   Give the Final num for the Range :   \n");
           scanf("%d",&f2);
           printf("\n The Even num between %d and %d are ",f1,f2); 
           for(i=f1; i<=f2; ++i){
               rem = i % 2;
               if(rem == 0)
               printf("\n  %d",i);
           }
    return 0; 
    } 
