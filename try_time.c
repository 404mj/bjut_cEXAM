#include "mydecl.h"


/*
struct  tm{
       int tm_sec;
       int tm_min;
       int tm_hour;
       int tm_mday;
       int tm_mon;
       int tm_year;
       int tm_wday;
       int tm_yday;
       int tm_isdst;
     }; 

  time_t mktime(t *);
  tm * localtime(time_t *);
*/


int main(void){
	/*time_t timer=time(NULL);
	struct tm* ptm;
	struct tm info;

	ptm=localtime(&timer);
	printf("localtime is: %s\n",asctime(ptm));*/

	//---------------------

	struct tm t;
     char str[80];
     t.tm_sec=1;
     t.tm_min=3;
     t.tm_hour=7;
     t.tm_mday=9;
     t.tm_mon=2;
     t.tm_year=116;//实际减1900:2016-1900=116
     // t.tm_wday=4;
     // t.tm_yday=0;
     // t.tm_isdst=0;
     strcpy(str,asctime(&t));
     printf("%s",str);
     time_t now = mktime(&t);
     printf("%s\n",ctime(&now));


//===================================




	return 0;
}