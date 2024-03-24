#include<stdio.h>
#include<string.h>
union song
{
	char title[100];
	char artist[20];
	char album[60];
	float length;
	
};
int main()
{
	union song S1;
	strcpy(S1.title,"venmegam");
	strcpy(S1.artist,"yuvan");
	strcpy(S1.album,"yaaradi nee mohini");
	S1.length=4.115;
	printf("%.2f,%s,%s,%s",S1.length,S1.title,S1.artist,S1.album);
	return 0;
	
}