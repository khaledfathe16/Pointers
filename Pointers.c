  /************************************************************************************************************
   *            This Projet to show how can return two values of function by pointers (Special variables)     *                                                                       *                                                                         *
   ************************************************************************************************************/

  #include <Stdio.h>

int arr(int *p1,int *p2,int *sumf,int *subf); //function decleration
 void main(void){

int x,y,sum,sub;

printf("Please enter two numbers = ");

scanf("%d",&x);                   //Get the value of two variables from user
scanf("%d",&y);

arr(&x,&y,&sum,&sub);         //Put the address of the noraml variables in the calling function

printf("Sum = %d\n",sum);
printf("Sub = %d",sub);
 }

int arr(int *p1,int *p2,int *sumf,int *subf){ //p1=&x *p1=x value ----  p2=&y  *p2=y value

                                             //sumf =&sum  *sumf=value of sum --- subf=&sub  *subf=value of sub

 *sumf = *p1 + *p2;
 *subf = *p1 - *p2;

}
