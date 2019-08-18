// C�����������1-18
#include "StdAfx.h"
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int getLine(char line[],int lim);//�����ú��������ж�������ַ����Ƿ���Ч���Ҵ洢����������ַ���
int clearTab(char clearLine[],int leng);//�ú�����������ո���Ʊ��
char outputLine[MAXLINE];
int main()
{
	char currentLine[MAXLINE];
	int len = 0;
	while((len = getLine(currentLine,MAXLINE)) > 0){
		if((len - 1) == clearTab(currentLine,MAXLINE)){
			printf("��ǰ������ȫ�ǿո���Ʊ�������������룡����");
		}else{
			printf("%s\n",outputLine);
		}
	}
	return 0;
}

int getLine(char s[],int length){
	int i;
	char c;
	for(i = 0;i < length -1 &&(c = getchar()) != EOF && c != '\n' ; i ++){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		i ++;
	}
	s[i] = '\0';
	return i;
}

int clearTab(char t[],int q){
	char c;
	int sum = 0;
	int i,j;
	for(i = 0,j = 0;i < q - 1,j < q - 1;i ++){
		if(t[i] == '\t' || t[i] == ' '){
			sum ++;
		}else{
			outputLine[j] = t[i];
			j ++;
		}
	}
	return sum;
}