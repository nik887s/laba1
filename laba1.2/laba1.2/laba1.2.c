#include<stdio.h>
int main()
{
    float x, y, circle;
    printf("input x,y for unite circle:\n");
    if (scanf_s("%f %f", &x, &y) == 2)// сканирует x.y и выводит ошибку если ввести неверный символ (например букву)
    {
        circle = x * x + y * y;//формула единичной окружности

        if (circle == 1) // если =1 то можно  
        {
            printf("through the point (x, y) one can draw a circle of unit radius centered at the origin");
        }
        else
        {
            printf("through the point (x, y) one can't draw a circle of unit radius centered at the origin");//в противном случае нельзя
        }
    }
    else
    {
        printf("uncorrect input ");
    }
    return 0;


}