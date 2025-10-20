#include <stdio.h>
#include <math.h>
#include "mylib.h"

int reverseDigits(int n){
    int rev = 0;
    while(n > 0){
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}

int isArmstrong(int num){
    int temp = num, rem, digits = 0;
    int sum = 0;

    while(temp != 0){
        digits++;
        temp /= 10;
    }

    temp = num;
    while(temp != 0){
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int isAdams(int num){
    int sq = num * num;
    int rev = reverseDigits(num);
    int sqrev = rev * rev;

    if(reverseDigits(sqrev) == sq)
        return 1;
    else
        return 0;
}

int isPrime(int num){
    if(num < 2) return 0;
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int isPrimePalindrome(int num){
    if(isPrime(num) && num == reverseDigits(num))
        return 1;
    else
        return 0;
}
