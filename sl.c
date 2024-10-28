#include<time.h>
#include<stdio.h>

int a[]={1,4,8,21,28,50,71,80,32,36,48,62,88,95,97};
int b[]={38,14,30,42,76,67,92,99,10,6,26,18,24,56,78};

void move(int*,int);
int SL(int);

int main()
{
  int p1=0,p2=0,n=0,dice;
  clrscr();

  while((p1 != 100)  &&  (p2 != 100))
  {
     dice = (-srand( (time(0)) )) % 6 + 1;
     switch(n)
     {
       case 0 :  move(&p1,dice);
		 n = 1;
		 printf(" Dice = %d   p1 = %d \n",dice,p1);
		 break;
       case 1 :  move(&p2,dice);
		 n=0;
		 printf(" Dice = %d   p2 = %d \n",dice,p2);
		 break;
     }

    getch();
  }
return 0;
}

  void move(int *p, int d)
   {
     if( (*p + d) <= 100)
	{  *p = *p + d;
	   *p = SL(*p);
	}
   }

   int SL(int pos)
   {
     int i;
     for(i=0; i<15;i++)
       if(pos == a[i]) return(b[i]);
     return(pos);
   }


