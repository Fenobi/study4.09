#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct str
{
	char name[20];
	int age;
	float num;
}a;

int main()
{
	struct str s[] = { {"������",20,1.79},{"���ú�",19,1.70} ,{"������",21,1.82} };
	int i = 0;
	struct str* ps = &s;
	for (i = 0; i < 3; i++)
	{
		printf("%s %d %.2lf\n", s[i].name, s[i].age, s[i].num);
		printf("%s %d %.2lf\n", (ps + i)->name, (ps + i)->age, (ps + i)->num);
	}

	return 0;
}