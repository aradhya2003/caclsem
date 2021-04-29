


#include<stdio.h>
#include<math.h>
int i,a,b,z;
int fact();
void powr();
void add();
void sub();
void mul();
void div();
void mod();
int main()
{

    printf("enter  number 1 for simple calculator\t");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("enter the number\n");
        printf("press 1 for + function \t\t press 2 for - function \n");
        printf("press 3 for *\t\t press 4 for division / \npress 5 for modulas function\n");
        printf("press 6 for power function\t \npress 7 for factorial function\n");
        scanf("%d",&z);
        switch(z)
          {
           case 1 :
           add();
           break;
           case 2 :
           sub();
           break;
           case 3 :
           mul();
           break; 
           case 4 :
           div();
           break;
           case 5 :
           mod();
           break;
          case 6 :
            powr();
            break;
          case 7 :
            fact();
          } break;
        case 2:
        printf("you enter two 2");
          break;       
        case 3:
        printf("you enter two 3");
         break;       
         case 4:
        printf("you enter two 4");
         break;       
         case 5:
        printf("you enter two 5");
         break;       
         case 6:
        printf("you enter two 6");
         break;       
         case 7:
        printf("you enter two 7");
         break;
        default:
        printf("you  enter two  wrong number");
        return 0;
    }
return 0;
}
void add()
{ int k,m,s=0,i=0; 
    printf("how many number you want to add");
     scanf("%d",&k);

          for(i;i<=k-1;i++)
          {
            printf("enter %d number",i+1);
            scanf("%d",&m);
             s=s+m;
          }
          printf("sum is %d",s);
          
}
void sub()
{
  printf("enter two  number");
          scanf("%d %d",&a,&b);
          printf("%d-%d= %d",a,b,a-b);
}
void mul()
{
 printf("enter two  number");
          scanf("%d %d",&a,&b);
          printf(" %d*%d= %d",a,b,a*b);
}
void mod()
{
  printf("enter two  number");
          scanf("%d %d",&a,&b);
          printf("%d%%d= %d",a,b,a%b);
}
void div()
{
    printf("enter two  number");
          scanf("%d %d",&a,&b);
          printf("%d\%d= %d",a,b,a/b);
}
void powr()
{ int a,b,p;
  printf("enter number & power");
          scanf("%d %d",&a,&b);
p= pow(a,b);
printf("answer is %d",p);
}
int fact()
{ int facto=1;
  printf("enter the number to find factorial\t");
  scanf("%d",&a);
  if(a>0) 
  {  for(int i=1;i<=a;i++)
    {
      facto=facto * i;
    }
  
  printf("factorial is %d",facto);
  }
    else{printf("enter a positive number");
  }

}
