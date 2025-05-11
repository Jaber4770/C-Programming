#include <stdio.h>
#include <stdbool.h>

 int main(){
 // int a,b;
 //printf("enter tow numbers: ");
 printf("here we are taking number from you. \n why we are taking these? \n hodai nitesi bhai. kono karon chra. ");
 //scanf("%d %d", &a,&b);

 int myNumber = 5;
 printf("%d",myNumber);

 float myfloatNum = 343334.3434;
 printf("%f",myfloatNum);

 char myFirstText[] = "hello rokeya";
 printf("%s", myFirstText);

 int num1 = 5;
 int num2 = 7;
 int num3 = num1* num2;
 printf("%d\n", num3);

float floatNumber = 1232.23343432;
printf("%.3lf", floatNumber);

int result = 5/2;
float result2 = (float) 5/2;
printf("\n the result of 5/2 is: %f", result2);


int maxScore = 500;
int useScore = 423;

float percentage = (float) useScore/maxScore *100;
printf("\nuser's percentage is %.2f", percentage);

const int unchangeableNumber = 44;
printf("\n the constant number is: %d", unchangeableNumber);


bool isCProgrammingFun = false;
bool isJavaScriptEnjoyable = true;

printf("\nC programming is very raw language, it's true but its not enoyable language. %d", isCProgrammingFun);
printf("\n i enjoy javascript %d", isJavaScriptEnjoyable);


printf("\n%d", 10>9);


int myAge = 23;
int votingAge = 18;
printf("\n 1 means the result is true %d", myAge>=votingAge);

if(myAge>votingAge){
    printf("I am eligible for vote! YaY!!");
}else{
printf("I have to wait to vote.");
}

if(4<5){
    printf("\n5 is greaterthan 4");
}else{
printf("\n5 is greater than 4");
}


int number1 = 5;
int number2 = 6;
int number3 = 7;

if(number1>number2){
    printf("\ngood morning");
}else if(number2>number3){
    printf("\ngood noon");
}else{
    printf("\ngood afternoon");
}


int time =20;
(time>18)? printf("\nGood evening.") : printf("\nGood day!");


int doorCode = 9922;
if(doorCode == 9922){
    printf("Correct code. \nThe door is now open.");
}else{
    printf("Wrong code. \nThe door remains closed.");
}

int theNumber = 5;
if(theNumber%2==0){
    printf("\nis even.\n%d",theNumber);
}else{
printf("\nis odd.\n%d",theNumber);
}


switch(theNumber){
    case 4:
    printf("the number is greater than 4");
    break;
    case  5:
    printf("the number is lower than 4");
    break;

}

int i = 0;
while(i<=5){
    printf("\nThe Number is:%d",i);
    i++;
}


do{
    printf("\nThis is do while loop. %d",i);
    i++;
}
while (i<5);


int countDown = 3;
while (countDown>=0){
            if(countDown == 0){
        printf("happy new year!!\n");
    }
    printf("\n the coundown is:%d", countDown);
    countDown--;

}












 return 0;

 //this is comment
 /*
 this is comment
 */
 }
