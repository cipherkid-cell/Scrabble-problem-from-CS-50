#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compute_score(string Player1, string Player2);
int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int main(void)
{
   string Player1 = get_string("Player 1: ");
   string Player2 = get_string("Player 2: ");
   compute_score(Player1, Player2);
   return 0;
}









































int compute_score(string Player1, string Player2)
{
   int sum1 = 0;
   int sum2 = 0;
   int score1 = 0;
   int score2 = 0;
   for (int i = 0; i<strlen(Player1); i++)
   {
      char c = Player1[i];
      char s;


      if (c>=65 && c<=90)
      {
         score1 += POINTS[c - 65];

      }
      else if (c>=97 && c<=122)
      {
         s = toupper(c);
         score1 += POINTS[s - 65];


      }

   }

   for (int i = 0; i<strlen(Player2); i++)
   {
      char d = Player2[i];
      char t;
      if (d>=65 && d<=90)
      {
         score2 += POINTS[d - 65];

      }
      else if (d>=97 && d<=122)
      {
         t = toupper(d);
         score2 += POINTS[t - 65];


      }

   }
   sum1+=score1;
   sum2+=score2;
   if (sum1>sum2)
   {
      printf("Player 1 wins!");
   }
   else if (sum1<sum2)
   {
      printf("Player 2 wins!");
   }
   if(sum1 == sum2)
   {
      printf("Tie!");
   }
   printf("\n");
   return 0;

}
