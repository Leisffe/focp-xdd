#define USE_CONSOLE

#include <cstdlib>
#include <iostream>

using namespace std;
#include "allegro.h"

/* Install the allegro library as follows:
   - copy all files from the include library into
     corresponding directories of the Visual Studio C++ compiler
   - copy files from the bin library (alleg42.dll, alld42.dll,
     allp42.dll) to the Windows/system32 directory
   - copy files from the lib library (all*lib) to the lib
     library
   - add the allegro library (alleg.lib) to the project:
     * Go to: Project / xyz Properties / Configuration Properties /
       Linker / Input 
     * Choose "Additional Dependencies"
     * Enter "alleg.lib" (without quotes), confirm
*/

void test_pixels()
{
   int x,y,r,g,b,color;
   for(x=0;x<SCREEN_W;x++)
     for(y=0;y<SCREEN_H;y++)
     {
        r = x % 256;
        g = y % 256;
        b = (x+y) % 256;
        color = makecol(r,g,b);
        putpixel(screen,x,y,color);        
     }     
   textout_centre_ex(screen, font, "Hello, world!", SCREEN_W/2, SCREEN_H/2, makecol(255,255,255), -1);
   readkey();
}


void test_lines()
{
    int x1,y1,x2,y2;
    int red,green,blue,color;
	
	//display screen resolution
    textprintf(screen, font, 0, 0, 15, 
        "Lines Program - %dx%d - Press any key to quit", 
        SCREEN_W, SCREEN_H);

    //wait for keypress
    while(!keypressed())
    {
        //set a random location
        x1 = 10 + rand() % (SCREEN_W-20);
        y1 = 10 + rand() % (SCREEN_H-20);
        x2 = 10 + rand() % (SCREEN_W-20);
        y2 = 10 + rand() % (SCREEN_H-20);
        
        //set a random color
        red = rand() % 255;
        green = rand() % 255;
        blue = rand() % 255;
        color = makecol(red,green,blue);
        
        //draw the pixel
        line(screen, x1,y1,x2,y2,color);
    }
    readkey();
}

void test_polygons()
{
	int vertices[8];
    int red,green,blue,color;
    int i;

	    //display screen resolution
    textprintf(screen, font, 0, 0, 15, 
        "Polygons Program - %dx%d - Press any key to quit", 
        SCREEN_W, SCREEN_H);

    //wait for keypress
    while(!keypressed()) /*  or check key[KEY_ESC] for immediate keyboard read */
    {
        //set a random location
        vertices[0] = 10 + rand() % (SCREEN_W-20);
        vertices[1] = 10 + rand() % (SCREEN_H-20);
       
		for(i=2;i<8;i+=2)
		{
        vertices[i] = 10 + rand() % (SCREEN_W-20);
        vertices[i+1] = 10 + rand() % (SCREEN_H-20);
		}

        //set a random color
        red = rand() % 255;
        green = rand() % 255;
        blue = rand() % 255;
        color = makecol(red,green,blue);
        
        //draw the pixel
        polygon(screen,4,vertices,color);
    }
    readkey();
}



int main()
{
 allegro_init();
 install_keyboard();
 set_color_depth(24);
 set_gfx_mode(GFX_GDI,1200,700,0,0);
 printf("Hello, world!\n");
 test_pixels();
 test_lines();
 test_polygons();
 printf("That's all.\n");
 printf("Press a key.\n");
 readkey();
 return 0;
}

