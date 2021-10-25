//Name:Teertho Kamol Goshami Likhon
//ID:201-35-3032
//Sec:B
//Project:Customer Invoice System

#include <stdio.h>
#include <stdlib.h>
int pin = 1234, bkash_pin;
int n = 11;
int num[11];
void send_money();
void send_non_bkash();
void mobile_recharge();
void payment();
void cashout();
void paybill();
void get_fifty_tk();
void mybkash();
void reset_pin();
int main()
{
	int choice;
	int option;

	while (option)
	{

		//Available options
		printf("\n\tCarrier info:\n");
		printf("\t1: Send money\n");
		printf("\t2: Send Money to Non-bKash User\n");
		printf("\t3: Mobile Recharge\n");
		printf("\t4: Payment\n");
		printf("\t5: Cash Out\n");
		printf("\t6: Pay Bill\n");
		printf("\t7: 50Tk Cashback on Today Recharge\n");
		printf("\t8: My bkash\n");
		printf("\t9: Reset PIN\n");
		printf("\n\tPlease choose your option: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			send_money();
			break;
		case 2:
			send_non_bkash();
			break;
		case 3:
			mobile_recharge();
			break;
		case 4:
			payment();
			break;
		case 5:
			cashout();
			break;
		case 6:
			paybill();
			break;
		case 7:
			get_fifty_tk();
			break;
		case 8:
			mybkash();
			break;
		case 9:
			reset_pin();
			break;

		default:
			printf("Please select options\n");
		}
		printf("Press Number To Return Home:\n");
		scanf("%d", &option);
		if (option == 1)
		{
			system("cls");
		}
	}
	return 0;
}

