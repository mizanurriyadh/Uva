#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, PI;
    double s, triangle, Radius_Inner_Circle, Radius_Outer_Circle, Area_Inner_Circle, Area_Outer_Circle;
    PI = acos(-1);

    while(scanf("%lf %lf %lf", &a, &b, &c)==3){

    s = (a+b+c)/2;
    triangle = sqrt(s*(s-a)*(s-b)*(s-c));

    Radius_Inner_Circle = triangle/s;    //sqrt(((s-a)*(s-b)*(s-c))/s);
    Area_Inner_Circle = PI * pow(Radius_Inner_Circle, 2);

    Radius_Outer_Circle = (a*b*c)/(4*triangle);    //sqrt((a+b+c)*(a+b-c)*(b+c-a)*(a+c-b));
    Area_Outer_Circle = PI * pow(Radius_Outer_Circle, 2);

    printf("%.4lf %.4lf %.4lf\n", Area_Outer_Circle-triangle, triangle-Area_Inner_Circle, Area_Inner_Circle);
    }

    return 0;
}

                    **********************
Half Perimeter of Triangle, s = (a+b+c)/2
Area of Triangle = sqrt(s*s-a*s-b*s-c)
Radius of InnerCircle = Area of Triangle/s or sqrt((s-a*s-b*s-c)/s)
Radius of Circumcircle = (a*b*c)/4*Area of Triangle or (a*b*c)/sqrt((a+b+c)*(b+c-a)*(a+c-b)(a+b-c))
Input : 500 600 700
Output: 253910.9280 63193.5805 83775.8041

**** Using PI = 3.14159
