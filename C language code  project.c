#include <stdio.h>
#include <stdlib.h>


int main(){
float total_amount,transfer,deposite,withdraw,check_balance;
int pin,password,user_input;

printf(" ******************************\n");
printf("  WELCOME TO CANARA BANK ATM  \n ");
printf("*******************************\n");
printf("enter your ATM pin to open your account: ");
scanf("%d",&password);
printf("Add amount to create account: ");
scanf("%f",&total_amount);
printf(" CLICK 1 for check balance\n CLICK 2 for deposite\n CLICK 3 for withdraw\n CLICK 4 for transfer\n ");
scanf("%d",&user_input);
printf("enter your ATM pin: ");
scanf("%d",&pin);

if(pin==password)
{
    switch(user_input)
    {
    case 1:
          printf("Total balance in your account is %f",total_amount);
          printf("\n ***************************\n");
          printf(" THANK YOU FOR USING THIS ATM \n");
          printf(" *****************************\n");

          break;
case 2:
          printf("enter amount to deposite: ");
          scanf("%f",&deposite);
          float net_balance_after;
          net_balance_after=total_amount+deposite;
          printf("net balance after deposite is %f\n",net_balance_after);
          printf("\n ***************************\n");
          printf(" THANK YOU FOR USING THIS ATM \n");
          printf(" *****************************\n");

          break;
case 3:
          printf("enter amount to withdraw: ");
          scanf("%f",&withdraw);
          float balance_after_withdraw;
          balance_after_withdraw=total_amount-withdraw;
if (total_amount<withdraw)
{
  printf("insufficient balance\n");
  }
  else
  {
          printf("net balance after withdraw is %f",balance_after_withdraw);
          }
          printf("\n ***************************\n");
          printf(" THANK YOU FOR USING THIS ATM \n");
          printf(" *****************************\n");

          break;
    case 4:
          printf("enter amount to transfer: ");
          scanf("%f",&transfer);
          float balance_after_transfer;
          balance_after_transfer=total_amount-transfer;
          if (total_amount<transfer)
{
  printf("insufficient balance\n");
  }
  else
  {
          printf("net balance after transfer is %f",balance_after_transfer);
          }
          printf("\n ***************************\n");
          printf(" THANK YOU FOR USING THIS ATM \n");
          printf(" *****************************\n");

          break;
default:
          printf("enter valid user input");
          break;
    }
}
else
{
    printf("your ATM PIN is incorrect so repeat process");

}
}
