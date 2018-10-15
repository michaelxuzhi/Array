#include<iostream.h>
#include<stdio.h>
#include<string.h>
#define M 2
struct tongxunlu
{ 
	char name[5];
    char tel[10];
};

int chaxun(tongxunlu *)
{

}

//struct tongxunlu a[M],*p=a; //声明结构数组
int main()
{
	tongxunlu a[M],*p=a;
	printf("请输入姓名和电话:\n");
	for(int i=0;i<M;i++)
	scanf("%s%s",a[i].name,a[i].tel);//循环输入姓名和电话，并存入数组
    chaxun(p);//调用查询函数
	char q;
    printf("请输入要查询的姓名:\n",q);
    scanf("%s",q);// 输入要查询人的姓名
    for(i=0;i<M;i++)
	{
		if(strcmp(p[i].name,q)==0)
		{ 
			printf("result:%s  %s\n",p[i].name,p[i].tel);
			break;// 遍历数组：用循环，判断数组元素的姓名成员的值是否等于输入项，若等则定位显示，退出循环。
		 }
	}
	return 0;
}