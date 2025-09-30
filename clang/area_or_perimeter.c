#include <stdlib.h>
#include <stdio.h>

int area_or_perimeter (int l, int w)
{
    int polygon;

    if (l == w) 
        polygon = l * w;
    else
        polygon = (l + w) * 2;
    return polygon;
}

// int main(void)
// {
//     int first_numb;
//     int second_numb;

//     printf("Insert first number: ");
//     scanf("%d", &first_numb);
//     printf("Insert second number: ");
//     scanf("%d", &second_numb);
//     printf("Area or Perimeter: %d\n", area_or_perimeter(first_numb,second_numb));
//     return 0;
// }