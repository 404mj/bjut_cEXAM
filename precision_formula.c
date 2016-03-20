#include<stdio.h>
#include<math.h>

int main(void)
{
	double sum=0.0;
	long i=0;
	double item=1.0;

	while(fabs(item)>1e-6){
		sum+=item;
		++i;
		item = 1.0/(i*(i+1));
	}
	printf("\nsum=%lf\n",sum );
	
	return 0;
}