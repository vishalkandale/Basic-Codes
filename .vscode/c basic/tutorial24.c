#include <stdio.h>

int main()
{

    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometers =0.0254;
    float first, second;

    while (1)
    {
        printf("enter the input c'haracter.q to quit\n     1. kms to miles\n     2. inches to foot")

        scanf(" %c", &input);
    //     printf("the character is '%c'", input);
        switch (input)
        {
        case 'q':
         printf("quitting the program...");
         goto end;
         break;

         case'1':
         printf("enter quantity in terms of first unit\n");
         scanf("%f", &first);
         second = first * kmstomiles;
         printf("%.2f kms is equal to %.2f miles\n\n\n", first, second);
         break;

         case '2':
         printf("enter quantity in terms of first unit\n");
         scanf("%f",&first);
         second = first * inchestofoot;
         printf("%f inches is equal to %f foot\n", first, second);
         break;

         case '3':
         printf("enter quntity in terms of first unit\n");
         scanf("%f", &first);
         second = first * cmstoinches;
         printf("%f cms is equal to %f inches\n",first, second);
         break;

         case '4':
         printf("enter quantity in terms of first unit\n");
         scanf("%f", &first);
         second = first * poundtokgs;
         prinft("%f pounds is equal to %f meters \n", first, second);
         break;

         case '5':
         printf("enter quantity in terms of firet unit\n");
         scanf("%f", &first);
         second = first * inchestometers;
         printf("%f inches is equal to %f meters \n", first, second);
         break;


       default:
       printf("in defult now");
          break;
       }
    }
    end:

        return 0;
}