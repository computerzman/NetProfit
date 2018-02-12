#include <stdio.h>
#include <stdlib.h>
/*
 * @author      Mohamed Hassan Elmetwaly <mhe.developer@gmail.com>
 * @version     1.0
 * @Date        11-2-2018
 */

 // Global Variables
float totalRevenue = 0.0;
float totalExpenses = 0.0;
float dailyRevenue = 0.0;
float dailyExpenses = 0.0;

float dialyAvgRevenue = 0.0;
float dialyAvgExpenses = 0.0;

int totalPeroid = 0;

int main()
{

    printf("Please Enter The Total Peroid In Days : \n");
    scanf("%d", &totalPeroid);
    doOperation(); // calling Do Operation Function
    displayResult(); // calling Display Result Function
    return 0;
}

// Void function (No Input No Return), it take daily Revenue and Expenses and updates the global variables
void doOperation(){
    for(int i = 1 ; i <= totalPeroid ; i++)
    {
        printf("Please Enter Day (%d) Revenue: \n", i);
        scanf("%f", &dailyRevenue);
        printf("Please Enter Day (%d) Expenses: \n", i);
        scanf("%f", &dailyExpenses);

        totalRevenue = totalRevenue + dailyRevenue;
        totalExpenses = totalExpenses + dailyExpenses;
    }
}

// void function (No Input No Return), display results from Global Variables
void displayResult(){
    printf("\nThe Average Profits in (%d) Days is %f EGP \n", totalPeroid, totalRevenue / totalPeroid);
    printf("The Average Expenses in (%d) Days is %f EGP \n", totalPeroid, totalExpenses / totalPeroid);
    printf("Total Revenue in (%d) Days is: %f  EGP \n", totalPeroid, totalRevenue);
    printf("Total Expenses in (%d) Days is: %f  EGP \n", totalPeroid, totalExpenses);
    printf("-------------------------------------------------\n");
    printf("Total Net Profit in (%d) Days is: %f  EGP \n", totalPeroid, totalRevenue - totalExpenses);
}
