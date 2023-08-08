#include<stdio.h>

int main()
{
    float basic,DA,HRA,MA,PF,Net,Gross;
    printf("Enter basic salary of employee = ");
    scanf("%f",&basic);
    
    DA = basic*10/100;
    HRA = basic*7.50/100;
    MA = 300;
    PF = basic*12.5/100;
    Gross = basic + DA + HRA + MA;
    Net = Gross - PF;
    
    printf("Basic salary = %0.2f \n DA = %0.2f \n HRA = %0.2f  \n MA = %0.2f",basic,DA,HRA,MA);
    printf("\n Gross salary = %0.2f",Gross);
    printf("\n Net salary = %0.2f",Net);
    
    return 0;
}
