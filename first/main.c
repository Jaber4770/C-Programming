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

int limit = 5;
int initial = 0;
while(initial<=limit){
    printf("\n%d",initial,"printing the number.");
    initial++;
}

//---------------do while loop

int ii = 0;
do{
    printf("%d\n",ii);
    ii++;
}
while(ii<5);



int iniValue = 1;
do{
    printf("hello world! %d\n",iniValue);
    iniValue++;
}
while(iniValue<=10);


//-----count down-----

int countingDown = 5;
while(countingDown>0){
        printf("\n\n");
    printf("%d\n",countingDown);
    countingDown--;
}
printf("happy new year!!\n");


int iValue = 0;
while(iValue<20){
    if(iValue > 0){
        printf("%d\n",iValue);
    }
    iValue+=2;
}

int v = 1;
for(v=0;v<5;v++){
    printf("oi kire oi kire \n",v);
}

int a,j;
for(a=1;a<= 2;++a){
    printf("Outer loop: %d\n",a);
    for(j=1;j<=3;++j){
        printf("inner loop: %d\n",j);
    }
}


int nums = 2;
int b;

for(b=1;b<=10;b++){
    printf("%d x %d = %d\n",nums,b,nums*b);
}

int c;
for(c=0;c<=20;c++){
    if(c == 4){
            printf("break up!\n");
        break;
    }
    printf("%d\n",c);
}


int d;
for(d=1;d<=5;d++){
    if(d==2){
        continue;
    }
    printf("print kora hochhe. %d\n",d);
}


//-----array---
int numsArray[]={2,2,34,34,34,34,35,43,54,54};
int index;
int arrayLength = sizeof(numsArray)/sizeof(numsArray[0]);
for(index = 0; index<arrayLength; index++){
    printf("%d\n",numsArray[index]);
}


int numbersAry[]={123,2,3,43,4};
printf("Total size in bytes: %lu\n", sizeof(numbersAry));



// find the avarage of an array of numbers.
int numbersForAvg[]={12,32,3,23,43,5,65,44,5,5,4,434,3};
int length = sizeof(numbersForAvg)/sizeof(numbersForAvg[0]);
int conter;
int sum,avg =0;
for(conter = 0; conter<=length;conter++){
    sum += numbersForAvg[conter];
    avg=sum/length;
}
printf("Avarage of the array: %d\n",avg);


//=------------string------------
char greetings[]="hello world!";
printf("%s\n", greetings);

char greetingsMornig[]="good morning";
printf("%s\n",greetingsMornig);

char greetingsss[] = "finally vs code e c er code run korte parlam. ";
printf("%s\n", greetingsss);

char greetingsOftheWord[] = "Hello World!";
printf("%c", greetingsOftheWord[0]);

return 0;

// this is comment
/*
this is comment
*/
 }
