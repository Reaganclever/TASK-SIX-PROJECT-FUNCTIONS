#include <stdio.h>
#include "TaskSixProject.h"
#include <math.h>

void calculateMonthlyLoanPayment() {
    float P = 50002000;       // Loan amount
    float annualR = 0.05;          // 5% annual interest
    int years = 9;                    // Loan period in years

    float r = annualR/ 12; // Monthly rate
    int n = years * 12;      // Total number of payments

    // Monthly payment formula
    float numerator = P * r * pow(1 + r ,n);
    float denominator = pow(1 + r , n) - 1;
    float monthlyPayment = numerator / denominator;

    printf("\n\e[1mNO.5\e[0m: NEW MONTHLY LOAN PAYMENT: UGX %.2f\n", monthlyPayment);
}
