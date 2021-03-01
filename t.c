#include<stdio.h>
#include<string.h>
//#include<graphics.h>
void design(char t[9]);
void input(char t[9],int count);
void win(char t[9]);
int count=0,u=0;
void main()
{
  int i;
 char n,player1,player2;
 char t[9]={'0','1','2','3','4','5','6','7','8'};
 

 input(t,count);
// design(t);
//win(t);

}  

  void design(char t[9])
{
	
	printf("\n \t\t\t   |   |   ");
	printf("\n \t\t\t %c | %c |%c  ",t[0],t[1],t[2]);
	printf("\n \t\t\t---|---|--- ");
	printf("\n \t\t\t   |   |   ");
	printf("\n \t\t\t %c | %c |%c  ",t[3],t[4],t[5]);
	printf("\n \t\t\t---|---|---  ");
	printf("\n \t\t\t   |   |   ");
	printf("\n \t\t\t %c | %c |%c",t[6],t[7],t[8]);
	printf("\n \t\t\t---|---|---");
	printf("\n \t\t\t   |   |   ");

}

  void input(char t[9],int count)
{
 	char s;int n,i,k;
 	printf("\n\t\t TIC TAC Welcomes you.Lets have fun!!! \n");
 	printf("\n\t\t Player one has 'x'symbol and Player two 'o'symbol:)) \n");
 	design(t);
 	for(k=0;k<9;k++)
 {      printf("\ncount=%d\n",count); if(u==-1){break;}
	if(k%2==0)
	{
	printf("\n\t\t Turn of player1:Enter number where you wish to enter the symbol  \n\t\t ");
	scanf("%d",&n);
	}
	else 
	{
	printf("\n\t\t Turn of player2:Enter number where you wish to enter the symbol  \n\t\t");
        scanf("%d",&n);
	}
	
	for(i=0;i<=9;i++)
 {     
    
    if(i==n)
    {
	
      if(count%2==0)
      { 
      t[i]='x';
	count++;design(t);
      //printf("\n\t\t %c ",);
      }		
      else
      {
      t[i]='o'; count++;
	design(t);
     // printf("\n\t\t %c ",s);
      }
    }

 

  }
win(t);


 }
 
}

void win(char t[9])
{	

	for(int y=0;y<=6;y=y+3)
	{
	  if(t[y]==t[y+1]&& t[y+1]==t[y+2])
	 {
          if(t[y]=='x' && t[y+1]=='x' && t[y+2]=='x'){
	  printf("\n\t\t ******CONGRATULATIONS******\n\t\tPlayer1 have won the game!!"); u=-1;}
	  else if(t[y]=='o' && t[y+1]=='o' && t[y+2]=='o'){
	  printf("\n\t\t ******CONGRATULATIONS******\n\t\tPlayer2 have won the game!!"); u=-1;}
	 
	 }
	 
	  
	}

	for(int y=0;y<3;y++)
	{


	  if(t[y]==t[y+3]&&t[y+3]== t[y+6])
	{
	  printf("\n\t\t ******CONGRATULATIONS******\n\t\tYOU have won the game!!");u=-1;
	}

          if(y==0)
	{
	     if(t[y]==t[y+4]&&t[y+4]== t[y+8])
	{
		printf("\n\t\t ******CONGRATULATIONS******\n\t\tYou have won the game!!");u=-1;}
	}
	
	  if(y==2)
	{
	if(t[y]==t[y+2]&&t[y+2]== t[y+4])
	{
		printf("\n\t\t ******CONGRATULATIONS******\n\t\tYou have won the game!!");u=-1;}
	}



	}
	
}
