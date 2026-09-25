#include<stdio.h>
int main()
{


int weight,height;
float bmi;
printf("enter weight and height: ");
scanf("%d %d", &weight,&height);

bmi=weight/height*height;

if(bmi<18.5){
printf("Underweight");
}
else if(bmi>18.5){

if (bmi<25){
printf("Normal");
}
}
else if(bmi>25){
if (bmi<30){
printf("Overwieght");
}
}
else{

printf("obese");

}



return 0;


}