#include <stdio.h>

int question2a();
int question2b();

void main()
{   
    int option;
    printf("Choose 1 of the following options :\n1 : Execute Part A\n2 : Execute Part B\n");
    scanf("%d"&option);

    switch(option):
    	case 1: question2a();
    		break;
    	case 2: question2b();
    		break;
    	default: printf("Invalid option\n");
    	  break;

}

int question2a()
{
    int quarters, dimes, nickles,penny;
    int n;

    printf("Enter n\n");
    scanf("%d",&n);

    if(n<=0)
	    printf("Invalid input");
	
    while(n>0)
     {
	      //counting quarters
        if(n>=25)
        {
            quarters = n/25;
            n = n%25;
            printf("%d quarters\n",quarters);
        }

	      //counting dimes
        else if (n>=10 && n<25)
        {
            dimes = n/10;
            n = n%10;
            printf("%d dimes\n",dimes);
        }

      	//counting nickles
        else if (n>=5 && n<10)
        {
            nickles = n/5;
            n= n%5;
            printf("%d nickles\n",nickles);
        }

	      //counting pennies
        else if (n<5)
        {
            printf("%d penny\n",n);
            n=0;
        }
      }
    return 0;
}

int question2b();
{
    int amt,i,iterations;
    int c,k,n;
 
    printf("Enter n : ");
    scanf("%d",&n);
 
    printf("Enter c >1: ");
    scanf("%d",&c);
 
    printf("Enter k >=1: ");
    scanf("%d",&k);
 
    iterations = power(c,k);//call function to calculate power
    
    if(n<=0)
  		printf("Invalid input");

    while(n>0) {
      for(i=iterations;i>=1;i=i/c) {
    	  if(n>=i)
      		{
        		amt = n/i;
        		n=n%i;
        		printf("%d of %d\n",amt,i);
      		}
      }
    }
  return 0;
}

//Function to calculate power
int power(int x, int y)
{
    int i;
    int res =1;
    
    for(i=1;i<=y;i++)
    {
    	res = res * x;
    }
    return res;
}

