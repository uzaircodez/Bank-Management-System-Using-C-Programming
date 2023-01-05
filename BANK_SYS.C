#include<stdio.h>
#include<conio.h>
#include<string.h>
void login();
void sign();
void login()
{
	int Id=54321,pass=9876,cardno=12345,cardno1,pinno=6789,login,balance=1000,rate,amt1,amt2,amt3,total1,total2,total3,name,ifsc;
	char A;
	char option;
	char res;

	LOGIN1:

	printf("ENTER YOUR Login ID :\n");
	scanf("%d",&Id);
	printf("ENTER YOUR Password :\n");
	scanf("%d",&pass);
		if(pass==9876)
		{
			printf("\n\n You've Successfully Logged In");
			goto LOGIN;
		}
		else
		{
			printf("\n\n WRONG Password");
			goto LOGIN1;
		}

		LOGIN:
			printf("\n\n\t\t   WHICH TRANSACTION WOULD YOU LIKE TO DO:\n");
		      printf("\n\n* * * * * * * * * * * * * *");
			printf("\n*                         *");
			printf("\n*  1: CHECK BALANCE       *");
			printf("\n*  2: WITHDRAW MONEY      *");
			printf("\n*  3: DEPOSIT MONEY       *");
			printf("\n*  4: SEND MONEY          *");
			printf("\n*  5: EXIT                *");
			printf("\n*                         *");
			printf("\n* * * * * * * * * * * * * *");
			printf("\n");
			scanf("%d",&login);
	switch(login)
	     {
		case 1:

		clrscr();
		printf("\n\n\t\t\t* YOU HAVE SELECTED CHECK BALANCE OPTION *");

		printf("\n\n PLEASE ENTER YOUR BANK ACCOUNT NUMBER: ");
		scanf("%d",&cardno);
		printf("\n ENTER YOUR PIN: ");
		scanf("%d",&pinno);
		if(pinno==6789)
		{
			printf("\n\t\t YOUR BALANCE IS RS %d",balance);
		}
		else
		{
			printf("\n\t\t * INVALID PIN *");

		}

		printf("\n\n\t\t\t WOULD YOU LIKE TO PERFORM ANY OTHER ACTION?");
		printf("\n\n\t PRESS Y FOR YES \n\t PRESS N FOR NO \n\t WRITE YOUR RESPONSE: ");
		scanf("%s",&option);
		if(option=='Y')
		{
		goto LOGIN;
		}
		else
		{
			printf("\n\n\t\tTHANK YOU FOR USING OUR SERVICE");
		}
		printf("\n\n\t\tRATE OUR C BANKING SERVICE IN THE RANGE FROM 1 TO 10: \n WRITE YOUR RESPONSE: ");
		scanf("%d",&rate);
		if(rate > 0 && rate < 5)
		{
			printf("\n\t\tWHERE DO WE NEED TO IMPROVE? \n");
			scanf("%s",&res);
			printf("\n\t******* THANK YOU FOR USING C BANK *******");
		}
		else
		{
			printf("\n\t\t     YOUR RESPONSE HAVE BEEN RECORDED");
			printf("\n\n\t\t  THANK YOU FOR YOUR VALUEABLE FEEDBACK");
			printf("\n\n\t****** THANK YOU FOR USING C BANK *******");
		}
		break;


		case 2:

		clrscr();
		printf("\n\n\t\t\t** YOU HAVE SELECTED WITHDRAW MONEY OPTION **");

		printf("\n\n PLEASE ENTER YOUR BANK ACCOUNT NUMBER: ");
		scanf("%d",&cardno);
		printf("\n ENTER YOUR PIN: ");
		scanf("%d",&pinno);
		if(pinno==6789)
		{
			printf("\n\t\t YOUR BALANCE IS RS %d",balance);
		}
		else
		{
			printf("\n\t\t * INVALID PIN *");

		}
		printf("\n\n\t How much money do you want to withdraw from your account=");
		scanf("%d",&amt1);
		if(amt1>5000)
		{
			printf("\n\t You cannot withdraw these much money\n");
		}
		printf("\n\tFrom your account RS. %d has been WITHDRAWED \n",amt1);
		total1=balance-amt1;
		printf("\tYour Balance Now is %d",total1);

		printf("\n\n\t\t WOULD YOU LIKE TO PERFORM ANY OTHER ACTION?");
		printf("\n\n\t PRESS Y FOR YES \n\t PRESS N FOR NO \n\t WRITE YOUR RESPONSE: ");
		scanf("%s",&option);
		if(option=='Y')
		{
		goto LOGIN;
		}
		else
		{
			printf("\n\n\t\tTHANK YOU FOR USING OUR SERVICE");
		}
		printf("\n\n\t\tRATE OUR C BANKING SERVICE IN THE RANGE FROM 1 TO 10: \n WRITE YOUR RESPONSE: ");
		scanf("%d",&rate);
		if(rate > 0 && rate < 5)
		{
			printf("\n\t\tWHERE DO WE NEED TO IMPROVE? \n");
			scanf("%s",&res);
			printf("\n\t****** THANK YOU FOR USING C BANK ******");
		}
		else
		{
			printf("\n\t\t       YOUR RESPONSE HAVE BEEN RECORDED");
			printf("\n\n\t\t  THANK YOU FOR YOUR VALUEABLE FEEDBACK");
			printf("\n\n\t****** THANK YOU FOR USING C BANK ******");
		}
		break;

		case 3:

		clrscr();
		printf("\n\n\t\t\t*** YOU HAVE SELECTED DEPOSIT MONEY OPTION ***");

		printf("\n\n PLEASE ENTER YOUR BANK ACCOUNT NUMBER: ");
		scanf("%d",&cardno);
		printf("\n ENTER YOUR PIN: ");
		scanf("%d",&pinno);
		if(pinno==6789)
		{
			printf("\n\t\t YOUR BALANCE IS RS %d",balance);
		}
		else
		{
			printf("\n\t\t * INVALID PIN *");

		}
		printf("\n\n\t How much money do you want to DEPOSIT to your account : ");
		scanf("%d",&amt2);
		if(amt2>10000)
		{
			printf("\n\tYou cannot DEPOSIT these much money\n");
		}
		printf("\n\tIn your account RS. %d has been DEPOSITED.",amt2);
		total2=balance+amt2;
		printf("\tNow Your Account Balance  is %d",total2);

		printf("\n\n\t\t WOULD YOU LIKE TO PERFORM ANY OTHER ACTION?");
		printf("\n\n\t PRESS Y FOR YES \n\t PRESS N FOR NO \n\t WRITE YOUR RESPONSE: ");
		scanf("%s",&option);
		if(option=='Y')
		{
		goto LOGIN;
		}
		else
		{
			printf("\n\n\t\tTHANK YOU FOR USING OUR SERVICE");
		}
		printf("\n\n\t\tRATE OUR C BANKING SERVICE IN THE RANGE FROM 1 TO 10: \n WRITE YOUR RESPONSE: ");
		scanf("%d",&rate);
		if(rate > 0 && rate < 5)
		{
			printf("\n\t\tWHERE DO WE NEED TO IMPROVE? \n");
			scanf("%s",&res);
			printf("\n\t\t****** THANK YOU FOR USING C BANK ******");
		}
		else
		{
			printf("\n\t\t     YOUR RESPONSE HAVE BEEN RECORDED");
			printf("\n\n\t\t  THANK YOU FOR YOUR VALUEABLE FEEDBACK");
			printf("\n\n\t\t****** THANK YOU FOR USING C BANK ******");
		}
		break;

		case 4:

		clrscr();
		printf("\n\n\t\t**** YOU HAVE SELECTED SEND MONEY OPTION ****");

		printf("\n\n PLEASE ENTER YOUR BANK ACCOUNT NUMBER: ");
		scanf("%d",&cardno);
		printf("\n ENTER YOUR PIN: ");
		scanf("%d",&pinno);
		if(pinno==6789)
		{
			printf("\n\t\t YOUR BALANCE IS RS %d",balance);
		}
		else
		{
			printf("\n\t\t * INVALID PIN *");

		}
		printf("\n\t Enter IFSC Code=");
		scanf("%d",&ifsc);
		printf("\n\t Enter Receiver's Account Number : ");
		scanf("%d",&cardno1);
		printf("\n\t Enter Receiver's Name :");
		scanf("%c",&name);
		printf("\n\t Enter The Amount You Want To Send\n");
		scanf("%d",&amt3);
		printf("\n\t You've successfully sent Rs.%d",amt3);
		total3=balance-amt3;
		printf("\n\t Your balance is %d",total3);

		printf("\n\n\t\t WOULD YOU LIKE TO PERFORM ANY OTHER ACTION?");
		printf("\n\n\t PRESS Y FOR YES \n\t PRESS N FOR NO \n\t WRITE YOUR RESPONSE: ");
		scanf("%s",&option);
		if(option=='Y')
		{
		goto LOGIN;
		}
		else
		{
			printf("\n\t\tTHANK YOU FOR USING OUR SERVICE");
		}
		printf("\n\n\t\tRATE OUR C BANKING SERVICE IN THE RANGE FROM 1 TO 10: \n WRITE YOUR RESPONSE: ");
		scanf("%d",&rate);
		if(rate > 0 && rate < 5)
		{
			printf("\n\t\tWHERE DO WE NEED TO IMPROVE? \n");
			scanf("%s",&res);
			printf("\n\t\t******** THANK YOU FOR USING C BANK ********");
		}
		else
		{
			printf("\n\t\t     YOUR RESPONSE HAVE BEEN RECORDED");
			printf("\n\n\t\t  THANK YOU FOR YOUR VALUEABLE FEEDBACK");
			printf("\n\n\t\t****** THANK YOU FOR USING C BANK *************");
		}
		break;

		case 5:

		clrscr();
		printf("\n\n\t\t\t***** YOU HAVE SELECTED EXIT OPTION *****");

		printf("\n\t\tTHANK YOU FOR USING OUR SERVICE");

		printf("\n\n\t\tRATE OUR C BANKING SERVICE IN THE RANGE FROM 1 TO 10: \n WRITE YOUR RESPONSE: ");
		scanf("%d",&rate);
		if(rate > 0 && rate < 5)
		{
			printf("\n\t\tWHERE DO WE NEED TO IMPROVE: \n");
			scanf("%s",&res);
			printf("\t\t******** THANK YOU FOR USING C BANK ********");
		}
		else
		{
			printf("\n\t\t     YOUR RESPONSE HAVE BEEN RECORDED");
			printf("\n\n\t\t  THANK YOU FOR YOUR VALUEABLE FEEDBACK");
			printf("\n\n\t\t****** THANK YOU FOR USING C BANK ******");
		}
		break;

	     }

}
       struct User
       {
	      char AadhaarNo[12];

	      int Age;

	      char Email[50];

	      long int Salary;

	      char Name[30];                 // Use Underscope Instead of Spacebar

	      int Gender;

	      char MobileNo[10];


       };

       void sign()
       {
	      int a,b,Ans;

	      struct User Use;

	      clrscr();

	   printf("\n\n\t\t\t     Enter details of Account Holder");

	      printf("\n ----------------------------------------------------------------------------- \n");


		    printf("\n Enter your Aadhaar No. : ");
		    scanf("%s",&Use.AadhaarNo);

		    printf("\n Enter your Full Name : ");
		    scanf("%s",&Use.Name);

		    gender1:

		    printf("\n Select Number as per your Gender : \n 1.Male \n 2.Female \n ");
		    scanf("%d",&Use.Gender);

		    if(Use.Gender==1)
		    {
			printf("\n Your Gender is Male \n");
			goto gender2;
		    }
		    else if(Use.Gender==2)
		    {
			printf("\n Your Gender is Female \n");
			goto gender2;
		    }
		    else
		    {
			printf("\n Invalid Gender \n");
			goto gender1;
		    }
		    gender2:

		    printf("\n Enter your Age : ");
		    scanf("%d",&Use.Age);

		    salary1:

		    printf("\n Are you Salaried? \n 1.Yes \n 2.No \n ");
		    scanf("%d",&Ans);

		    if(Ans==1)
		    {
			printf("\n Enter your Salary : Rs.");
			scanf("%ld",&Use.Salary);
		    }
		    else if(Ans==2)
		    {
			goto salary2;
		    }
		    else
		    {
			goto salary1;
		    }

		    salary2:
		    printf("\n Enter your Mobile No. : +91 ");
		    scanf("%s",&Use.MobileNo);

		    printf("\n Enter your Email : ");
		    scanf("%s",&Use.Email);
      printf("\n ---------------------------------------------------------------------------- ");

	   printf("\n\n\t\t\t      Account Holder's Details \n");

      printf("\n ---------------------------------------------------------------------------- ");


	      printf("\n\n Aadhaar No. : %s",Use.AadhaarNo);

	      printf("\n\n Name : %s",Use.Name);

	      if(Use.Gender==1)
	      {
		  printf("\n\n Gender : Male");

	      }
	      else
	      {
		  printf("\n\n Gender : Female");

	      }

	      printf("\n\n Age : %d",Use.Age);

	      if(Ans==1)
	      {
		   printf("\n\n Salary : Rs. %ld",Use.Salary);
	      }
	      else if(Ans==2)
	      {
		   printf("\n\n Salary : Rs. 0");
	      }
	      else
	      {
		   printf("Not Salaried");
	      }

	      printf("\n\n Mobile No. : +91 %s",Use.MobileNo);

	      printf("\n\n Email : %s",Use.Email);

	      printf("\n\n\t ****** YOU HAVE SUCCESSFULLY REGISTERED YOUR DETAILS ****** ");

	      printf("\n\n #YOUR ACCOUNT NUMBER IS 12345");

	      printf("\n\n\t\t   ******** THANK YOU VISIT AGAIN! ********");

      }

void main()
{
	int a,b;
	clrscr();
	   printf("\n\n\n\t\t      --------- WELCOME TO C BANK ---------");
	   printf("\n");
	   printf("\n\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	   printf("\n\t\t\t$                               $");
	   printf("\n\t\t\t$   WHAT DO YOU WANT TO DO ?    $");
	   printf("\n\t\t\t$                               $");
	   printf("\n\t\t\t$   1. LOG IN                   $");
	   printf("\n\t\t\t$   2. CREATE NEW ACCOUNT       $");
	   printf("\n\t\t\t$                               $");
	   printf("\n\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n\t\t\t");
	   scanf("%d",&a);

	switch(a)
	{
		case 1:
		login();
		break;
		case 2:
		sign();
		break;
		default:
		break;
	}
	getch();
}