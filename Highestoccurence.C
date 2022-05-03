#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int i,j;
    char highestOccurence;
    int count=0;
    int maxCount=0;
    printf("Enter a String");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
        count=0;
        for(j=0;j<strlen(str);j++)
          {
                 
          if(str[j]>=65&&str[j]<=90)
          str[j]=str[j]+32;
          if(str[i]==str[j])
         {
             count++;
      
         }
        }
        if(maxCount<count)
        {
            maxCount=count;
            highestOccurence=str[i];
            
        }
    }
    
printf("\nHighest number of Occurences:%c", highestOccurence);
return 0;

}
