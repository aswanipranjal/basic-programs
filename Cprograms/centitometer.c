#include<stdio.h>

struct dist
{
	int centimeter;
	int meter;
}s1,s2,*s3;

	void add(struct dist s1, struct dist s2, struct dist *s3)
	{
		s3->centimeter = s1.centimeter+s2.centimeter;
		s3->meter = s1.meter+s2.meter;
		if(s3->centimeter>=100)
		{
			++s3->meter;
			s3->centimeter-=100;
		}
	}
	int main()
	{
		struct dist s1,s2,s3;
		printf("enter first distance: ");
		scanf("%d",&s1.meter);
		scanf("%d",&s1.centimeter);
		scanf("%d",&s2.meter);
		scanf("%d",&s2.centimeter);
		add(s1,s2,&s3);
		printf("The distance is: %dm %dcm\n",s3.meter,s3.centimeter);
		return 0;

	}