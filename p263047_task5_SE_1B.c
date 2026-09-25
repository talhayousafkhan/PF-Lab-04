#include<stdio.h>
int main()
{

int a,b,c;

printf("Enter Three Numbers:  ");
scanf(" %d %d %d", &a,&b,&c);

if(a>b){
if(b>c){
printf("a is greatest");
}
} else if(b>c){

if(b>a){

printf("b is greatest");

}

}

else{

printf("c is greatest");


}
return 0;



}