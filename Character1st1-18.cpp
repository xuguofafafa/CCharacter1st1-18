// C程序设计语言1-18
#include "StdAfx.h"
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int getLine(char line[],int lim);//声明该函数用于判断输入的字符串是否有效，且存储键盘输入的字符串
int clearTab(char clearLine[],int leng);//该函数用于清除空格和制表符
char outputLine[MAXLINE];
int main()
{
	char currentLine[MAXLINE];
	int len = 0;
	while((len = getLine(currentLine,MAXLINE)) > 0){
		if((len - 1) == clearTab(currentLine,MAXLINE)){
			printf("当前输入行全是空格或制表符，请重新输入！！！");
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