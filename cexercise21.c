/*conversion of units

     kms to miles
     inches to foot
     cms to inches
     pound to kgs
     inches to meters
     */
     
    #include<stdio.h>

    int main ( )
        {
            int choice;
            float value , result;

            printf(" 1. Unit conversion program\n");
            printf(" 2.Kilometers to miles\n") ;
            printf(" 3.Inches to feet\n");
            printf(" 4.Centimeters to inches\n");
            printf(" 5.Pounds to kilogram\n");
            printf(" 6.Inches to meters");

            printf("Enter your choice: ");
            scanf("%d" , &choice);

            printf("Enter the value to convert");
            scanf("%d" , &value);

            switch (choice)
            {
            case 1:
                result = value * 0.62131;  
                printf("Miles = %.2f" , result) ;
                break;
             case 2:
                result = value / 12 ;
                printf("Feet = %.2f" , result);

             case 3:
             result = value * 0.393701;
             printf("Inches = %.2f" , result);

             case 4:
             result = value * 0.453592;
            printf("Kilograms = %.2f", result);
            break;

        case 5:
            result = value * 0.0254;
            printf("Meters = %.4f", result);
            break;

        default:
            printf("Invalid choice!");
         }

            


          return 0;
    }
