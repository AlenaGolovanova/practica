
# include  <stdio.h>
       
 
int main()
 {        
char  str[80],i=0;
int sum=0;                                        
puts("Enter  a string:");
fgets(str,80,stdin);
while(str[i]  &&  str[i]!='\n')               
{
if(str[i]>='0'  &&  str[i]<='9')            
sum+=str[i]-'0';                  
i++;                           
}
 
printf("Sum=%d\n",sum);
return 0;
}