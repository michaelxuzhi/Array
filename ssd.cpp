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

//struct tongxunlu a[M],*p=a; //�����ṹ����
int main()
{
	tongxunlu a[M],*p=a;
	printf("�����������͵绰:\n");
	for(int i=0;i<M;i++)
	scanf("%s%s",a[i].name,a[i].tel);//ѭ�����������͵绰������������
    chaxun(p);//���ò�ѯ����
	char q;
    printf("������Ҫ��ѯ������:\n",q);
    scanf("%s",q);// ����Ҫ��ѯ�˵�����
    for(i=0;i<M;i++)
	{
		if(strcmp(p[i].name,q)==0)
		{ 
			printf("result:%s  %s\n",p[i].name,p[i].tel);
			break;// �������飺��ѭ�����ж�����Ԫ�ص�������Ա��ֵ�Ƿ���������������λ��ʾ���˳�ѭ����
		 }
	}
	return 0;
}