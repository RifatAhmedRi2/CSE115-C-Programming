#include <stdio.h>
int main() {
	int sec, hour, min, op;
	printf("Input the Value of Seconds: ");
	scanf("%d", &sec);
	hour = (sec/3600);
	min = (sec -(3600*hour))/60;
    op = (sec -(3600*hour)-(min*60));
	printf("The converted time is: %d Hour(s), %d Minute(s), %d Second(s)\n",hour,min,op);
	return 0;
}
