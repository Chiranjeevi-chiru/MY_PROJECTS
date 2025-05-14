#include <stdio.h>
#include <math.h>

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to pounds\n");
    printf("2. pounds to Kilograms\n");
    printf("Enter your choice(1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f Kilograms is equal to %.2f Pounds\n", kilograms, pounds);

    }
    else if(choice == 2){
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds is equal to %.2f Kilograms\n", pounds, kilograms);

    }
    else{
        printf("Invalid Choice! Please enter 1 or 2\n");
    }


    return 0;
}
