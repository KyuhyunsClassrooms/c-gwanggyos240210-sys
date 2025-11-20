#include <stdio.h>
int main()
{
	double city = 50, forest = 20, ocean = 30;
	int r, a;
	double *p;
	const char *name;
	
	printf("1. 도시 2. 숲 3, 바다\n");
	scanf("%d", &r);
	
	if(r==1){ p = &city; name = "도시";}
	else if (r==2){p = &forest; name = "숲";}
	else if (r==3){p = &ocean; name = "바다";}
	else {printf("잘못된 선택\n"); return 0;}

	printf("%s 선택 (현재 오염도 %.1f)\n", name, *p);
	printf("1. 친환경 2. 보통 3. 오염 유발\n");
	scanf("%d", &a);
	
	if (a==1) *p -= 10;
	else if (a==3) *p += 15;
	
	if (*p < 0)*p = 0;
	if (*p > 100)*p = 100;
	
	printf ("행동 후 %s 오염도 : %.1f\n", name, *p);
	
	if (*p <=20) printf ("깨끗함\n");
	else if (*p <= 60) printf("보통 오염\n");
	else printf ("오염심각\n");
	
	return 0;
	
}