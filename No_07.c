#include<stdio.h>

char name[5][20] = {"John", "Mary", "Alex", "Tina", "Bob"};
char acType[5] = {'S', 'F', 'S', 'F', 'S'};
int balance[5] = {55000, 120000, 18000, 60000, 25000};

void interest(int balance_amount, char ch) { 
    float interest_amount, total_amount;
    
    if(ch == 'S' || ch == 's') { 
        if(balance_amount >= 50000) {
            interest_amount = balance_amount * 5.0 / 100.0;  
            total_amount = balance_amount + interest_amount;  
        }
        else if(balance_amount >= 20000) {
            interest_amount = balance_amount * 4.0 / 100.0;   
            total_amount = balance_amount + interest_amount;
        }
        else {
            interest_amount = balance_amount * 3.0 / 100.0;   
            total_amount = balance_amount + interest_amount;
        }
    }
    else {  
        if(balance_amount >= 100000) {
            interest_amount = balance_amount * 7.0 / 100.0;   
            total_amount = balance_amount + interest_amount;
        }
        else if(balance_amount >= 50000) {
            interest_amount = balance_amount * 6.0 / 100.0;   
            total_amount = balance_amount + interest_amount;
        }
        else {
            interest_amount = balance_amount * 5.0 / 100.0;   
            total_amount = balance_amount + interest_amount;
        }
    }
    
    printf("\nInterest      : %.2f", interest_amount);
    printf("\nTotal Amount  : %.2f\n", total_amount);
}

int main() {
    int i;
    for(i = 0; i < 5; i++) {
        printf("\n---- Customer %s ----\n", name[i]);
        printf("Account Type : %c", acType[i]);
        printf("\nBalance      : %d", balance[i]);
        interest(balance[i], acType[i]);
        printf("----------------------------\n");
    }
    return 0;
}
