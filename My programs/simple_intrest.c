#include <stdio.h>
#include <conio.h>

main()
{
	int p,t;
	float r,si;
	printf ("Enter the principal: ");
	scanf ("%d",&p);
	printf ("Enter the Time period: ");
	scanf ("%d",&t);
	printf ("Enter the Rate: ");
	scanf ("%f",&r);
	si = (p*t*r)/100;
	printf ("The simple Interest is: %f",si);
	getch ();
	return 0;
}
