#include<stdio.h>
#include<string.h>

struct my_structure
{
    char brand[50];
    char model[50];
    char color[50];
    char price[50];
    int year;
}car;
int main()
{
    printf("Input the brand of a car:\n");
    gets(car.brand);

    printf("Input the model of a car:\n");
    gets(car.model);

    printf("Input the color of a car:\n");
    gets(car.color);

    printf("Input the price of a car:\n");
    gets(car.price);

    printf("Input the release year of a car:\n");
    scanf("%i",&car.year);

    printf("Brand of the car:%s\n",car.brand);
    printf("Model of the car:%s\n",car.model);
    printf("Color of the car:%s\n",car.color);
    printf("Price of the car:%s\n",car.price);
    printf("Release Year of the car:%i\n",car.year);
return 0;
}
