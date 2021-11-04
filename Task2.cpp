#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0;//initialize varables 
	int m=0;
	int s=0;
    printf("INPUT SECONDS\n");
    scanf("%d",&s);//input the seconds
    h=s/3600;//get num of hours
    printf(" Hours : %d\n",h);
    s=s%3600;//get num ofreminder seconds from the hours
    m=s/60;//get minutes
    printf(" minutes : %d\n",m);
    s=s%60;//get the reminder from the minutes
    printf(" seconds : %d\n",s);
    return 0;
}
