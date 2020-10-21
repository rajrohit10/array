#include<stdio.h>
#include<stdbool.h>
int isPrime(int num)
{
    int j;

    if (num<2){
        return false;

    }
    for (j=2;j<num;j++)
    {
        if(num%j==0){



            return false;

        }
        else{
            continue;
        }

    }

    return true;

}
int main(){
    int i,num,check;
    bool repeat_game=true;
    bool value;
    int primeArray[100];
    int counter_arr=0;

    while (repeat_game){
        printf("Enter a number to check if it's prime or not.\n");
        scanf("%d",&num);
        value=isPrime(num);

        if (value==true){
            printf("%d is a Prime No\n",num);
            primeArray[counter_arr]=num;
            counter_arr++;



        }
        else{
            printf("%d is not a Prime No\n",num);

        }
        printf("Would you like to continue this game ?\n Enter 1 for YES ,\n 2 for NO\n");
        scanf("%d",&check);

        if (check==2)
        {
            repeat_game=false;
        }



    }
    printf("These are the number that are prime.\n");
    for (i=0;i<counter_arr;i++)
    {
        printf(primeArray[i]);
    }


    return 0;
}