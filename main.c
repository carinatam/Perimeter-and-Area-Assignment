#include "header_2d.h"
#include "header_3d.h"
#include <stdio.h> //get all header files for functions
main(){
int choice_2d3d, choice_2d, shape_2d, choice_3d, shape_3d;
float length, width, base, height, side_a, side_b, side_c, side_d, side_s, radius, answer; //declare all variables
printf("Enter 1 if you want to calculate perimeter and area and 2 if you want to calculate for surface area or volume: ");
scanf("%d", &choice_2d3d);
if(choice_2d3d==1){ //2D object
    printf("Enter 1 for perimeter and 2 for area: ");
    scanf("%d", &choice_2d);
    if(choice_2d==1){ //perimeter of 2D object
        printf("Enter 1 for Rectangle, 2 for Parallelogram, 3 for Triangle, 4 for Trapezoid, and 5 for Circle: ");
        scanf("%d", &shape_2d);
        if(shape_2d==1){ //rectangle
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter width: ");
            scanf("%f", &width);
            answer=perimeter_of_rectangle(length, width);
            printf("The perimeter of the rectangle is %.2f", answer);
        }
        else if(shape_2d==2){ //parallelogram
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter side length: ");
            scanf("%f", &side_c);
            answer=perimeter_of_parallelogram(base, side_c);
            printf("The perimeter of the parallelogram is %.2f", answer);
        }
        else if(shape_2d==3){ //triangle
            printf("Enter side 1: ");
            scanf("%f", &side_a);
            printf("Enter side 2: ");
            scanf("%f", &side_b);
            printf("Enter side 3: ");
            scanf("%f", &side_c);
            answer=perimeter_of_triangle(side_a, side_b, side_c);
            printf("The perimeter of the triangle is %.2f", answer);
        }
        else if(shape_2d==4){ //trapezoid
            printf("Enter side 1: ");
            scanf("%f", &side_a);
            printf("Enter side 2: ");
            scanf("%f", &side_b);
            printf("Enter side 3: ");
            scanf("%f", &side_c);
            printf("Enter side 4: ");
            scanf("%f", &side_d);
            answer=perimeter_of_trapezoid(side_a, side_b, side_c, side_d);
            printf("The perimeter of the trapezoid is %.2f", answer);
        }
        else if(shape_2d==5){ //circle
            printf("Enter the radius: ");
            scanf("%f", &radius);
            answer=perimeter_of_circle(radius);
            printf("The perimeter of the circle is %.2f", answer);
        }
    }
    else{ //area of 2D object
        printf("Enter 1 for Rectangle, 2 for Parallelogram, 3 for Triangle, 4 for Trapezoid, and 5 for Circle: ");
        scanf("%d", &shape_2d);
        if(shape_2d==1){ //rectangle
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter width: ");
            scanf("%f", &width);
            answer=area_of_rectangle(length, width);
            printf("The area of the rectangle is %.2f", answer);
        }
        else if(shape_2d==2){ //parallelogram
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=area_of_parallelogram(base, height);
            printf("The area of the parallelogram is %.2f", answer);
        }
        else if(shape_2d==3){ //triangle
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=area_of_triangle(base, height);
            printf("The area of the triangle is %.2f", answer);
        }
        else if(shape_2d==4){ //trapezoid
            printf("Enter side 1: ");
            scanf("%f", &side_a);
            printf("Enter side 2: ");
            scanf("%f", &side_b);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=area_of_trapezoid(side_a, side_b, height);
            printf("The area of the triangle is %.2f", answer);
        }
        else if(shape_2d==5){ //circle
            printf("Enter the radius: ");
            scanf("%f", &radius);
            answer=area_of_circle(radius);
            printf("The area of the circle is %.2f", answer);
        }
    }
}
else{ //surface area and volume
    printf("Enter 1 for surface area and 2 for volume: ");
    scanf("%d", &choice_3d);
    if(choice_3d==1){//surface area of 3D object
        printf("Enter 1 for cylinder, 2 for sphere, 3 for cone, 4 for square-based pyramid, 5 for rectangular prism, and 6 for triangular prism: ");
        scanf("%d", &shape_3d);
        if(shape_3d==1){ //cylinder
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=sa_of_cylinder(radius, height);
            printf("The surface area of the cylinder is %.2f", answer);
        }
        else if(shape_3d==2){ //sphere
            printf("Enter radius: ");
            scanf("%f", &radius);
            answer=sa_of_sphere(radius);
            printf("The surface area of the sphere is %.2f", answer);
        }
        else if(shape_3d==3){ //cone
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Enter length of slant: ");
            scanf("%f", &side_s);
            answer=sa_of_cone(radius, side_s);
            printf("The surface area of the cone is %.2f", answer);
        }
        else if(shape_3d==4){ //square-based pyramid
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter length of slant: ");
            scanf("%f", &side_s);
            answer=sa_of_square_based_pyramid(base, side_s);
            printf("The surface area of the square-based pyramid is %.2f", answer);
        }
        else if(shape_3d==5){ //rectangular prism
            printf("Enter width: ");
            scanf("%f", &width);
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=sa_of_rectangular_prism(length, width, height);
            printf("The surface area of the rectangular prism is %.2f", answer);
        }
        else if(shape_3d==6){ //triangular prism
            printf("Enter side a: ");
            scanf("%f", &side_a);
            printf("Enter side b: ");
            scanf("%f", &side_b);
            printf("Enter side c: ");
            scanf("%f", &side_c);
            printf("Enter height: ");
            scanf("%f", &height);
            printf("Enter length: ");
            scanf("%f", &length);
            answer=sa_of_triangular_prism(side_a, side_b, side_c, height, length);
            printf("The surface area of the triangular prism is %.2f", answer);
        }
    }
    else{ //volume of 3D object
        printf("Enter 1 for cylinder, 2 for sphere, 3 for cone, 4 for square-based pyramid, 5 for rectangular prism, and 6 for triangular prism: ");
        scanf("%d", &shape_3d);
        if(shape_3d==1){ //cylinder
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=volume_of_cylinder(radius, height);
            printf("The volume of the cylinder is %.2f", answer);
        }
        else if(shape_3d==2){ //sphere
            printf("Enter radius: ");
            scanf("%f", &radius);
            answer=sa_of_sphere(radius);
            printf("The volume of the sphere is %.2f", answer);
        }
        else if(shape_3d==3){ //cone
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=volume_of_cone(radius, height);
            printf("The volume of the cone is %.2f", answer);
        }
        else if(shape_3d==4){ //square-based pyramid
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=volume_of_square_based_pyramid(base, height);
            printf("The volume of the square-based pyramid is %.2f", answer);
        }
        else if(shape_3d==5){ //rectangular prism
            printf("Enter width: ");
            scanf("%f", &width);
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=volume_of_rectangular_prism(length, width, height);
            printf("The volume of the rectangular prism is %.2f", answer);
        }
        else if(shape_3d==6){ //triangular prism
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter height: ");
            scanf("%f", &height);
            answer=volume_of_triangular_prism(base, length, height);
            printf("The volume of the triangular prism is %.2f", answer);
        }
    }
}
return 0;
}
