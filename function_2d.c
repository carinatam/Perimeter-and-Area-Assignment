#include "header_2d.h"
#include <math.h>
//definition of 2D object functions
float perimeter_of_rectangle(float l, float w){return 2*l+2*w;}
float perimeter_of_parallelogram(float b, float c){return 2*(b+c);}
float perimeter_of_triangle(float a, float b, float c){return a+b+c;}
float perimeter_of_trapezoid(float a, float b, float c, float d){return a+b+c+d;}
float perimeter_of_circle(float r){return 2*M_PI*r;}
float area_of_rectangle(float l, float w){return l*w;}
float area_of_parallelogram(float b, float h){return b*h;}
float area_of_triangle(float b, float h){return (b*h)/2;}
float area_of_trapezoid(float a, float b, float h){return ((a+b)*h)/2;}
float area_of_circle(float r){return M_PI*(pow(r, 2));}
