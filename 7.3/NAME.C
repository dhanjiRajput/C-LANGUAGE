#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	clrscr();
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=57;j++)
		{
			if((i==1||i==7)&&(j>=1&&j<=7)||(j==2||j==7)&&(i>=1&&i<=7)||
			   (j==10||j==17)&&(i>=1&&i<=7)||(i==4&&j>=10&&j<=17)||
			   (j==20||j==27)&&(i>=1&&i<=7)||(i==1||i==4)&&(j>=20&&j<=27)||
			   (j==30||j==38)&&(i>=1&&i<=7)||(j-i==30)||
			   (i==1&&j>=41&&j<=48)||(j==44&&i>=1&&i<=7)||(i==7&&j>=41&&j<=44)||(i==6&&j==41)||
			   (i==1||i==7)&&(j>=51&&j<=57)||(j==54&&i>=1&&i<=7))
			{
				printf("*");
				}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}
