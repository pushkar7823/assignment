#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"


int main(){
    int choice, num;

    do{
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome\n");
        printf("4. Test Array Library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5){
            printf("Exiting program...\n");
            break;
        }

        if(choice == 4){
            int arr[5] = {3,1,4,1,5};
            int n = 5;
            displayArray(arr,n);
            printf("Max Index: %d\n", findMaxIndex(arr,n));
            printf("Min Index: %d\n", findMinIndex(arr,n));
            printf("Average: %.2f\n", findAverage(arr,n));
            reverseArray(arr,n);
            printf("Reversed array: ");
            displayArray(arr,n);
            sortArray(arr,n);
            printf("Sorted array: ");
            displayArray(arr,n);
            int pos = linearSearch(arr,n,4);
            if(pos != -1)
                printf("Found 4 at index %d\n", pos);
            else
                printf("4 not found\n");
        } 
        else {
            printf("Enter a number: ");
            scanf("%d", &num);
            switch(choice){
                case 1:
                    if(isArmstrong(num))
                        printf("%d is Armstrong number.\n", num);
                    else
                        printf("%d is NOT Armstrong number.\n", num);
                    break;
                case 2:
                    if(isAdams(num))
                        printf("%d is Adams number.\n", num);
                    else
                        printf("%d is NOT Adams number.\n", num);
                    break;
                case 3:
                    if(isPrimePalindrome(num))
                        printf("%d is Prime Palindrome number.\n", num);
                    else
                        printf("%d is NOT Prime Palindrome number.\n", num);
                    break;
                default:
                    printf("Invalid choice!\n");
            }
        }
    }while(choice != 5);

    return 0;
}
