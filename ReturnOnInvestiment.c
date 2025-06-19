#include <stdio.h>
#include "TaskSixProject.h"

double calculateTheReturnOnInvestiment(double investiment  , double profit){

double ROI = (investiment/profit) * 100;
printf("\n\n\e[1mNO.4\e[0m:  THE  NEWest RETURN ON INVESTIMENT IS %.3lf\n" , ROI);

return ROI;
}


