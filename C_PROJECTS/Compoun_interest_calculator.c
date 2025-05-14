#include <stdio.h>
#include <math.h>

int main(){
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompouded = 0;
    double total = 0.0;

    printf("Compund Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the Interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate/100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times compounded per year (n)): ");
    scanf("%d", &timesCompouded);

    total = principal * pow(1 + rate / timesCompouded, timesCompouded * years);

    printf("After %d years, the total will be $%.2lf", years, total);

    return 0;
}
