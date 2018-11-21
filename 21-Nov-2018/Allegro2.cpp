void test_two()
{
   int x,y,r,g,b,color;
   double f;

   for (r = 0; r < 256; r++)
   {
	   f = 0.0;
	   while (f < 2 * 3.14159265)
	   {
		   x = 600 + r * sin(f);
		   y = 350 + r * cos(f);
		   putpixel(screen, x, y, makecol(r, 255, 255));
		   f = f + 0.001;
	   }
   }
}


