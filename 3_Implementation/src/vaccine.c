/**
 * @file vaccine.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <vaccine.h>
int vaccine_sold(int operand1,int operand2)
{
    return operand1+operand2;
}

int vaccine_stock(int operand1,int operand2)
{
    if(operand1 == operand2)
        {
            printf("in stock");
        }
    else
        {
            printf("not in stock");

        }
}
int main()
{
    printf("Vaccine Sold: ");
    printf("%d", vaccine_sold(11,11));
    return 0;

}
