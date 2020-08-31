#include "header_3d.h"
#include <math.h>
//definition of all 3D object functions
float sa_of_cylinder(float r, float h){return (2*M_PI*(pow(r, 2)))+(2*M_PI*r*h);}
float sa_of_sphere(float r){return 4*M_PI*(pow(r, 2));}
float sa_of_cone(float r, float s){return M_PI*r*s+M_PI*pow(r, 2);}
float sa_of_square_based_pyramid(float b, float s){return 2*b*s+pow(b, 2);}
float sa_of_rectangular_prism(float l, float w, float h){return 2*(w*h+l*w+l*h);}
float sa_of_triangular_prism(float a, float b, float c, float h, float l){return a*h+b*h+c*h+b*l;}
float volume_of_cylinder(float r, float h){return M_PI*(pow(r, 2))*h;}
float volume_of_sphere(float r){return 4*M_PI*(pow(r, 3))/3;}
float volume_of_cone(float r, float h){return (M_PI*(pow(r, 2))*h)/3;}
float volume_of_square_based_pyramid(float b, float h){return((pow(b, 2))*h)/3;}
float volume_of_rectangular_prism(float l, float w, float h){return l*w*h;}
float volume_of_triangular_prism(float b, float l, float h){return (b*l*h)/2;}
