#include <stdio.h>

int main() {
int num1,num2,result;
char o;
   printf("entre two numbers");
    scanf("%d%d",&num1,&num2);
    
    printf("entre a character");
    scanf("%c",&o);
    
    
     switch(o){
case '+':
result=num1+num2;
printf("%d",result);

}



    return 0;
}
