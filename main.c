
#include <stdio.h>
#include <stdlib.h>

void openGoogleMapsLink(const char *link) {
    char command[256];
#ifdef _WIN32
    sprintf(command, "start %s", link);  // For Windows
#else
    sprintf(command, "xdg-open %s", link);  // For Linux and similar platforms
#endif
    system(command);
}

int main() {
    printf("Welcome to BAGUIO Parking Lot Finder!\n");
    printf("Choose a parking lot:\n");
    printf("1. SM Baguio Parking Lot\n");
    printf("2. Burnham Pay Parking\n");
    printf("3. Baguio Athletic Bowl Pay Parking\n");

    int userChoice;
    if (scanf("%d", &userChoice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (userChoice) {
        case 1:
            openGoogleMapsLink("https://www.google.com/maps/dir//CH5X%2BGH2,+Rambakan+Dr,+Baguio,+Benguet/@16.4087539,120.5164915,12z/data=!3m1!4b1!4m8!4m7!1m0!1m5!1m1!1s0x3391a14256dea1b3:0x3cc9a90af3cbde59!2m2!1d120.5988933!2d16.40877?entry=ttu");
            break;
        case 2:
            openGoogleMapsLink("https://www.google.com/maps?opi=89978449&rlz=1C1CHBF_enPH991PH991&sca_esv=560909571&lqi=ChJwYXJraW5nIGxvdCBiYWd1aW9I-Zuc8KOugIAIWiYQABABGAAYARgCIhJwYXJraW5nIGxvdCBiYWd1aW8qBggDEAAQAZIBFHB1YmxpY19wYXJraW5nX3SzwspUFr8ww7O_twcC96nDIWEAIiEnBhcmtpbmcgbG90IGJhZ3Vpbw&vet=12ahUKEwiziJCfpIGBAxU34jgGHYjGBbMQ8UF6BAgaED8..i&lei=25XtZPOuHLfE4-EPiI2XmAs&cs=0&um=1&ie=UTF-8&fb=1&gl=ph&sa=X&geocode=KZ0C7dtpoZEzMTpCSFiwsdYv&daddr=CH5W%2BHJV,+Camp+John+Hay,+Baguio,+Benguet");
            break;
        case 3:
            openGoogleMapsLink("https://www.google.com/maps/dir//CH5W%2BG62+Baguio+Athletic+Bowl+Pay+Parking,+Baguio,+Benguet/data=!4m6!4m5!1m1!4e2!1m2!1m1!1s0x3391a107391297bf:0x807faf965b752811?sa=X&ved=2ahUKEwi6pfuipIGBAxXfzjgGHXLQCuUQ48ADegQIAxAA&ved=2ahUKEwi6pfuipIGBAxXfzjgGHXLQCuUQ48ADegQIDhAE");
            break;
        default:
            printf("Invalid choice. Please enter a valid number.\n");
            break;
    }

    return 0;
}
