#include <stdio.h>
#include "TaskSixProject.h"

double CalculateSalesPrice(double originalPrice , double discountPercentage){
    double salesPrice = originalPrice - (originalPrice * discountPercentage);

    printf("THE TOTAL SALES PRICE IS %.2lf\n" , salesPrice);

    return salesPrice;
}
