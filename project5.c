#include <stdio.h>

main() {
    
    int phy, chem, bio, math, com ;
    
    int pr;
    
    printf("enter the percentage...");
    scanf("%d",&pr);
    
    if(pr > 100){
       printf("invalid number ! try again...");
    }else if (pr >= 90){
        printf("congrets...A grade :)");
    }else if (pr >= 80){
        printf("congrets...B grade :)");
    }else if (pr >= 70){
        printf("congrets...C grade :)");
    }else if (pr >= 60){
        printf("D grade :)");
    }else if (pr >= 50){
        printf("E grade :)");
    }else if (pr >= 40){
        printf("F grade :)");
    }else{
        printf("fail...");
    }
    
    return 0;
}