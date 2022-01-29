#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_numbers(void);
void ft_print_comb2(void);


void ft_print_comb2(void)
{
/*	

int nb1=0  ;
int nb2 =1 ;

while (nb1<=98)
{
nb1%10;
  while (nb2<=99)
  {
	  nb2%10;
    printf("%d%d",nb1,nb2);
  }
nb1++;
}


*/ 

/*while(a<=9)
{
   while (b<=9)
   {
       while(c<=9)
       {
	          while(d<=9)
             {
		      printf(" %d%d  %d%d,",a,b,c,d);
              d++;
		     }
	    d= 0;
	    c++;
	    }

	c=0;
    b++;
   }	   
b=0;
a++;
}
*/
}

void ft_print_comb(void)
{
    int a= 0;
    int b=1;
    int c;
	char sp = ' '; 
	printf("%d",a );

	while(a<=7)
	{ 
		b=a+1;
        while(b<=8)
        {
			c=b+1;	 
			while (c<=9)
         	{
         	//	printf(" %d%d%d ",a,b,c );
			   ft_putchar(a+'0');
			  ft_putchar(b+'0');
			 ft_putchar(c+'0');
			ft_putchar(sp); 
         		c++ ;

         	}
			c=0;
			b++;
     	}
		a++;
    }




}



void ft_is_negative(int n){
if ( n>= 0 )
{
write (1,"P",1);
}
else
{ write (1,"N",1);
}


}



void ft_print_numbers(void){
 int chif ;
for(chif= 0 ; chif <= 9 ; chif++)
{ft_putchar(chif + '0' ) ;
}
}

void ft_print_reverse_alphabet(void)
{ char alph;
alph = 'z';

while(alph>='a')
{
write(1,&alph,1);
alph--;
}

/*for(alph ='z';alph >= 'a' ; alph--)
    {
write(1,&alph,1);

    }
	*/
 // printf("\n");
}

void ft_putchar(char c) {

           write(1,&c,1);
       }

void ft_print_alphabet(void) {
char alph='a';
//char fin ='z'
    while (alph<='z')
    {
         write(1,&alph,1);
         alph++;
    }


}

int main(){

char s ;
s='d';
int testnum = 5;

 ft_print_comb2();
 ft_print_comb();
ft_is_negative(testnum);
ft_print_numbers();
 ft_print_reverse_alphabet();
ft_print_alphabet();
ft_putchar(s);
printf("\ni hope its work yaa boy\n");



}
