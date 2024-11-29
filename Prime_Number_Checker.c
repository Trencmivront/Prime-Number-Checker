#include <stdio.h>

int main(){
    
    int num, numnew = 0, remain, numcopy;
    
    printf("Please enter the number you want to check;\n");
    
    /*İnput number*/
    scanf("%d", &num);
    
    /*Securing the entered number.*/
    numcopy = num;
    
    while (num > 0){
        
        /*Rolling num2 one digit left.*/
        numnew *= 10;
        
        /*Taking first digit of given number as remain.*/
        remain = num % 10;
        
        /*Substraction remain from num so we get 0 at the rightmost digit of num.*/
        num -= remain;
        
        /*To get rid of the 0 digit we divide num by 10*/
        num /= 10;
        
        /*Adding remain to the num2*/
        numnew += remain;
        
    }
    
    /*If new number quals to old one, it is palindrome.*/
    if(numnew == numcopy)
    printf("\nThe number is a palindrome number.");
    
    /*If they are different, then it is not.*/
    else printf("\nThe number is not a palindrome number");
    
    return 0;
    
}
