/*
*Program: Encryption and decryption of file
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<stdlib.h>

void encrypt_decrypt(int flag)
{
	char fname[20],ch;
	FILE *fpts, *fptt;
	if(flag==1)
	{
		printf("Enter the file to encrypt\n");
	}
	else
	{
		printf("Enter the file to decrypt\n");
	}	
	scanf("%s",fname);
	
	fpts = fopen(fname,"r");
	if(fpts==NULL)
	{
		printf("Error openeing file\n");
		exit(1);
	}
	
	fptt  = fopen("temp.txt","w");
	if(fptt==NULL)
	{
		printf("Error openeing file\n");
		fclose(fpts);
		exit(2);
	}	
	while(1)
	{
		ch = fgetc(fpts);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			if(flag==1)
			{
				ch = ch+100;
			}
			else
			{
				ch = ch-100;
			}			
			fputc(ch,fptt);
		}
	}
	fclose(fpts);
	fclose(fptt);
	fpts = fopen(fname,"w");
	if(fpts==NULL)
	{
		printf("Error opening file\n");
		exit(3);
	}
	
	fptt = fopen("temp.txt","r");
	if(fptt==NULL)
	{
		printf("Error creating file\n");
		fclose(fpts);
		exit(4);
	}
	
	while(1)
	{
		ch = fgetc(fptt);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch,fpts);		
		}	
	}
	if(flag==1)
	{
		printf("File encrypted successfully\n");	
	}
	else
	{
		printf("Decrypted successfully\n");
	}
	
	fclose(fptt);
	fclose(fpts);
}
int main()
{
	int flag;
	while(1)
	{
		printf("1. Encryption\n2. Decryption\n--------------------\nChoose 1 or 2\n---------------\n");
		scanf("%d",&flag);
		encrypt_decrypt(flag);	
	}
	
	return 0;
}
