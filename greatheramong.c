
//to find the greatest number among three using terenary operator
#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Hello enter the three numbers\n");
    scanf("%d\t%d\t%d",&a,&b,&c);
     printf("max ==");
   // (a>=b)?((a>=c)?(max=a):(max=c)):((b>=c)?(max=b):(max=c)); if u use this statement the wehave to definetly use the braces for assignment 
    max =(a>=b)?((a>=c)?a:c):((b>=c)?b:c);

    printf("%d",max);

    return 0;
}
