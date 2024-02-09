#include <stdio.h>

main() {
    
    int a=10, b=20, c=30, d=40;
    
    printf("enter the value...");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    if(a>b){
        
        if(a>c){
            if(a>d){
                printf("a is max");
            }else{
                printf("d is max");
            }
         }else{
             if (c>d){
                 printf("c is max");
             }else{
                 printf("d is max");
             }
        }
    }else{
        if(b>c){
            if(b>d){
                printf("b is max");
            }else{
                printf("d is max");
            }
        }else{
            if (c>d){
                 printf("c is max");
             }else{
                 printf("d is max");
             }
        }
    }

    return 0;
}