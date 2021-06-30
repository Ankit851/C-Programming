/*
        Author : Ankit Mahajan
        Purpose : Units and Conversions
        Date : 30th June 2021
*/
#include<stdio.h>
int main()
{   int choice,mass,kgs;
    float distance,length,miles,foot,len,Inch,leng,meters;
    printf("Welcome to the Program of Units and Conversions !!!\n");
    printf("Enter your choice ");
    scanf("%d",&choice);
    switch (choice)
    {   
        // Kilometres to Miles Converter
        case 1:
        printf("Enter the distance in kilometres :- ");
        scanf("%f", &distance);
        miles = distance * 0.6214;
        printf("The distance in miles is %f ", miles);
        break;
        // Inches to foot Converter
        case 2:
        printf("Enter the length in inches ");
        scanf("%f", &length);
        foot = length/12;
        printf("The length in foot is %f",foot);
        break;
        // Centimeters to Inches Converter
        case 3:
        printf("Enter the length in centimetres ");
        scanf("%f",&len);
        Inch = len/2.54;
        printf("The Length in Inches is %f ",Inch);
        break;
        // Pounds to kilograms Converter
        case 4:
        printf("Enter the mass in pounds ");
        scanf("%d", &mass);
        kgs = mass/2.205;
        printf("The mass in kilograms is %d",kgs);
        break;
        // Inches to Meter Converter
        case 5:
        printf("Enter the length in inches ");
        scanf("%f", &leng);
        meters = leng/39.37;
        printf("The length in meters is %f",meters);
        break;
        // Default case if user's choice doesn't match
        default :
        printf("Invalid Choice");


    }
}