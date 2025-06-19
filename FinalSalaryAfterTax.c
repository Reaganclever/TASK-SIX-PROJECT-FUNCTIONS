#include <stdio.h>
#include "TaskSixProject.h"

void finalSalaryAfterTax(){
    double originalSalary = 12000550 ,  taxRate = 0.23;
    double netSalary = originalSalary - (originalSalary * taxRate);
    printf("\n\e[1mNO.2\e[0m:  THE NEWEST FINAL SALARY AFTER TAX IS %.2lf\n\n" , netSalary);
}
