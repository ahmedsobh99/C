#include <stdio.h> // Standard in/out lib
#include <stdlib.h> // Standard lib
#include <math.h> // Math lib

float a ,b ,c ,x1 ,x2 ; // Declaration of main variables
float root=0; // Declaration of Global variable from Discriminant function
int enter; // Declaration of choose variable

// ** Make 3 inputs / no outputs function to calculate the Discriminant **
void Discriminant(float A ,float B ,float C)
    {

        root =sqrt((B*B)-(4*A*C));
    }

// ** Make no inputs / no outputs function to calculate the roots **
void roots ()
    {
        printf(" A = ");
        scanf("%f",&a);
        printf(" B = ");
        scanf("%f",&b);
        printf(" C = ");
        scanf("%f",&c);
        Discriminant(a,b,c); // use Discriminant function by replace A,B,C var to a,b,c var
        x1=(-b-root)/(2*a); // Calculate the first root of equation
        x2=(-b+root)/(2*a); // Calculate the second root of equation
        printf(" X1 = %f\n",x1);
        printf(" X1 = %f\n",x2);
    }

// ** Make no inputs / no outputs function to calculate the sum of 3 numbers **
void sum()
    {
        printf(" Enter first  Number : ");
        scanf("%f",&a);
        printf(" Enter second Number : ");
        scanf("%f",&b);
        printf(" Enter third  Number : ");
        scanf("%f",&c);
        x1=a+b+c;
        printf(" Sum of the numbers U input is : %f \n",x1);

    }

// ** Make no inputs / no outputs function to calculate the sub of 3 numbers **
void sub()
    {
        printf(" Enter first  Number : ");
        scanf("%f",&a);
        printf(" Enter second Number : ");
        scanf("%f",&b);
        printf(" Enter third  Number : ");
        scanf("%f",&c);
        x1=(a-b)-c;
        printf(" Sub of the numbers U input is : %f \n",x1);

    }

// ** Make no inputs / no outputs function to calculate the multi of 3 numbers **
void multi()
    {
        printf(" Enter first  Number : ");
        scanf("%f",&a);
        printf(" Enter second Number : ");
        scanf("%f",&b);
        printf(" Enter third  Number : ");
        scanf("%f",&c);
        x1=a*b*c;
        printf(" Multi of the numbers U input is : %f \n",x1);

    }

// ** Make no inputs / no outputs function to calculate the division of 2 numbers **
void division()
    {
        printf(" Enter first  Number : ");
        scanf("%f",&a);
        printf(" Enter second Number : ");
        scanf("%f",&b);
        x1=a/b;
        printf(" Division of the numbers U input is : %f \n",x1);

    }


int main()
    {

            printf("***************************\n **Welcome..Calculator**\n***************************\n What Do U Need To Do? "); // print hello message
        prog: // starts of main loop
            // print application abilities
            printf("\n***************************\n 1 :Sum       2 :Sub\n 3 :Multi     4 :Division\n 5 :Roots     6 :Exit\n***************************\n Give Me Your Choose Number : ");
            // Choose what U need to do from previous message
            scanf("%i",&enter);
            // Analyze the number of choose to start program ** switch .. case **
            switch(enter)
                {
                    case 1:sum(); break; //goto Sum;
                    case 2:sub(); break; //goto Sub;
                    case 3:multi(); break; //goto Multi;
                    case 4:division(); break; //goto Division;
                    case 5:roots(); break; //goto Roots;
                    case 6:goto Exit; break;
                    default : printf(" Out of range... \n !Will Exit... \n "); goto Exit; break;

                }
                    //** for trying only ! **
                    /*
                    Sum:
                    Sub:
                    Multi:
                    Division:
                    Roots:
                        roots();
                    */



        goto prog; // ends of main loop
        Exit: // starts of exit " point to send the program to .. "
        return 0;


    }
