#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	cpid_t cpid[4];
	int addarr[100], arr[4]={0,0,0,0};
	
	int sum=0, i;
	for(int n=0; n<100; n++)
	{ addarr[n]=1;}

	for(i=0;i<4;i++)
	{
		cpid[i]=fork();
		if(cpid[i]<0)
		{
			printf("Failed!\n");}}
	else if(cpid[0]==0)
	{	
		for(int j=0;j<25;j++)
	{arr[0]=arr[0]+addarr[i];}}
	else if(cpid[1]==0)
	{	
		for(int j=25;j<50;j++)
	{arr[1]=arr[1]+addarr[j];}}
	else if(cpid[2]==0)
	{	
		for(int k=50;k<75;k++)
	{arr[2]=arr[2]+addarr[k];}}

	else if(cpid[3]==0)
	{	
		for(int l=75;l<100;l++)
	{arr[3]=arr[3]+addarr[k];}}
	else{printf("Parent process\n");}
	int st;
	for(int i=0;i<4;i++)
	{	cpid[i]=wait(&st);}

	sum=arr[0]+arr[1]+arr[2]+arr[3];
	printf("sum %d\n",sum);
	return 0;
	}