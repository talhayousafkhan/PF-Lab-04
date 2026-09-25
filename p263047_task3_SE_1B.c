#include<stdio.h>
int main()
{

printf("enter x and y");
scanf("%d %d", &x,&y);

if(x==0){
if(y==0){

printf("origin\n");

} else {

printf("on the y axis");

} else {

if(y==0){

printf("on the x axis");

} else {

if(x>0){

if(y>0){

printf("quadrant-I");

} else {

printf("quadrant-IV");

}
} else {

if(y>0){

printf("quadrant-II");
} else{

printf("quadrant-III");
}


}



}


}


}



return 0;

}