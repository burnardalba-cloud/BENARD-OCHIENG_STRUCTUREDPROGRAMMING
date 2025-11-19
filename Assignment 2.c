#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, surface_area;
    const float PI = 3.142;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    if (radius >= 0){
        surface_area =4*PI*radius*radius;
        printf("The surface area of the sphere with radius %.2f is: %.2f\\n",radius, surface_area);
    }else{
        printf("Please enter a valid,non-negative radius.\\n");
    }

      return 0;
}
