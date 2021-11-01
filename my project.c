/*PROJECT NAME:-STUDENT INFORMATION SYSTEM
  DEVELOPED BY:-SHUBHAM KUMAR
  DEPARTMENT OF C.S.E*/
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#define newline 10
#define space 32
void add();
void details();
void modify();
void del();
void marksdetail();
void report();
void find();
void addmarks();
char grade(int x);
void modifymarks();
void deletemarks();
struct stud
{
	int reg,sub1,sub2,sub3,sub4,sub5,sub6;
	char nm[20];
	char add[30],crs[20];
};
struct stud s1;
int r1=0;
int main()
{
	system("color B4");
	int i,j,s=0,k,l;
	int id;
	char pass[6],ch,sh[9]="12345";
	printf("%c",newline);
	for(i=1;i<=35;i++)
	    printf("%c",space);
	printf("WELCOME");
	sleep(1);
	for(i=1;i<=2;i++)
	    printf("%c",newline);
	for(i=1;i<=37;i++)
	    printf("%c",space);
	sleep(1);
	printf("TO");
	for(i=1;i<=2;i++)
	    printf("%c",newline);
	for(i=1;i<=26;i++)
	    printf("%c",space);
	sleep(1);
	printf("STUDENT INFORMATION SYSTEM\n");
	sleep(1);
	for(i=1;i<=2;i++)
	    printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	for(i=1;i<=45;i++)
	   printf("%c",space);
    sleep(1);
	printf("Developed By:Shubham kumar");
	for(i=1;i<=1;i++)
	    printf("%c",newline);
	for(i=1;i<=44;i++)
	    printf("%c",space);
	sleep(1);
	printf("Dept. of CSE\n");
	system("pause");
	do
	{
	system("cls");
	for(i=0;i<9;i++)
	    printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	printf("%c",newline);
	for(i=0;i<=28;i++)
	    printf("%c",space);
	printf("Enter ID:");
	scanf("%d",&id); 
	printf("%c%c",newline,newline);
	for(i=0;i<=24;i++)
	    printf("%c",space);
	printf("Enter Password:");
	for(i=0;i<5;i++)
	{
		ch=getch();
		pass[i]=ch;
		printf("*");
		
	}
	if((id==12345)&&(strcmp(pass,sh)==0))
	{
		for(i=1;i<=2;i++)
	        printf("%c",newline);
	    for(i=1;i<=79;i++)
		    printf("-");
		printf("%c",newline);
		for(i=0;i<=26;i++)
		    printf("%c",space);
		printf("YOU ARE PERMITTED\n\n");
		for(i=1;i<=25;i++)
		    printf("%c",space);	
		for(i=0;i<21;i++)
		{
			usleep(150000);
			printf("*");
		}
		sleep(1);
		system("cls");
		for(i=1;i<=79;i++)
		    printf("*");
		printf("%c",newline);
	    printf("%c",newline);
	do
	{
		system("cls");
		system("color F4");
		for(i=1;i<=79;i++)
		    printf("*");
		printf("%c",newline);
		printf("%c",newline);
		for(i=1;i<=25;i++)
	        printf("%c",space);
		printf("STUDENT INFORMATION SYSTEM\n");
	    printf("%c",newline);
	    for(i=1;i<=79;i++)
		    printf("*");
		sleep(1);
		printf("%c",newline);
	 	printf("%c",newline);
		for(i=1;i<=79;i++)
		    printf("-");
		printf("%c",newline);
		for(i=0;i<30;i++)
			printf("%c",space);
		printf("||:MAIN MENU:||\n");
		for(i=1;i<=79;i++)
		    printf("-");
		printf("%c",newline);
		printf("%c",newline);
		sleep(1);
		printf("1:STUDENT MENU\n2:EXAM MENU\n3:EXIT\n\nENTER YOUR CHOICE:-");
		scanf("%d",&k);
		switch(k)
		{
			case 1:
				  do
				  {
				  	system("color F4");
					sleep(1);
					system("cls");
					printf("%c",newline);
                    for(i=1;i<=79;i++)
		 			    printf("-");
					printf("%c",newline);
					for(i=0;i<29;i++)
					    printf("%c",space);
					printf("||:STUDENTS' MENU:||\n");
					for(i=1;i<=79;i++)
					    printf("-");
					printf("%c",newline);
					printf("%c",newline);
					sleep(1);
					printf("1:ADD Students' Information\n2:Students' Details\n3:Modify Students' Information\n4:Delete Students' Details\n5:Find Student Details\n6:Go Back to Main Menu\n\nEnter your choice:-");
					scanf("%d",&j);
					s=3;
					switch(j)
					{
						case 1:
							add();
							break;
						case 2:
							details();
							break;
						case 3:
							modify();
							break;
						case 4:
							del();
							break;
						case 5:
							find();
							break;
						case 6:
							system("cls");
							break;
						default:
							printf("INVALID CHOICE\n\n");
							system("pause");
					}
				}while(j!=6);
				break;
			case 2:
				do
				{
					system("color F4");
					sleep(1);
					system("cls");
				   	for(i=1;i<=79;i++)
		 			    printf("-");
					printf("%c",newline);
					for(i=0;i<30;i++)
					    printf("%c",space);
					printf("||:MARKS MENU:||\n");
					for(i=1;i<=79;i++)
					    printf("-");
					printf("%c",newline);
					printf("%c",newline);
					sleep(1);
					printf("\n1:Add Students Marks\n2:Display Marks Details\n3:Display Report Card\n4:Modify Marks Details\n5:Delete Marks Details\n6:Go Back To Main Menu\n\nEnter Your Choice:-");
					scanf("%d",&l);
					switch(l)
					{
						case 1:
							addmarks();
							break;
						case 2:
							marksdetail();
							break;
						case 3:
							report();
							break;
						case 4:
							modifymarks();
							break;
						case 5:
							deletemarks();
							break;
						case 6:
							 printf("Go Back To Main Menu\n");
							 break;
					   default:
					   	     printf("Invalid Choice\n");
					   	     system("pause");		
					}	
				}while(l!=6);
				break;
				case 3:
					system("cls");
					for(i=0;i<10;i++)
					    printf("%c",newline);
					for(i=0;i<=32;i++)
						printf("%c",space);
					printf("||:THANKYOU:||\n");
					for(i=0;i<=10;i++)
						printf("%c",newline);
					exit(0);
				default:
					printf("INVALID CHOICE\n");
					system("pause");
					system("cls");
				
		}
	}while(k!=3);
	}
	else
	{
		printf("%c",newline);
		printf("%c",newline);
		for(i=1;i<=79;i++)
		    printf("-");
		printf("%c",newline);
		for(i=0;i<=28;i++)
		    printf("%c",space);
		printf("Invalid ID or Password\n");
		for(i=0;i<=15;i++)
		    printf("%c",space);
		printf("Do you want to re-enter ID or Password (y/n)\n");
		fflush(stdin);
	    ch=getch();
	    if((ch=='y')||(ch=='Y'))
	    {
	    	s=s+1;
		}
		else
		{
		 	system("cls");
		 	for(i=0;i<=10;i++)
		 		printf("%c",newline);
		 	for(i=0;i<=30;i++)
		 		printf("%c",space);
		 	printf("||:YOU ARE OUT:||\n");
		 	for(i=0;i<12;i++)
		 		printf("%c",newline);
		 	exit(0);
		 	s=3;
		} 
		if(s==3)
		{
		 	system("cls");
		 	for(i=0;i<=10;i++)
		 		printf("%c",newline);
		 	for(i=0;i<20;i++)
		 		printf("%c",space);
		 	printf("||:YOU ENTER WRONG PASSWORD 3 TIMES:||\n\n");
		 	for(i=0;i<26;i++)
		 		printf("%c",space);
		 	printf("||:YOU ARE NOT ALLOWED:||\n");
		 	for(i=0;i<=10;i++)
		 		printf("%c",newline);
		 	exit(0);
		 	s=3;
		}	
	}
  }while(s!=3);
  return 0;	
}
void add()
{
	system("color B4");
	system("cls");
    int i,num,l=0,z1=0;
	FILE *fp,*fp1,*fp2,*fp3;
	char ch='y';
	char s[50];
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("+");
	printf("%c",newline);
	printf("%c",newline);
	for(i=1;i<=27;i++)
	    printf("%c",space);	    
	printf("ADD STUDENT INFORMATION\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("+");
	printf("%c",newline);
	if(fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	fp3=fopen("f:\\sks2.dat","rb");
	if((fread(&s1,sizeof(s1),1,fp3)>0))
	z1=11;
	fclose(fp3);
	while((ch=='y')||(ch=='Y'))
	{
		if(z1==0)
		{
			fp2=fopen("f:\\sks2.dat","ab");
		    sleep(1);
			printf("%c",newline);
			for(i=1;i<=80;i++)
		   		printf("-");
		    printf("%c",newline);
			for(i=1;i<=25;i++)
	    		printf("%c",space);
			printf("||:ENTER STUDENT DETAILS:||\n");
			printf("%c",newline);
			for(i=1;i<=80;i++)
		   		printf("-");
			sleep(1);
			printf("%c",newline);
			printf("ENTER REG. NO.=");
			scanf("%d",&s1.reg);
			fflush(stdin);
			sleep(1);
			printf("ENTER NAME =");
			scanf("%s",&s);
		    strupr(s);
			strcpy(s1.nm,s);
			sleep(1);
			fflush(stdin);
			printf("ENTER ADDRESS =");
			gets(s);
		    strupr(s);
			strcpy(s1.add,s);
			sleep(1);
			fflush(stdin);
			printf("ENTER COURSE =");
			gets(s);
		    strupr(s);
			strcpy(s1.crs,s);
			sleep(1);
			fflush(stdin);
			printf("%c",newline);
			for(i=1;i<=80;i++)
		    printf("-");
		    printf("%c",newline);
			sleep(1);
			printf("%c",newline);
		    sleep(1);
			printf("%c",newline);
			for(i=1;i<=80;i++)
		   		printf("-");
		    printf("%c",newline);
			for(i=1;i<=25;i++)
	    		printf("%c",space);
			printf("||:ENTER MARKS DETAILS:||\n");
			printf("%c",newline);
			for(i=1;i<=80;i++)
		   		printf("-");
			printf("%c",newline);
			printf("ENTER MARKS OF COA:-");
			scanf("%d",&s1.sub1);
			printf("ENTER MARKS OF DBMS:-");
			scanf("%d",&s1.sub2);
			printf("ENTER MARKS OF DAA:-");
			scanf("%d",&s1.sub3);
			printf("ENTER MARKS OF FLAT:-");
			scanf("%d",&s1.sub4);
			printf("ENTER MARKS OF MATH:-");
			scanf("%d",&s1.sub5);
			printf("ENTER MARKS OF ECONOMICS:-");
			scanf("%d",&s1.sub6);
			fwrite(&s1,sizeof(s1),1,fp2);
			fclose(fp2);
			printf("%c",newline);
	    	for(i=1;i<=80;i++)
		   		printf("+");
			printf("ADD ANOTHER STUDENT RECORD (y/n)\n");
			fflush(stdin);
			printf("%c",newline);
	    	for(i=1;i<=80;i++)
			   printf("+");
			ch=getch();
			sleep(1);
			if((ch!='n')||(ch!='N'))
				system("cls");
			printf("%c",newline);
	    	for(i=1;i<=80;i++)
		  		 printf("+");
		   	z1=11;
	   }
	   else
	   {
	   		fp1=fopen("f:\\sks1.dat","wb");
			fp=fopen("f:\\sks2.dat","rb");
			printf("ENTER THE REGISTRATION NUMBER OF THE STUDENT:-");
			scanf("%d",&num);
			rewind(fp);
			printf("\n");
			while(fread(&s1,sizeof(s1),1,fp)>0)
			{
				if(s1.reg==num)
				{
					printf("\nTHAT REGISTRATION NUMBER IS ALREADY PRESENT\n");
					l=9;
	   			}
				fwrite(&s1,sizeof(s1),1,fp1);
			}
			if(l!=9)
			{
		    	s1.reg=num;
		    	sleep(1);
				printf("%c",newline);
				for(i=1;i<=80;i++)
		   			printf("-");
		    	printf("%c",newline);
				for(i=1;i<=25;i++)
	   				printf("%c",space);
				printf("||:ENTER STUDENT DETAILS:||\n");
				printf("%c",newline);
				for(i=1;i<=80;i++)
		   			printf("-");
				sleep(1);
				fflush(stdin);
				printf("%c",newline);
				printf("ENTER NAME =");
			    fflush(stdin);
				gets(s);
		  	    strupr(s);
				strcpy(s1.nm,s);
				sleep(1);
				fflush(stdin);
				printf("ENTER ADDRESS =");
				gets(s);
		   		strupr(s);
				strcpy(s1.add,s);
				sleep(1);
				fflush(stdin);
				printf("ENTER COURSE =");
				gets(s);
		     	strupr(s);
				strcpy(s1.crs,s);
				sleep(1);
				fflush(stdin);
				printf("%c",newline);
				for(i=1;i<=80;i++)
		  			printf("-");
		   		printf("%c",newline);
				sleep(1);
				printf("%c",newline);
				printf("%c",newline);
				for(i=1;i<=80;i++)
		   			printf("-");
		  	    printf("%c",newline);
				for(i=1;i<=25;i++)
	    			printf("%c",space);
				printf("||:ENTER MARKS DETAILS:||\n");
				printf("%c",newline);
				for(i=1;i<=80;i++)
		  			printf("-");
				sleep(1);
				printf("%c",newline);
				printf("ENTER MARKS OF COA:-");
				scanf("%d",&s1.sub1);
				printf("ENTER MARKS OF DBMS:-");
				scanf("%d",&s1.sub2);
				printf("ENTER MARKS OF DAA:-");
				scanf("%d",&s1.sub3);
				printf("ENTER MARKS OF FLAT:-");
				scanf("%d",&s1.sub4);
				printf("ENTER MARKS OF MATH:-");
				scanf("%d",&s1.sub5);
				printf("ENTER MARKS OF ECONOMICS:-");
				scanf("%d",&s1.sub6);
				printf("%c",newline);
				fwrite(&s1,sizeof(s1),1,fp1);
			}
			fclose(fp);
			fclose(fp1);
			remove("f:\\sks2.dat");
			rename("f:\\sks1.dat","f:\\sks2.dat");
			system("pause");
    		system("cls");
    		for(i=0;i<=10;i++)
				printf("%c",newline);
			for(i=1;i<=79;i++)
				printf("-");
			printf("%c",newline);
			for(i=1;i<=11;i++)
				printf("%c",space);	
			printf("DO YOU WANT TO ENTER ANOTHER REGISTRATION No.(y/n)\n");
			for(i=1;i<=79;i++)
				printf("-");
			printf("\n");
			ch=getch();
			sleep(1);
			fflush(stdin);
			system("cls");
			l=0;
	
	 	}
		
	}
	printf("%c",newline);
	printf("\nDATA WRITTEN SUCCESFULLY\n");
	printf("%c",newline);
	for(i=1;i<=80;i++)
		printf("-");	
	system("pause");
	system("cls");
	fclose(fp);
}
void details()
{
	system("color B4");
	system("cls");
	sleep(1);
	int i,j=1;
	FILE *fp;
	char ch='y';
	fp=fopen("f:\\sks2.dat","rb");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c\n",newline);
	for(i=1;i<=29;i++)
		printf("%c",space);	
	printf("STUDENTS' DETAILS\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c",newline);
	if(fp==NULL)
		printf("cannot open file");
	while(fread(&s1,sizeof(s1),1,fp)>0)
	{
		sleep(1);
		printf("%c",newline);
	    for(i=1;i<=35;i++)
	    	printf("%c",space);
	    printf("STUDENT%d",j);
	    j=j+1;
    	printf("%c",newline);
		for(i=1;i<=80;i++)
			printf("-");
	    printf("NAME:-%s\n",s1.nm);
	    printf("REG.NO.:-%d\n",s1.reg);
	    printf("ADDRESS:-%s\n",s1.add);
	    printf("COURSE:-%s\n",s1.crs);
    	printf("%c",newline);
		for(i=1;i<=80;i++)
			printf("-");
		printf("%c",newline);
	}
	fclose(fp);
	system("pause");
	system("cls");
}
void modify()
{
	system("color B4");
	FILE *fp1;
	FILE *fp;
	int num,i,z=0,k=0;
	char ch,s[50];
	system("cls");
	sleep(1);
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c\n",newline);
	for(i=1;i<=23;i++)
		printf("%c",space);	
	printf("MODIFY STUDENTS' DETAILS\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c",newline);
	fp1=fopen("f:\\sks1.dat","wb");
	fp=fopen("f:\\sks2.dat","rb");
	printf("ENTER THE REGISTRATION NUMBER OF THE STUDENT:-");
	scanf("%d",&num);
	rewind(fp);
	printf("\n");
	while(fread(&s1,sizeof(s1),1,fp)>0)
	{
		if(s1.reg==num)
		{
			sleep(1);
			printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("-");
	    	printf("NAME:-%s\n",s1.nm);
	    	printf("ADDRESS:-%s\n",s1.add);
	    	printf("COURSE:-%s\n",s1.crs);
    		printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("-");
			printf("%c",newline);
			fflush(stdin);
			printf("\nENTER THE NEW NAME:");
			gets(s);
		    strupr(s);
			strcpy(s1.nm,s);
			sleep(1);
			fflush(stdin);
			printf("ENTER THE NEW ADDRESS:");
			gets(s);
			strupr(s);
			strcpy(s1.add,s);
			sleep(1);
			fflush(stdin);
			printf("ENTER THE NEW COURSE:");
			gets(s);
			strupr(s);
			strcpy(s1.crs,s);
			sleep(1);
			fflush(stdin);
			fwrite(&s1,sizeof(s1),1,fp1);
			z=z+1;
		}
		else
		{
			fwrite(&s1,sizeof(s1),1,fp1);
		}
	}
	if(z==0)
    {
	printf("%c%c",newline,newline);
	for(i=0;i<=14;i++)
		printf("%c",space);
	printf("||:REGISTRATION NUMBER IS NOT FOUND:||\n\n");
	}
   
	fclose(fp);
	fclose(fp1);
	remove("f:\\sks2.dat");
	rename("f:\\sks1.dat","f:\\sks2.dat");
	system("pause");
	system("cls");
	for(i=0;i<=10;i++)
		printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	printf("%c",newline);
	for(i=1;i<=11;i++)
		printf("%c",space);	
	printf("DO YOU WANT TO ENTER ANOTHER REGISTRATION No.(y/n)\n");
	for(i=1;i<=79;i++)
		printf("-");
	printf("\n");
	ch=getch();
	sleep(1);
	fflush(stdin);
	system("cls");
	if((ch=='y')||(ch=='Y'))
	{
		modify();
		k=1;
	}
	if(k==0)
	{
		printf("%c",newline);
		printf("\n\nDATA MODIFIED SUCCESFULLY\n\n\n");
		system("pause");
		system("cls");
	}	
}
void del()
{
	system("color B4");
	FILE *fp1;
	FILE *fp;
	int num,i,z=0,k=0;
	char ch;
	system("cls");
	sleep(1);
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c%c",newline,newline);
	for(i=1;i<=23;i++)
		printf("%c",space);	
	printf("DELETE STUDENTS' DETAILS\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c",newline);
	fp1=fopen("f:\\sks1.dat","wb");
	fp=fopen("f:\\sks2.dat","rb");
	sleep(1);
	printf("ENTER THE REGISTRATION NUMBER OF THE STUDENT:-");
	scanf("%d",&num);
	printf("\n");
	rewind(fp);
	while(fread(&s1,sizeof(s1),1,fp)>0)
	{
		if(s1.reg==num)
		{
			printf("%c",newline);
			sleep(1);
			printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("-");
			sleep(1);
	    	printf("NAME:-%s\n",s1.nm);
	    	sleep(1);
	    	printf("ADDRESS:-%s\n",s1.add);
	    	sleep(1);
	    	printf("COURSE:-%s\n",s1.crs);
	    	sleep(1);
    		printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("-");
			printf("%c",newline);
			printf("%c",newline);
			printf("%c",newline);
			z=1;
		}
		else
		{
			fwrite(&s1,sizeof(s1),1,fp1);
		}
	}
	if(z==0)
	{
	printf("%c%c",newline,newline);
	for(i=0;i<=14;i++)
	printf("%c",space);
	printf("||:REGISTRATION NUMBER IS NOT FOUND:||\n\n");
    }
	fclose(fp);
	fclose(fp1);
	remove("f:\\sks2.dat");
	rename("f:\\sks1.dat","f:\\sks2.dat");
	system("pause");
    system("cls");
    for(i=0;i<=10;i++)
		printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	printf("%c",newline);
	for(i=1;i<=11;i++)
		printf("%c",space);	
	printf("DO YOU WANT TO ENTER ANOTHER REGISTRATION No.(y/n)\n");
	for(i=1;i<=79;i++)
		printf("-");
	printf("\n");
	ch=getch();
	sleep(1);
	fflush(stdin);
	system("cls");
	if((ch=='y')||(ch=='Y'))
	{
		del();
		k=1;
	}
	if(k==0)
	{
		printf("%c",newline);
		printf("\nDATA DELETED SUCCESFULLY\n\n\n");
		system("pause");
		system("cls");
		printf("%c",newline);
	}	
}
void marksdetail()
{
	system("color B4");
	system("cls");
	sleep(1);
	int i,j=1;
	FILE *fp;
	char ch='y';
	fp=fopen("f:\\sks2.dat","rb");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c\n",newline);
	for(i=1;i<=29;i++)
		printf("%c",space);	
	printf("STUDENT MARKS DETAIL\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c",newline);
	if(fp==NULL)
		printf("cannot open file");
	while(fread(&s1,sizeof(s1),1,fp)>0)
	{
		sleep(1);
		printf("%c",newline);
	    for(i=1;i<=35;i++)
	    	printf("%c",space);
	    printf("STUDENT%d",j);
	    j=j+1;
    	printf("%c",newline);
		for(i=1;i<=80;i++)
			printf("+");
	    printf("NAME:-%s\n",s1.nm);
	    printf("REG.NO.:-%d\n",s1.reg);
	    printf("%c",newline);
		for(i=1;i<=80;i++)
			printf("-");
	    for(i=1;i<=35;i++)
	    	printf("%c",space);
	    printf("MARKS");
	    printf("%c",newline);
		for(i=1;i<=80;i++)
			printf("-");
		printf("%c",newline);
		printf("\t** COA\tDBMS\tDAA\tFLAT\tMATH\tECONOMICS**\n");
		printf("\t|| %d\t%d\t%d\t%d\t%d\t  %d     ||",s1.sub1,s1.sub2,s1.sub3,s1.sub4,s1.sub5,s1.sub6);
    	printf("%c",newline);
		for(i=1;i<=80;i++)
			printf("+");
		printf("%c",newline);
	}
	fclose(fp);
	system("pause");
	system("cls");
}
void report()
{
	system("color B4");
	FILE *fp1;
	int i,j=0,k,l=0,n=0,a1=0;
	float m;
	char ch='y',z;
	system("cls");
	fp1=fopen("f:\\sks2.dat","rb");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c\n",newline);
	for(i=1;i<=29;i++)
		printf("%c",space);	
	printf("STUDENT REPORT CARD\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c",newline);
	printf("ENTER THE REGISTRATION NUMBER OF THE STUDENT:-");
	scanf("%d",&i);
	printf("\n");
	if(fp1==NULL)
		printf("cannot open file");
	while(fread(&s1,sizeof(s1),1,fp1)>0)	
	{
		if(s1.reg==i)
		{
			l=s1.sub1+s1.sub2+s1.sub3+s1.sub4+s1.sub5+s1.sub6;
			m=l/6;
			printf("%c",newline);
	        for(i=1;i<=79;i++)
		    	printf("-");
		    printf("%c",newline);
		    for(i=1;i<=25;i++)
		    	printf("%c",space);	
			printf("LOADING REPORT CARD");
			printf("%c",newline);
	    	for(i=1;i<=79;i++)
		    	printf("-");
			printf("%c",newline);
			printf("%c",newline);
		    for(i=1;i<=25;i++)
		    	printf("%c",space);	
			for(i=0;i<19;i++)
			{
				usleep(100000);
				printf("*");
			}
			system("cls");
			printf("%c",newline);
	        for(i=1;i<=79;i++)
		    	printf("+");
		    printf("%c",newline);
		    for(i=1;i<=17;i++)
		    	printf("%c",space);
		    printf("||BIJU PATNAIK UNIVERSITY OF TECHNOLOGY||\n");
		    for(i=1;i<=17;i++)
		    	printf("%c",space);
		    for(i=0;i<41;i++)
		    	printf("-");
		    printf("\n");
		    for(i=1;i<=31;i++)
		    	printf("%c",space);	
			printf("REPORT CARD");
			printf("%c",newline);
	    	for(i=1;i<=79;i++)
		   	 	printf("+");
			printf("%c",newline);
			printf("%c",newline);
	    	for(i=1;i<=79;i++)
		    	printf("_");
			printf("\nNAME:-%s\n",s1.nm);
			for(i=1;i<=79;i++)
		    	printf("-");
		    printf("\nREGISTRATION No.:-%d\n",s1.reg);
			for(i=1;i<=79;i++)
		    	printf("-");
		    printf("\nCOURSE:-%s\n",s1.crs);
			for(i=1;i<=79;i++)
		    	printf("_");
		    printf("\n");	
			printf("\n\t\t|-SUBJECT-|\t|-GRADE-|\t|-MARKS-|\n");
			z=grade(s1.sub1);
			printf("  \t\t    COA\t\t    %c\t\t    %d\n",z,s1.sub1);
			z=grade(s1.sub2);
			printf("  \t\t    DBMS\t    %c\t\t    %d\n",z,s1.sub2);
			z=grade(s1.sub3);
			printf("  \t\t    DAA\t\t    %c\t\t    %d\n",z,s1.sub3);
			z=grade(s1.sub4);
			printf("  \t\t    FLAT\t    %c\t\t    %d\n",z,s1.sub4);
			z=grade(s1.sub5);
			printf("  \t\t    MATH\t    %c\t\t    %d\n",z,s1.sub5);
			z=grade(s1.sub6);
			printf("  \t\t  ECONOMICS\t    %c\t\t    %d\n",z,s1.sub6);
			for(i=1;i<=79;i++)
		    	printf("_");
		    printf("\n");
		    printf("TOTAL MARKS:-%d\n",l);
		    for(i=1;i<=79;i++)
		    	printf("-");
		    if((s1.sub1>=40)&&(s1.sub2>=40)&&(s1.sub3>=40)&&(s1.sub4>=40)&&(s1.sub5>=40)&&(s1.sub6>=40))
		    {
		    	z=grade(m);
		    	printf("\nAVERAGE GRADE:-%c\n",z);
		    	a1=1;
			}
			else
			printf("\nAVERAGE GRADE:-F\n");
			for(i=1;i<=79;i++)
		    	printf("-");
		    printf("\nREMARK:-");
		    if(a1==1)
		    {
		    	if(m>=90)
		    		printf("OUTSTANDING\n");
		    	else if(m>=80)
		    		printf("EXCELLENT\n");
		    	else if(m>=70)
		    		printf("VERY GOOD\n");
		    	else if(m>=60)
		    		printf("GOOD\n");
		    	else if(m>=50)
		    		printf("AVERAGE\n");
		    	else if(m>=40)
		    		printf("POOR\n");
		    	else
		    		printf("FAIL\n");
			}
			else
		    	printf("FAIL\n");
			for(i=1;i<=79;i++)
		    	printf("_");
		    printf("\n");
			system("pause");
			system("cls");
			n=1;
		}
	}
	if(n==0)
	{
        printf("%c",newline);
	    for(i=1;i<=79;i++)
			printf("-");
		printf("%c",newline);
		for(i=1;i<=11;i++)
			printf("%c",space);	
		printf("THAT REGISTRATION NUMBER IS NOT PRESENT IN THE DATABASE\n");
		printf("%c",newline);
	    for(i=1;i<=79;i++)
			printf("-");
		printf("%c",newline);	
		system("pause");
		system("cls");		
	}
	fclose(fp1);
	for(i=0;i<=10;i++)
		printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	printf("%c",newline);
	for(i=1;i<=11;i++)
		printf("%c",space);	
	printf("DO YOU WANT TO ENTER ANOTHER REGISTRATION No.(y/n)\n");
	for(i=1;i<=79;i++)
		printf("-");
	printf("\n");
	ch=getch();
	sleep(1);
	if((ch=='y')||(ch=='Y'))
		report();
	system("cls");
}
char grade(int x)
{
	if(x>=90)
		return 'O';
	else if(x>=80)
		return 'E';
	else if(x>=70)
		return 'A';
	else if(x>=60)
		return 'B';
	else if(x>=50)
		return 'C';
	else if(x>=40)
		return 'D';
	else
		return 'F';
}
void modifymarks()
{
	system("color B4");
	FILE *fp1;
	FILE *fp;
	int num,i,z=0,k=0;
	char ch,s[50];
	system("cls");
	sleep(1);
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("+");
	printf("%c\n",newline);
	for(i=1;i<=21;i++)
		printf("%c",space);	
	printf("MODIFY STUDENTS MARKS DETAILS\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("+");
	printf("%c",newline);
	fp1=fopen("f:\\sks1.dat","wb");
	fp=fopen("f:\\sks2.dat","rb");
	printf("ENTER THE REGISTRATION NUMBER OF THE STUDENT:-");
	scanf("%d",&num);
	printf("\n");
	rewind(fp);
	while(fread(&s1,sizeof(s1),1,fp)>0)
	{
		if(s1.reg==num)
		{
			sleep(1);
			printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("_");
	    	printf("NAME:-%s\n",s1.nm);
	    	printf("COURSE:-%s\n",s1.crs);
	    	for(i=1;i<=80;i++)
				printf("-");
			for(i=0;i<27;i++)
				printf("%c",space);
			printf("||:MARKS:||\n\n");
			printf("\tCOA\tDBMS\tDAA\tFLAT\tMATH\tECONOMICS\n");
			printf("\t %d \t %d  \t %d \t %d  \t %d  \t   %d\n",s1.sub1,s1.sub2,s1.sub3,s1.sub4,s1.sub5,s1.sub6);
    		printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("_");
			printf("%c",newline);
			fflush(stdin);
			printf("\nENTER NEW MARKS OF COA:");
			scanf("%d",&s1.sub1);
			sleep(1);
			fflush(stdin);
			printf("ENTER NEW MARKS OF DBMS:");
			scanf("%d",&s1.sub2);
			sleep(1);
			fflush(stdin);
			printf("ENTER NEW MARKS OF DAA:");
			scanf("%d",&s1.sub3);
			sleep(1);
			fflush(stdin);
			printf("ENTER NEW MARKS OF FLAT:");
			scanf("%d",&s1.sub4);
			sleep(1);
			fflush(stdin);
			printf("ENTER NEW MARKS OF MATH:");
			scanf("%d",&s1.sub5);
			sleep(1);
			fflush(stdin);
			printf("ENTER NEW MARKS OF ECONOMICS:");
			scanf("%d",&s1.sub6);
			sleep(1);
			fflush(stdin);
			fwrite(&s1,sizeof(s1),1,fp1);
			z=z+1;
		}
		else
			fwrite(&s1,sizeof(s1),1,fp1);
	}
	if(z==0)
	printf("\nREGISTRATION NUMBER IS NOT FOUND\n\n");
	printf("\n\n");
	system("pause");
	fclose(fp);
	fclose(fp1);
	remove("f:\\sks2.dat");
	rename("f:\\sks1.dat","f:\\sks2.dat");
	system("cls");
	for(i=0;i<=10;i++)
		printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	printf("%c",newline);
	for(i=1;i<=11;i++)
		printf("%c",space);	
	printf("DO YOU WANT TO ENTER ANOTHER REGISTRATION No.(y/n)\n");
	for(i=1;i<=79;i++)
		printf("-");
	printf("\n");
	ch=getch();
	sleep(1);
	if((ch=='y')||(ch=='Y'))
	{
		modifymarks();
		k=1;
	}
	if(k==0)
	{
		printf("%c",newline);
	    printf("\nDATA MODIFIED SUCCESFULLY\n\n\n");
		system("pause");
		system("cls");
	}
}
void deletemarks()
{
	system("color B4");
	FILE *fp1;
	FILE *fp;
	int num,i,z=0,k=0;
	char ch,s[50];
	system("cls");
	sleep(1);
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("+");
	printf("%c\n",newline);
	for(i=1;i<=21;i++)
		printf("%c",space);	
	printf("DELETE STUDENTS MARKS DETAILS\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("+");
	printf("%c",newline);
	fp1=fopen("f:\\sks1.dat","wb");
	fp=fopen("f:\\sks2.dat","rb");
	printf("ENTER THE REGISTRATION NUMBER OF THE STUDENT:-");
	scanf("%d",&num);
	printf("\n");
	rewind(fp);
	while(fread(&s1,sizeof(s1),1,fp)>0)
	{
		if(s1.reg==num)
		{
			sleep(1);
			printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("_");
	    	printf("NAME:-%s\n",s1.nm);
	    	printf("COURSE:-%s\n",s1.crs);
	    	for(i=1;i<=80;i++)
				printf("-");
			for(i=0;i<27;i++)
				printf("%c",space);
			printf("||:MARKS:||\n\n");
			printf("\tCOA\tDBMS\tDAA\tFLAT\tMATH\tECONOMICS\n");
			printf("\t %d \t %d  \t %d \t %d  \t %d  \t   %d\n",s1.sub1,s1.sub2,s1.sub3,s1.sub4,s1.sub5,s1.sub6);
    		printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("_");
			printf("%c",newline);
			fflush(stdin);
			s1.sub1=-1;
			s1.sub2=-1;
			s1.sub3=-1;
			s1.sub4=-1;
			s1.sub5=-1;
			s1.sub6=-1;
			fwrite(&s1,sizeof(s1),1,fp1);
			z=z+1;
		}
		else
			fwrite(&s1,sizeof(s1),1,fp1);
	}
	if(z==0)
	printf("\nREGISTRATION NUMBER IS NOT FOUND\n\n");
	printf("%c%c",newline,newline);
	system("pause");
	fclose(fp);
	fclose(fp1);
	remove("f:\\sks2.dat");
	rename("f:\\sks1.dat","f:\\sks2.dat");
	system("cls");
	for(i=0;i<=10;i++)
		printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	printf("%c",newline);
	for(i=1;i<=11;i++)
		printf("%c",space);	
	printf("DO YOU WANT TO ENTER ANOTHER REGISTRATION No.(y/n)\n");
	for(i=1;i<=79;i++)
		printf("-");
	printf("\n");
	ch=getch();
	sleep(1);
	if((ch=='y')||(ch=='Y'))
	{
		deletemarks();
		k=1;
	}
	if(k==0)
	{
		system("cls");
		printf("%c",newline);
	    printf("\nDATA DELETED SUCCESFULLY\n\n\n");
		system("pause");
		system("cls");
	}	
}
void find()
{
	system("color B4");
	system("cls");
	sleep(1);
	int i,j=1,k,z=0;
	FILE *fp;
	char ch='y';
	fp=fopen("f:\\sks2.dat","rb");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c\n",newline);
	for(i=1;i<=29;i++)
		printf("%c",space);	
	printf("FIND STUDENT DETAIL\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("*");
	printf("%c",newline);
	if(fp==NULL)
		printf("cannot open file");
	printf("\nENTER THE REGISTRATION NUMBER OF THE STUDENT:-");
	scanf("%d",&k);
	printf("\n");
	while(fread(&s1,sizeof(s1),1,fp)>0)
	{
		if(k==s1.reg)
		{
		 	sleep(1);
			printf("%c",newline);
	     	for(i=1;i<=35;i++)
	    		printf("%c",space);
	    	printf("STUDENT%d",j);
	    	j=j+1;
    		printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("-");
	    	printf("NAME:-%s\n",s1.nm);
	    	printf("REG.NO.:-%d\n",s1.reg);
	    	printf("ADDRESS:-%s\n",s1.add);
	    	printf("COURSE:-%s\n",s1.crs);
    		printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("-");
			printf("%c",newline);
			z=1;
		}
	}
	if(z==0)
		printf("REGISTRATION NUMBER NOT FOUND\n");
	printf("%c%c",newline,newline);
	system("pause");
	system("cls");
	fclose(fp);
	for(i=0;i<=10;i++)
		printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	printf("%c",newline);
	for(i=1;i<=11;i++)
		printf("%c",space);	
	printf("DO YOU WANT TO ENTER ANOTHER REGISTRATION No.(y/n)\n");
	for(i=1;i<=79;i++)
		printf("-");
	printf("\n");
	ch=getch();
	sleep(1);
	if((ch=='y')||(ch=='Y'))
		find();
	system("cls");
}
void addmarks()
{
	system("color B4");	
	FILE *fp1;
	FILE *fp;
	int num,i,z=0,k=0;
	char ch,s[50];
	system("cls");
	sleep(1);
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("+");
	printf("%c\n",newline);
	for(i=1;i<=21;i++)
		printf("%c",space);	
	printf("ADD STUDENTS MARKS DETAILS\n");
	printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("+");
	printf("%c",newline);
	fp1=fopen("f:\\sks1.dat","wb");
	fp=fopen("f:\\sks2.dat","rb");
	printf("ENTER THE REGISTRATION NUMBER OF THE STUDENT:-");
	scanf("%d",&num);
	printf("\n");
	rewind(fp);
	while(fread(&s1,sizeof(s1),1,fp)>0)
	{
		if(s1.reg==num)
		{
			sleep(1);
			printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("_");
	    	printf("NAME:-%s\n",s1.nm);
	    	printf("COURSE:-%s\n",s1.crs);
    		printf("%c",newline);
			for(i=1;i<=80;i++)
				printf("_");
			printf("%c",newline);
			if((s1.sub1==-1)&&(s1.sub2==-1)&&(s1.sub3==-1)&&(s1.sub4==-1)&&(s1.sub5==-1)&&(s1.sub6==-1))
			{
			fflush(stdin);
			printf("\nENTER MARKS OF COA:");
			scanf("%d",&s1.sub1);
			sleep(1);
			fflush(stdin);
			printf("ENTER MARKS OF DBMS:");
			scanf("%d",&s1.sub2);
			sleep(1);
			fflush(stdin);
			printf("ENTER MARKS OF DAA:");
			scanf("%d",&s1.sub3);
			sleep(1);
			fflush(stdin);
			printf("ENTER MARKS OF FLAT:");
			scanf("%d",&s1.sub4);
			sleep(1);
			fflush(stdin);
			printf("ENTER MARKS OF MATH:");
			scanf("%d",&s1.sub5);
			sleep(1);
			fflush(stdin);
			printf("ENTER MARKS OF ECONOMICS:");
			scanf("%d",&s1.sub6);
			sleep(1);
			fflush(stdin);
			z=z+1;
		    }
		    else
		    {
		    	printf("\n\n");
		    	for(i=0;i<23;i++)
		    	printf("%c",space);
		    	printf("||:MARKS ALREADY PRESENT:||\n\n");
		    	z=z+1;
			}
			fwrite(&s1,sizeof(s1),1,fp1);
		}
		else
			fwrite(&s1,sizeof(s1),1,fp1);
	}
	if(z==0)
	printf("\nREGISTRATION NUMBER IS NOT FOUND\n\n");
	system("pause");
	fclose(fp);
	fclose(fp1);
	remove("f:\\sks2.dat");
	rename("f:\\sks1.dat","f:\\sks2.dat");
	system("cls");
	for(i=0;i<=10;i++)
		printf("%c",newline);
	for(i=1;i<=79;i++)
		printf("-");
	printf("%c",newline);
	for(i=1;i<=11;i++)
		printf("%c",space);	
	printf("DO YOU WANT TO ENTER ANOTHER REGISTRATION No.(y/n)\n");
	for(i=1;i<=79;i++)
		printf("-");
	printf("\n");
	ch=getch();
	sleep(1);
	if((ch=='y')||(ch=='Y'))
	{
		addmarks();
		k=1;
	}
	if(k==0)
	{
		printf("%c",newline);
	    printf("\nDATA WRITTEN SUCCESFULLY\n\n\n");
		system("pause");
		system("cls");
	}
}










