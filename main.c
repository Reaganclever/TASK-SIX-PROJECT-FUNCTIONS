#include <stdio.h>
#include <stdlib.h>
#include "TaskSixProject.h"

int main()
{
    //NO 1
    double DP , OP;
    printf("\e[1mNO.1\e[0m\n");
    printf("ENTER THE NEWEST DISCOUNT PERCENTAGE: "); scanf("%lf" , &DP);
    printf("ENTER THE NEWEST ORIGINAL PRICE: "); scanf("%lf" , &OP);
    printf("-------------------------------\n");
    CalculateSalesPrice(OP , DP);

    //NO 2

     finalSalaryAfterTax();

     //NO 3
     grossProfit();

     //NO 4
     calculateTheReturnOnInvestiment(1300000 , 1500000);

     //NO 5
     calculateMonthlyLoanPayment();

     //NO 6
     calculationOfSimpleInterest();

     //NO 7
     calculationOfTheBreakEvenPoint();

     //NO 8
     double I , R , T;
    printf("\n\e[1mNO.8\e[0m");
     printf("\nINVESTIMENT AMOUNT: "); scanf("%lf" , &I);
     printf("ANNUAL INTEREST RATE: "); scanf("%lf" , &R);
     printf("TIME: "); scanf("%lf" , &T);
     printf("----------------------\n");
     calculationOfCompoundInterest(I , T ,  R);

     //NO 9
     profitGainCalculation(30000000 , 9000000);

     //NO 10
     calculationOfAnnualDepreciation();

    //NO 11
    printDiscountedPrice(20000 , 0.4);

    //NO 12
    printTaxAmount(23000 , 0.24);

    //NO 13
    printSalaryWithBonus(500000, 0.15);

    //NO 14
    printprofitOrLoss(20000 , 40000);

    //NO 15
     double DP1 , ORG;
     printf("\n\e[1mNO.15\e[0m");
     printf("\nORIGINAL PRICE: "); scanf("%lf" , &ORG);
     printf("DISCOUNT PERCENTAGE: "); scanf("%lf" , &DP1);

     printPriceDiscountAbove20(DP1 , ORG);

     //NO 16
     printYearToDoubleInvestiment(0.5);

     //NO 17
     printTotalExpenses(5, 250000 );

     // NO 18
     double SR;
     printf("\n\e[1mNO 18\e[0m");
     printf("\nENTER THE SALARY: "); scanf("%lf" , &SR);
     printf("------------------\n");
     printTaxPercentage(SR);

     //NO 19
     printOverDueFees();

     //NO 20
     printMaximumDiscount();







    return 0;
}
