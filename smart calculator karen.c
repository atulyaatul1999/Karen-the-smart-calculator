#include<stdio.h>
#include<string.h>
#include<time.h>
int main()
{
  system("color F4");
  time_t now;
  struct tm *tm_now;
  int hour,min;
  now=time(NULL);
  tm_now=localtime(&now);
  hour=tm_now->tm_hour;
 int z=1;
 char s[1000];
 if(hour>=0&&hour<12)
 {
     printf("GOOD MORNING SIR");
 }
   else if(hour>=12&&hour<16)
   {
       printf("GOOD AFTERNOON SIR");
   }
   else
   {
    printf("GOOD EVENING SIR");
   }
 printf(" , I AM KAREN THE SMART CALCULATOR\n");
 while(z)
{
printf("enter some text \n");
int i,j=0,k=0,l,m=0,n,x,y;
float g,h;
gets(s);
 l=strlen(s);
 for(m=j;s[m]!=' '||m<l;m++)
    {
 for(i=m;s[i]!=' '&&i<l;i++)
 {
  if(s[i]>='0'&&s[i]<='9')
  {
      k=k*10+s[i]-48;
break;
  }
  j=i;
 if(k>0)
 {
x=k;
k=0;
 }
}
}
for(m=j;s[m]!=' '||m<l;m++)
    {
for(i=m;s[i]!=' '&&i<l;i++)
{
    if(s[i]>='0'&&s[i]<='9')
  {
      k=k*10+s[i]-48;
break;

  }
  j=i;
 if(k>0)
 {

y=k;
 }
}
}
i=0;
j=0;
m=0;
 for(i=j;s[i]!=' '||i<l;i++)
 {
     for(m=i;s[m]!=' '&&m<l;m++)
     {
         if(s[m]=='m'&&s[m+1]=='i'&&s[m+2]=='n'&&s[m+3]=='u'&&s[m+4]=='s')
         {
        printf("the subtraction result is- %d",x-y);

      break;
     }
      else if(s[m]=='m'&&s[m+1]=='u'&&s[m+2]=='l'&&s[m+3]=='t'&&s[m+4]=='i'&&s[m+5]=='p'&&s[m+6]=='l'&&s[m+7]=='y')
         {
        printf("the multiplication result is- %d",x*y);
        break;
     }
      else if(s[m]=='m'&&s[m+1]=='u'&&s[m+2]=='l'&&s[m+3]=='t'&&s[m+4]=='i'&&s[m+5]=='p'&&s[m+6]=='l'&&s[m+7]=='i'&&s[m+8]=='c'&&s[m+9]=='a'&&s[m+10]=='t'&&s[m+11]=='i'&&s[m+12]=='o'&&s[m+13]=='n')
         {
        printf("the multiplication result is- %d",x*y);
        break;
     }

      else if(s[m]=='d'&&s[m+1]=='i'&&s[m+2]=='v'&&s[m+3]=='i'&&s[m+4]=='d'&&s[m+5]=='e')
         {
             g=x;
             h=y;
        printf("the division result is- %f",g/h);
        break;
     }
      else if(s[m]=='d'&&s[m+1]=='i'&&s[m+2]=='v'&&s[m+3]=='i'&&s[m+4]=='s'&&s[m+5]=='i'&&s[m+6]=='o'&&s[m+7]=='n')
         {
          g=x;
             h=y;
        printf("the division result is- %f",g/h);
        break;
     }
      else if(s[m]=='a'&&s[m+1]=='d'&&s[m+2]=='d'&&s[m+3]=='i'&&s[m+4]=='t'&&s[m+5]=='i'&&s[m+6]=='o'&&s[m+7]=='n')
         {

        printf("the addition result is- %d",x+y);
        break;
     }
      else if(s[m]=='a'&&s[m+1]=='d'&&s[m+2]=='d')
         {
        printf("the addition result is- %d",x+y);
        break;
     }
      else if(s[m]=='s'&&s[m+1]=='u'&&s[m+2]=='b'&&s[m+3]=='t'&&s[m+4]=='r'&&s[m+5]=='a'&&s[m+6]=='c'&&s[m+7]=='t')
         {
        printf("the subtraction result is- %d",y-x);
        break;
     }
      else if(s[m]=='s'&&s[m+1]=='u'&&s[m+2]=='b'&&s[m+3]=='t'&&s[m+4]=='r'&&s[m+5]=='a'&&s[m+6]=='c'&&s[m+7]=='t'&&s[m+8]=='i'&&s[m+9]=='o'&&s[m+10]=='n')
         {
        printf("the subtraction result is- %d",y-x);
        break;
     }
      else if(s[m]=='m'&&s[m+1]=='u'&&s[m+2]=='l'&&s[m+3]=='t'&&s[m+4]=='i'&&s[m+5]=='p'&&s[m+6]=='l'&&s[m+7]=='y')
         {
        printf("the multiplication result is- %d",x*y);
        break;
     }
     else if(s[m]=='s'&&s[m+1]=='u'&&s[m+2]=='m'&&s[m+3]=='m'&&s[m+4]=='a'&&s[m+5]=='t'&&s[m+6]=='i'&&s[m+7]=='o'&&s[m+8]=='n')
         {
        printf("the summation result is- %d",x+y);
        break;
     }
     else if(s[m]=='s'&&s[m+1]=='u'&&s[m+2]=='m')
         {
        printf("the summation result is- %d",x+y);
        break;
     }


     else if(s[m]=='e'&&s[m+1]=='x'&&s[m+2]=='i'&&s[m+3]=='t')
    {
          printf("OK SIR\nJAI HIND \nPRESS ANY  KEY TO EXIT");
z=0;
break;
     }
     else if(s[m]=='c'&&s[m+1]=='l'&&s[m+2]=='o'&&s[m+3]=='s'&&s[m+4]=='e')
      {
          printf("OK SIR\nJAI HIND\nPRESS ANY  KEY TO EXIT");
z=0;
break;
      }
      else if(s[m]=='n'&&s[m+1]=='a'&&s[m+2]=='m'&&s[m+3]=='e')
      {
        printf("Sir my name is KAREN the smart calculator");
break;
      }
      else if(s[m]=='l'&&s[m+1]=='c'&&s[m+2]=='m')
         {
             int q;
        for(q=2;q<=x*y;q++)
{
if(q%x==0&&q%y==0)
{
printf("the lcm is %d",q);
break;
}
}
        break;
     }
else if(s[m]=='h'&&s[m+1]=='c'&&s[m+2]=='f')
         {
             int q;
for(q=x<y?x:y;q>=1;q--)
{
if(x%q==0&&y%q==0)
{
break;
}
}
printf("hcf is %d",q);


        break;
     }

else if(s[m]=='+')
{
      printf("the addition result is- %d",x+y);
        break;
}

else if(s[m]=='-')
{
      printf("the subtraction result is- %d",x-y);
        break;
}

else if(s[m]=='*')
{
      printf("the multiplication result is- %d",x*y);
        break;
}

else if(s[m]=='/')
{
         g=x;
             h=y;
        printf("the division result is- %f",g/h);
        break;
}
    else if(s[m]=='m'&&s[m+1]=='a'&&s[m+2]=='d'&&s[m+3]=='e')
      {
        printf("Sir Atul Singh student of JSSATE NOIDA developed me");
break;
      }
      else if(s[m]=='d'&&s[m+1]=='e'&&s[m+2]=='v'&&s[m+3]=='e'&&s[m+4]=='l'&&s[m+5]=='o'&&s[m+6]=='p'&&s[m+7]=='e')
      {
        printf("Sir Atul Singh student of JSSATE NOIDA developed me");
break;
      }

      else if(s[m]=='d'&&s[m+1]=='o')
      {
       printf("SIR I CAN WORKS AS A SIMPLE CALCULATOR JUST LIKE IN PYTHON OR CAN  PERFORM FOLLOWING TASKS BY TAKING INPUT STRING   -\nCALCULATION FOR ADDITION OF TWO NUMBERS\nCALCULATION FOR SUBTRACTION OF TWO NUMBERS\nCALCULATION FOR MULTIPLICATION OF TWO NUMBERS\nCALCULATION FOR DIVISION OF TWO NUMBERS\nCALCULATION FOR HCF OF TWO NUMBERS\nCALCULATION FOR LCM OF TWO NUMBERS");
break;
      }
      else if(s[m]=='p'&&s[m+1]=='e'&&s[m+2]=='r'&&s[m+3]=='f'&&s[m+4]=='o'&&s[m+5]=='r'&&s[m+6]=='m')
{
        printf("SIR I CAN WORKS AS A SIMPLE CALCULATOR JUST LIKE IN PYTHON OR CAN  PERFORM FOLLOWING TASKS BY TAKING INPUT STRING   -\nCALCULATION FOR ADDITION OF TWO NUMBERS\nCALCULATION FOR SUBTRACTION OF TWO NUMBERS\nCALCULATION FOR MULTIPLICATION OF TWO NUMBERS\nCALCULATION FOR DIVISION OF TWO NUMBERS\nCALCULATION FOR HCF OF TWO NUMBERS\nCALCULATION FOR LCM OF TWO NUMBERS");
break;
      }
       else if(s[m]=='q'&&s[m+1]=='u'&&s[m+2]=='i'&&s[m+3]=='t')
         {
          printf("OK SIR\nJAI HIND\nPRESS ANY  KEY TO EXIT");
z=0;
break;
      }
        else if(s[m]=='h'&&s[m+1]=='a'&&s[m+2]=='p'&&s[m+3]=='p'&&s[m+4]=='y')
   {
          printf("I am glad that you are happy with my performance");
break;
      }

     j=m;
 }
}
printf("\n\n");
}
getch();
return 0;
}
