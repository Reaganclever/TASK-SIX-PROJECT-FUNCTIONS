#include <stdio.h>
#include "TaskSixProject.h"

void finalSalaryAfterTax(){
    double originalSalary = 5000000 ,  taxRate = 0.15;
    double netSalary = originalSalary - (originalSalary * taxRate);
    printf("\n\e[1mNO.2\e[0m:  THE FINAL SALARY AFTER TAX IS %.2lf\n\n" , netSalary);
}
