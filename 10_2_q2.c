/*
Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
Input:
Enter any string: development

Output:
Length is: 11
*/
#include<stdio.h>
sum(){
	int i,tot=0;
	char a[100];
	
	printf("Enter your name : ");
	gets(a);
	
	tot = strlen(a);
	return tot;
}

void main(){
	int ans;
	ans=sum();
	printf("ans is %d",ans);
}




