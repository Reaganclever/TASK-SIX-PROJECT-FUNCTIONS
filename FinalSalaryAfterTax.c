#include <stdio.h>
#include "TaskSixProject.h"

void finalSalaryAfterTax(){
    double originalSalary = 5235550 ,  taxRate = 0.17;
    double netSalary = originalSalary - (originalSalary * taxRate);
    printf("\n\e[1mNO.2\e[0m:  THE NEW FINAL SALARY AFTER TAX IS %.2lf\n\n" , netSalary);
}
