#include <stdio.h>
int main()
{
	double city = 50, forest = 50, ocean = 50;
	int r, a=0, b=0, c=0;
	double *p; //double로 실수 넣기 포인터 변수 p  //*p는 p;값 
	const char *name; //문자열 포인터 
	
	printf("1. 도시 2. 숲 3. 바다\n");
	scanf("%d", &r);
	
	if(r==1){ p = &city; name = "도시";} //name에 문자열 저장 
	else if (r==2){p = &forest; name = "숲";}
	else if (r==3){p = &ocean; name = "바다";}
	else {printf("잘못된 선택\n"); return 0;}

	printf("%s 선택 (현재 오염도 %.1f)\n", name, *p);
	
	if (r==1)
	{
	printf("1. 자전거 타기  2. 대중교통 타기  3. 자가용 차 타기\n");
	scanf("%d", &a);
	}
	else if (r==2)
	{
	printf("1. 나무 심기  2. 그냥 가기  3. 벌목\n");
	scanf("%d", &b);
	}
	else if (r==3)
	{
	printf("1. 쓰레기 줍기  2. 낚시  3. 쓰레기 투기\n");
	scanf("%d", &c);
	}
	
	
	
	if (a==1) *p -= 10;
	else if (a==2) *p += 0;
	else if (a==3) *p += 15;
	else {printf("잘못된 선택\n"); return 0;}
	
	if (b==1) *p -= 10;
	else if (b==2) *p += 10;
	else if (b==3) *p += 15;
	else {printf ("잘못된 선택\n"); return 0;}
	
	if (c==1) *p -= 10;
	else if (c==2) *p += 0;
	else if (c==3) *p += 15;
	else {printf ("잘못된 선택\n"); return 0;}
	
	if (*p < 0)*p = 0;
	if (*p > 100)*p = 100;
	
	printf ("행동 후 %s 오염도 : %.1f\n", name, *p);
	
	if (*p <=40) printf ("당신은 지구를 생각하는 진정한 지구인!\n");
	else if (*p <= 60) printf("지구를 위해 노력해주세요!\n");
	else printf ("지구 온난화가 심해졌어요!\n");
	
	return 0;
	
}