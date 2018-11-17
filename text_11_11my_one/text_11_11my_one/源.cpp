#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//1.完成猜数字游戏。
////
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("------------------------\n");
//	printf("--------1.play----------\n");
//	printf("--------0.exit----------\n");
//	printf("------------------------\n");
//}
//void play()
//{
//	int num = 0;
//	int guess = 0;
//	num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("猜数字：");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜中了：%d\n", num);
//			break;
//		}
//	}
//}
//int main()
//{
//	int swit = 0;
//	srand((unsigned int)time(NULL));
//	
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &swit);
//		switch (swit)
//		{
//		case 1:
//			play();
//			break;
//		case 0:
//			printf("程序结束！");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (swit);
//
//	return 0;
//}
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
////
//int binary_search(int *arr,int left,int right,int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	
//	return -1;
//	
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	int input = 0;
//	int output = 0;
//	printf("Please input the number you want of 0-10：");
//	scanf("%d", &input);
//	output = binary_search(arr, left, right,input);
//	if (-1 == output)
//	{
//		printf("The arr has not the numbe!");
//	}
//	else
//	{
//		printf("The index of the numger in the array is:%d", output);
//	}
//	
//}

//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include <string.h>
//#include <stdlib.h>
// int main()
// {
// 	int i = 0;
// 	char key[20] = {0}; 
//	char secret[20] = {0};
//	printf("Please set secret：");
//	scanf("%s", secret);
//	for(i=0; i<3; i++)
// 	{
// 		printf("Please input secret:>");
// 		scanf("%s",key);
// 		if(0 == strcmp(key,secret))
// 		{
// 			printf("The key is right\n");
// 			break;
// 		}
// 		else
// 		{
// 			printf("The key is not right,please input again!\n");
// 		}
// 	}
// 	if(3 == i)
// 	{
// 		printf("三次密码错误,退出程序\n");
//		exit(0);
// 	}
// 	return 0;
// }
//
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//int main()
//{
//	char case_;
//	printf("Please input a case:");
//	while (case_=getchar())
//	{
//		if (case_ <= 'z'&&case_ >= 'a')
//		{
//			printf("The capital is: %c\n", case_ - 32);
//		}
//		
//		else if(case_<='Z'&&case_>='A')
//		{
//			printf("The lowwer case is:%c\n", case_ +32);
//		}
//		else if (case_ <= '9'&&case_ >= '0')
//		{
//			continue;
//		}
//	}
//}
#include <string.h>
int main()
{
	int i;
	int chance = 3;
	char secreat[10] = { 0 };
	char cur[10] = { 0 };
	printf("Set secreat:");
	scanf("%s", secreat);
	printf("Please input the secreat:");
	scanf("%s", cur);
	for (i = 0; i < 3; i++)
	{
		if (strcmp(secreat, cur) == 0)
		{
			printf("The secreat is right!\n");
			break;
		}
		else
		{
			printf("The secreat is not right!You have %d chance.\n",chance - i -1);
			printf("Please input again:");
		}
		scanf("%s", cur);

	}
	if (i == 3)
	{
		printf("You have input three times,you have no chioce!");
	}

}