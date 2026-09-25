#include<stdio.h>
int main()
{



printf("enter side a , b , c:  ");
scanf("%d %d %d", &a,&b,&c);


if(a<b+c){
else if(b<a+c){
else if (c<b+a){

printf("it is a triangle\n");



if(a==b){
if(b==c){
printf("equilateral");

}
} else {

printf("isosceles");

} else{

printf("scalene");

}
else
printf("not a triangle");
}
}
}


return 0;
}