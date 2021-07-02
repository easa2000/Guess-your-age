#include<stdio.h>
void main(){
	int cdate,cmonth,cyear,bdate,bmonth,byear,age;
	printf("\n Enter the current date: ");
	scanf("%d",&cdate);
	printf("\n Enter the current month: ");
	scanf("%d",&cmonth);
	printf("\n Enter the current year: ");
	scanf("%d",&cyear);
	
	printf("\n Enter your birth date: ");
	scanf("%d",&bdate);
	printf("\n Enter your birth month: ");
	scanf("%d",&bmonth);
	printf("\n Enter your birth year: ");
	scanf("%d",&byear);
	
	age = cyear - byear;
	printf("\n User Age : %d",age);
	printf("\n DOB: %d/%d/%d",bdate,bmonth,byear);
	
}
