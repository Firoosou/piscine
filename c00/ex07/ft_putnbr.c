#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c);
int v_langeur(int nb);


int main ()
	
{  int nb =	70;
   	ft_putchar('F');
    
     v_langeur( nb);
return 0 ;
}


void ft_putchar(char c)
{
    write(1,&c,1);
}

int v_langeur(int nb)
{
int langeur=1 ;
while (nb/10!=0)
{
nb=nb/10;
langeur = langeur *10 ;

}
printf("%d",langeur);
return langeur;

}

void ft_putnbr()
{

}