void send_money()
{
	int account_number, ammount, bkash_pin;

	//send money file
	FILE *money;
	money = fopen("money_r.txt", "a");

	if (money == NULL)
	{
		printf("Your Account Does Not Have Enough Balance.\n");
	}
	else
	{
		fflush(stdin);

		printf("Enter bkash Account Number:\n");
		for (int i = 0; i <= n; i++)
		{
			scanf("%d", &num[i]);
		}
		//{
		//printf("This bkash Number Not Valid.\n");
		//}

		printf("Enter Ammount:\n");
		scanf("%d", &ammount);
		scanf("%d", &account_number);
		printf("Enter Ammount:\n");
		scanf("%d", &ammount);
		printf("Enter bkash PIN:\n");
		scanf("%d", &bkash_pin);

		if (bkash_pin == pin)
		{
			printf("Send Money Successful.\n");
		}
		else
		{
			printf("Pin error! Retry.\n");
		}

		fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", account_number, ammount, bkash_pin);
		fclose(money);
	}
}
void send_non_bkash()
{
	int send_non_bkash, ammount, bkash_pin;

	FILE *money;
	money = fopen("money_r.txt", "a");

	if (money == NULL)
	{
		printf("Your Account Does Not Have Enough Balance.\n");
	}
	else
	{

		printf("Enter bkash Send Non-bkash Number:\n");
		scanf("%d", &send_non_bkash);
		printf("Enter Ammount:\n");
		scanf("%d", &ammount);
		printf("Enter bkash Pin:\n");
		scanf("%d", &bkash_pin);

		if (bkash_pin == pin)
		{
			printf("Send Money Successful.\n");
		}
		else
		{
			printf("Pin error! Retry.\n");
		}

		fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", send_non_bkash, ammount);
		fclose(money);
	}
}
void mobile_recharge()
{
	int oparator, oparator_number, ammount, bkash_pin;

	FILE *money;
	money = fopen("money_r.txt", "a");

	if (money == NULL)
	{
		printf("Your Account Does Not Have Enough Balance.\n");
	}
	else
	{

		printf("bkash\n");
		printf("1: Robi\n");
		printf("2: Airtel\n");
		printf("3: Banglalink\n");
		printf("4: Grameenphone\n");
		printf("5: Teletalk\n");
		printf("Select Oparator:\n");
		scanf("%d", &oparator);
		printf("Enter Oparator Number:\n");
		scanf("%d", &oparator_number);
		printf("Enter Ammount:\n");
		scanf("%d", &ammount);
		printf("Enter bkash PIN:\n");
		scanf("%d", &bkash_pin);

		if (bkash_pin == pin)
		{
			printf("Mobile Recharge Successful.\n");
		}
		else
		{
			printf("Pin error! Retry\n");
		}
		fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", oparator, ammount);
		fclose(money);
	}
}
void payment()
{
	int payment_number, ammount, bkash_pin;

	FILE *money;
	money = fopen("money_r.txt", "a");

	if (money == NULL)
	{
		printf("Your Account Does Not Have Enough Balance..\n");
	}
	else
	{

		printf("Enter bkash Payment Number:\n");
		scanf("%d", &payment_number);
		printf("Enter Ammount:\n");
		scanf("%d", &ammount);
		printf("Enter bkash PIN:\n");
		scanf("%d", &bkash_pin);

		if (bkash_pin == pin)
		{
			printf("Payment Successful.\n");
		}
		else
		{
			printf("Pin error! Retry.\n");
		}

		fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", payment_number, ammount);
		fclose(money);
	}
}
void cashout()
{
	int cashout_number, ammount, bkash_pin;

	FILE *money;
	money = fopen("money_r.txt", "a");

	if (money == NULL)
	{
		printf("Your Account Does Not Have Enough Balance.\n");
	}
	else
	{

		printf("Enter bkash Cashout Number:\n");
		scanf("%d", &cashout_number);
		printf("Enter Ammount:\n");
		scanf("%d", &ammount);
		printf("Enter bkash PIN:\n");
		scanf("%d", &bkash_pin);

		if (bkash_pin == pin)
		{
			printf("Cashout Successful.\n");
		}
		else
		{
			printf("Pin error! Retry.\n");
		}

		fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", cashout_number, ammount);
		fclose(money);
	}
}
void paybill()
{
	int paybill_number, ammount, bkash_pin;

	FILE *money;
	money = fopen("money_r.txt", "a");

	if (money == NULL)
	{
		
		printf("Your Account Does Not Have Enough Balance.\n");
	}
	else
	{

		printf("Enter bkash Paybill Number:\n");
		scanf("%d", &paybill_number);
		printf("Enter Ammount:\n");
		scanf("%d", &ammount);
		printf("Enter bkash PIN:\n");
		scanf("%d", &bkash_pin);

		if (bkash_pin == pin)
		{
			printf("Paybill Successful.\n");
		}
		else
		{
			printf("Pin error! Retry.\n");
		}

		fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", paybill_number, ammount);
		fclose(money);
	}
}
void get_fifty_tk()
{
	int mobile_number, ammount, bkash_pin;

	FILE *money;
	money = fopen("money_r.txt", "a");

	if (money == NULL)
	{
		printf("Your Account Does Not Have Enough Balance.\n");
	}
	else
	{

		printf("Enter Mobile Number:\n");
		scanf("%d", &mobile_number);
		printf("Enter Ammount:\n");
		scanf("%d", &ammount);
		printf("Enter bkash PIN:\n");
		scanf("%d", &bkash_pin);

		if (bkash_pin == pin)
		{
			printf("Recharge Successful.You get 50tk Cashback.\n");
		}
		else
		{
			printf("Pin error! Retry.\n");
		}

		fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", mobile_number, ammount);
		fclose(money);
	}
}
void mybkash()
{
	int check_balance, ammount;

	FILE *money;
	money = fopen("money_r.txt", "a");

	if (money == NULL)
	{
		printf("Your Account Does Not Have Enough Balance.\n");
	}
	else
	{

		printf("Check Balance:\n Enter your bkash Pin:\n");
		scanf("%d", &bkash_pin);

		if (bkash_pin == pin)
		{
			scanf("%d", &money);
			printf("Your Account Money:50,000TK.\n");
		}
		else
		{
			printf("Pin error! Retry.\n");
		}

		fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", bkash_pin, ammount, money);
		fclose(money);
	}
}
void reset_pin()
{
	int old_pin, new_pin, retype_pin;

	FILE *money;
	money = fopen("money_r.txt", "a");

	printf("Enter your bkash Old pin:\n");
	scanf("%d", &old_pin);
	printf("Enter bkash New pin:\n");
	scanf("%d", &new_pin);
	printf("Retype bkash New Pin:\n");
	scanf("%d", &retype_pin);

	if (bkash_pin == pin)
	{
		printf("Reset New Pin Successful.\n");
	}
	else
	{
		printf("Pin error! Retry.\n");
	}

	fprintf(money, "Account Number : %d\nTotal Ammount : %d\n", old_pin, new_pin, retype_pin);
	fclose(money);
}