/*
*Prints out ASCII art and calculates total surface area of a cylinder
*Author: Dylan McVerry-Reese
*Date: 9/13/24
*/
#include <stdio.h>


int main(void) {

print_logo();
    
print_surface_area();

return 0;
}

/* Start of ASCII section
*https://www.asciiart.eu/animals/moose
*Function to print ASCII moose
*/
int moose() {
   printf(" prs  \\\\_// \n");
   printf("     __/\".  \n");
   printf("    /__ |   \n");
   printf("    || ||   \n");

   return 0;
}
    
/* 
*Function to print a bear ASCII
*https://asciiart.eu/animals/bears
*/
int bear() {
  printf(" __       __ \n");
  printf("/  \\.-""-./   \\ \n");
  printf("\\   -   -   / \n");
  printf("|   o   o   |   \n");
  printf("\\  .-'''-.  /   \n");
  printf(" '-\\__Y__/-'    \n");
  printf("    `---`       \n");

  return 0;
}

/*
*Prints spacer
*/
int space() {
   printf("/~~~~~~~~\\ \n");

   return 0;
}

/*
*Prints out the repeating ASCII arts with spacers between them
*/
int print_logo() {
    space();
    moose();
    space();
    bear();
    space();
    moose();
    space();
    bear();
    space();

    return 0;
}

/* Start of cylinder section
 function to calculate the circumference */
int calc_circumference() {
    double cylinder_diameter = 5;
    double pi = 3.14;
    double circumference = 0;
    circumference = pi*cylinder_diameter;
    return 0;
}

/* function to calculate the area of the circles */
int calc_circle_area() 
    double circle = 0;{
    circle = pi*(cylinder_diameter*cylinder_diameter/4);
    return 0;
}
   
/* function to calculate the area of the sides of the cylinder */
int calc_wall_area() {
    double cylinder_height = 6;
    double wall_area = 0;
    wall_area = circumference*cylinder_height;
    return 0;
}
/* function to calculate total surface area and print answer*/
int print_surface_area() {
    double total_area = 0;
    calc_circumference();
    calc_circle_area();
    calc_wall_area();

    total_area = (circle)+(circle)+(wall_area);
    printf("The total surface area is: %.2f\n", total_area);
    return 0;
}
