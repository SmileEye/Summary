#include <stdio.h>
#include <string.h>

//g++ smashing.cpp -o smashing -fstack-protector-all 
//检测栈溢出，如果存在此类行为会报错提示，不添加 -fstack-protector-all 不会提示
int main(void){
	char array[2]={0};
	strcpy(array,"abc");
	return 0;
}
