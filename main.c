#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void smerNahoru(char ** pole, int i, int j)
{
  for(i;i<1;i--)
  {
     for(j;j<strlen(*pole);j++)
     {
       
     }
  } 
     
}
*/

void najdiSmer(char **retezce, char **slova, int a, int b)
{
int *pole;
int i,j;



for(i=0;i<strlen(retezce[0]);i++)
{
   for(j=0;j<strlen(retezce[0]);j++)
   {
      if(retezce[i][j]==slova[a][b])                                   
                                    
                                    
   }
}     
     
     
     
     
}



int main(int argc, char *argv[])
{
   int mem=64,i,j,velikost;
   char *str;
   char **retezce;
   char ret;
   str = (char*)malloc(mem);
   char c = getchar();
   
 //  fgets(str,mem,stdin);
   
//   while(str[strlen(str)-1]!='\n')
   while(c!='\n')
   {         //checks if we ran out of space
   
             mem*=2;
             str=(char*)realloc(str,mem+1);//double the amount of space
             fgets(str+mem/2+1,mem/2+1,stdin);//read the rest (hopefully) of the line into the new space.
   }
  
   velikost=strlen(str);
    
   retezce=(char**)malloc(velikost-1 * sizeof(char*));
   
   for(i=0;i<velikost-1;i++)
   {
     retezce[i]=(char*)malloc(velikost-1 * sizeof(char));                           
   } 

   for(i=0;i<velikost-1;i++)
   {
      retezce[0][i]=str[i];
   }
   
   
   for(i=1;i<velikost-1;i++)
   {
      //fgets(retezce[i],velikost,stdin);
      //scanf("%s",retezce[i]);
      while (ret = getchar() )
     {
            retezce[i][j] =ret;
            j++;
     }
      
      if(*retezce[i]=='\n')
      {
         printf("chyba\n");                    
      } 
     // printf("konec vstupu[%d]\n",i);
                              
   }
   
   for(i=0;i<velikost-1;i++)
   {
      printf("%s\n",retezce[i]);
   }
   printf("\n*******************\n");
   
  free(str);
  for (i = 0; i < velikost-1; i++)
  {
     free(retezce[i]);
  }
  free(retezce); 
   
   
  system("PAUSE");	
  return 0;
}
