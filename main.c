#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float area(rectangle), diagonal(rectangle), perimeter(rectangle);


typedef struct {
    float x;
    float y;
} point;

typedef struct {
    point up_left;
    point low_right;
} rectangle;


int main(){
    rectangle r;

    do
    {
    printf("\nType X upper left point of the rectangle: ");
    scanf("%f", &r.up_left.x);

    printf("Type Y upper left point of the rectangle: ");
    scanf("%f", &r.up_left.y);
    
    printf("\nType X lower right point of the rectangle: ");
    scanf("%f", &r.low_right.x);
    
    printf("Type Y lower right point of the rectangle: ");
    scanf("%f", &r.low_right.y);
    } while ((r.up_left.x > r.low_right.x) || (r.up_left.y < r.low_right.y));
    
    printf("\nArea: %.2f", area(r));
    printf("\nDiagonal: %.2f", diagonal(r));
    printf("\nPerimeter: %.2f", perimeter(r));
    
    return 0;
}


float area(rectangle r){
    float a;

    a = (r.low_right.x - r.up_left.x) * (r.up_left.y - r.low_right.y);
    return a; 
}


float diagonal(rectangle r){
    float d;

    d = sqrt(pow((r.low_right.x - r.up_left.x), 2) + pow((r.up_left.y - r.low_right.y),2));
    return d; 
}


float perimeter(rectangle r){
    float p;

    p = (r.low_right.x - r.up_left.x) * 2 + (r.up_left.y - r.low_right.y) * 2;
    return p; 
}