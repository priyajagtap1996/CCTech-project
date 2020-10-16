#include <iostream>
#include <conio.h>
using namespace std;

struct Point
{
    float x, y;
};

float CalculatetheLength(Point a, Point b, Point c)
{
    int w;
    float length1 = (b.y - a.y) - (b.x - a.x);
    
    float length2 = (c.y - a.y) - (c.x - a.x);
    
    if (length1 < 0.0)
    {
        w = -1;
    }
    else
        w = 1;
    if (length2 < 0.0)
    {
        w = -1;
    }
    else
        w = 1;
    float SurfaceArea = (length1 * w + length2 * w);
    return SurfaceArea;
}

void CalculatetheSurfaceArea(Point buil[], Point p)
{
     int n = 4;
     int i = 0;
        
     float SurfaceArea1 = (CalculatetheLength(buil[i], buil[i + 1], buil[i + 3]));
   
     cout << "\n Surface area 1 is: " << SurfaceArea1<<endl;

     float SurfaceArea2 = (CalculatetheLength(buil[i + 4], buil[i + 5], buil[i + 7]));
     
	 cout << "\n Surface area 2 is: "  <<SurfaceArea2<<endl;

     /*Applying y=mx+c on coordinates (-3.5,1) and (2.5,-2), we get m= -0.5 and c= -0.75. Therefore, Sunlight will hit the big building at (4, 2.75). Total y lenth is
      5 units. Subtracting 2.75 from 5 we get 2.25. So this value we need to subtract from the surface area value of big building. */

     SurfaceArea1=SurfaceArea1-2.25;
     
     cout << "\n Surface area is: " << SurfaceArea1 + SurfaceArea2<<endl;
 }

int main()
{
    Point buildings[] = { {4, 0}, {4, -5}, {7, -5}, {7, 0}, {0.4, -2}, {0.4, -5}, {2.5, -5}, {2.5, -2} };
  
    Point p={ -3.5, 1 };

    (CalculatetheSurfaceArea(buildings, p));
     
	getch();
 }


