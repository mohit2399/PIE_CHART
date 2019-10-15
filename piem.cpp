#include<graphics.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>

using namespace std;


void flood(int x, int y, int Color, int def)
{
	if (getpixel(x, y) == def && getpixel(x, y)!=Color)
	{
	//	delay(1);
		putpixel(x, y, Color);
		flood(x + 1, y, Color, def);
		flood(x - 1, y, Color, def);
		flood(x, y + 1, Color, def);
		flood(x, y - 1, Color, def);
	}
}


int main()

{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    int xc, yc, r;
    float pi=3.14;

    cout<<"center"<<endl;
    cin>>xc>>yc;

    cout<<"radius"<<endl;
    cin>>r;

    circle(xc, yc, r);

    line(xc, yc, xc+r*cos(0), yc+r*sin(0));

    int e;

    cout<<"enter no of elements"<<endl;
    cin>>e;

    cout<<"enter the elements"<<endl;

    double xf, yf, ad[e], ar[e], val[e];


    int i=0, sum=0;

    for (i=0; i<e; i++)
    {
        cin>>val[i];
        sum=sum+val[i];
    }

    cout<<"sum is "<<sum<<endl;

    for (i=0; i<e; i++)
    {
        ad[i]=val[i]*360/sum;
    }


    for (i=1; i<=e; i++)
    {
        ar[i]=ad[i]*pi/180;
        ar[i]=ar[i]+ar[i-1];
     //   cout<<ar[i]<<endl;

    }
    for (i=0; i<e; i++)
    {
        line(xc, yc, xc+r*cos(ar[i]), yc+r*sin(ar[i]));
    }

    float x=0, y=0;

    for (i=0; i<e; i++)
    {
        int x, y;

        x=(xc)+(r/2)*cos((ar[i])-0.1);
        y=(yc)+(r/2)*sin((ar[i])-0.1);
        flood(x,y,i+2,0);


    }

    getch();
    closegraph();
    return 0;
}
