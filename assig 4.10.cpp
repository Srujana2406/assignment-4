#include<stdio.h>
#include<math.h>
main()
{
   int choice;
   printf("Enter
   1.for finding area of Circle
   2.for finding area of Rectangle
   ");
   scanf("%d",&choice);
   switch(choice)
   case 1: {
   	 {
         float radius,area;
         printf("Enter Radius of Circle
");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
         printf("Area of Circle %f
",area);
         break;
      }
      case 2: {
         float len,breadth,area;
         printf("Enter Length and Breadth of Rectangle
");
         scanf("%f %f",&len,&breadth);
         area=(float)len*breadth;
         printf("Area of Rectangle is %f
",area);
         break;
      }
   }
