//Area and Perimeter of rectangle,square and rhombus.
#include<stdio.h>
#include<math.h>
int main(){
    int length,width,area,perimeter,side,d1,d2;
    //1.Rectangle:
    printf("Enter the value of Length and Width of Rectangle:");
    scanf("%d %d",&length,&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("Rectangle's Area=%d and Perimeter=%d\n",area,perimeter);
    //2.Square:
    printf("Enter the side of square:");
    scanf("%d",&side);
    area=side*side;
    perimeter=4*side;
    printf("Square's Area=%d and Perimeter=%d",area,perimeter);
    //3.Rhombus:
    printf("\nEnter Two Diagonals of the Rhombus:");
    scanf("%d %d",&d1,&d2);
    area=(d1*d2)/2;
    perimeter=2*sqrt(d1*d1+d2*d2); //Perimeter of Rhombus with Diagonals=2*sqrt(d1*d1+d2*d2)
    printf("Rhombus's Area=%d and Perimeter=%d",area,perimeter);
return 0;
}
