//1330 
#include <stdio.h>

//int main(void) {
//    int A, B;
//    scanf("%d %d", &A, &B);
//
//    if (A > B) {
//        printf(">");
//    }
//    else if (A < B) {
//        printf("<");
//    }
//    else {
//        printf("==");
//    }
//}

//9498
//#include <stdio.h>
//
//int main() {
//	int score;
//	scanf("%d", &score);
//
//	if (score >= 90)
//		printf("A\n");
//	else if (score >= 80)
//		printf("B\n");
//	else if (score >= 70)
//		printf("C\n");
//	else if (score >= 60)
//		printf("D\n");
//	else
//		printf("F\n");
//
//	return 0;
//}


//2753

//int main()
//{
//	int year;
//
//	scanf("%d", &year);
//
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("1\n");
//	else
//		printf("0\n");
//
//	return 0;
//}


//14681

//int main()
//{
//	int x, y;
//
//	scanf("%d %d", &x, &y);
//
//	if (x == 0 || y == 0)
//		return 0;
//
//	if (x > 0) {
//		if (y > 0)
//			printf("1\n");
//		if(y < 0)
//			printf("4\n");
//	}
//	if (x < 0) {
//		if (y > 0)
//			printf("2\n");
//		if (y < 0)
//			printf("3\n");
//	}
//	return 0;
//}


//2884

//int main()
//{
//	int H, M;
//	scanf("%d %d", &H, &M);
//
//	if (H < 0 || H >23 || M < 0 || M>60)
//		return 0;
//
//	int temp = M - 45;
//	int temp2;
//
//
//	if (temp >= 0)
//		printf("%d %d", H, temp);
//
//	else
//		if (H - 1 < 0)
//			printf("%d %d", 24 + H - 1, 60 + temp);
//		else 
//			printf("%d %d", H - 1, 60 + temp);
//
//	return 0;
//}


//2525


//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//
//	if (A < 0 || A >23 || B < 0 || B>60)
//		return 0;
//
//	int C;
//	scanf("%d", &C);
//
//	if (0 > C || C > 1000)
//		return 0;
//
//
//	if (B + C < 60)
//		printf("%d %d", A, B + C);
//	else {
//		int hour = (B + C) / 60;
//		int min = (B + C) % 60;
//		if (A + hour < 24)
//			printf("%d %d", A + hour, min);
//		else
//			printf("%d %d", A + hour - 24, min);
//	}
//	return 0;
//}


//2480

int main()
{
	
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		int money;

		if (a == b && b== c && a == c)
			money = 10000 + (a * 1000);
		else if (a == b || a == c)
			money = 1000 + a * 100;
		else if (b == c)
			money = 1000 + b * 100;
		else {
			int max = a;
			if (max < b) max = b;
			if (max < c) max = c;

			money = max * 100;
		}

		printf("%d\n", money);
	

	return 0;
}