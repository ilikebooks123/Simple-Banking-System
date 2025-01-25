#include <stdio.h>
#include <stdbool.h>

int main(){

    bool run = true;
    int choice;
    int return_value;
    int balance = 0;
    int withdrawal;
    int deposite;

    while (run){
        printf("\n------------------------------------\n");
        printf("      Welcome to the simple bank\n");
        printf("------------------------------------\n");
        printf("Please select an operation:\n1. Check Balance\n2. Deposite\n3. Withdraw\n4. Exit\nEnter your choice(1-4):");
        
        return_value = scanf ("%d", &choice);
        
        if (return_value!=1){
            printf("you have entered a non-integer character please enter an integer bewteen 1 and 4\n");
        }
        
        else if(choice == 1){
            printf("Your current balance is:%d\n", balance);
        }

        else if (choice == 2 ){
            printf("Enter Deposit amount:\n");
            scanf("%d", &deposite);
            balance = balance + deposite;
            printf("Depost successful!\n");
            printf("Your new balance is:%d\n", balance);
        }
        
        else if (choice == 3){
            printf("enter withdrawal amount:\n");
            scanf("%d", &withdrawal);
            
            if (balance<withdrawal){
                printf("Insufficient balance. Withdrawal failed.\n");
            }

            else if(balance == withdrawal || balance>withdrawal){
                balance = balance - withdrawal;
                printf("Withdrawal successful!\n");
                printf("Your new balance is:%d\n", balance);
            }
        }
        
        else if (choice == 4){
            printf("Thank you for using the Simple Bank System. Goodbye!\n");
            run = false;
        }

        else{
            printf("You have entered an integer greater then 4 or less then 1 please enter a variable between one and four\n");
        }
        
        while (getchar() != '\n');
        
        

    }

    return 0;

}