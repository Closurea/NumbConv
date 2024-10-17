#include<stdio.h>
#include<math.h>

unsigned long long int binToDec(unsigned long long int);
unsigned long long int decToBin(unsigned long long int);

int
main()
{
    while(1)
    {
        unsigned long long int input;
        printf("\nPlease Choose one of the options below:\n");
        printf("1)Binary to Decimal | 2) Decimal to Binary | 3) EXIT\n");
        scanf("%llu", &input);

        if(input == 3)
            break;

        switch(input)
        {
            case 1:
                printf("\nPlease enter a binary number : ");
                scanf("%llu", &input);
                printf("\nDecimal format of %llu is : %llu\n", input, binToDec(input));
                break;
            case 2:
                printf("\nPlease enter a decimal number : ");
                scanf("%llu", &input);
                printf("\nBinary format of %llu is : %llu\n", input, decToBin(input));
                break;
            default:
                printf("\nWrong input!\n");
                break;
        }
    }
}

unsigned long long int binToDec(unsigned long long int input)
{
    unsigned long long int result = 0, counter = 0;
    while(input > 0)
    {
        unsigned long long int tmp;
        tmp = input % 10;
        result += tmp * pow(2, counter);
        input /= 10;
        counter++;
    }
    return result;
}

unsigned long long int decToBin(unsigned long long int input)
{
    unsigned long long int result = 0, counter = 1;
    while(input > 0)
    {
        unsigned long long int tmp;
        tmp = input % 2;
        result += tmp * counter;
        input /= 2;
        counter *= 10;
    }
    return result;
}
