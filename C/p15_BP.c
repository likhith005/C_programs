//Conditional Statement using if...else.

#include <stdio.h>

/*
systolic<= 120 AND Diastolic <=80--› NORMAL
Systolic in(120..139) OR Diastolic in (80,89) --› PreHypertension
Systolic in(140..159) OR Diastolic in (90,99) --› Hypertension Stage 1
Systolic in(160..180) OR Diastolic in (100,110) --› Hypertension Stage 2
Systolic over 180 OR Diastolic OVER 110 --› CRISIS -Call 911
*/

void CheckHighBloodPressure (int Systolic, int Diastolic)
{
    printf ("Checking readings for %d / %d\n",Systolic,Diastolic);
    if (Systolic <= 120 && Diastolic <= 80)
    {
        //Normal
        printf("Your Blood Pressure is NORMAL\n");
        printf("Congratulations! You're a healthy person! \n");
    }
    else if ((Systolic >= 120 && Systolic <= 139) || (Diastolic >= 80 && Diastolic <= 89))
    {
        //PreHypertension
        printf ("You're considered Hypertension\n") ;
        printf ("Consult with a doctor to see how you can bring it down!\n");
    }
    else if ((Systolic >= 140 && Systolic <= 159) || (Diastolic >= 90 && Diastolic <= 99))
    {
        //Stage 1
        printf ("You're considered Hypertension with Stage 1\n") ;
        printf ("Consult with a doctor to see how you can bring it down! as soon as possible! \n");
    }
    else if ((Systolic >= 160 && Systolic <= 180) || (Diastolic >= 100 && Diastolic <= 110))
    {
        //Stage 2
        printf ("You're considered Hypertension with Stage 2\n") ;
        printf ("This is very degearous.Make sure Consult with a doctor to see how you can bring it down! as soon as possible! \n");
    }
    else if (Systolic > 180 || Diastolic > 110)
    {
        //Crises
        printf ("You need to go emergency.Please dail 991 right away!\n") ;
        printf ("This is life threatnening situation\n");
    }
    else 
    {
        //Unusual BP readings, go see a doctor now!
        printf ("You BP readings are unusual\n") ;
        printf("If you're still alive and breathing, go see a doctor! \n");
    }


}
void main()
{
    CheckHighBloodPressure(120, 80);
    CheckHighBloodPressure(129, 88);
    CheckHighBloodPressure(139, 98) ;
    CheckHighBloodPressure(149, 108);
    CheckHighBloodPressure(169, 118);
}