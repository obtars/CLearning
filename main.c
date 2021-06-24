#include <stdio.h>
int main()
{
    enum company {GOOGLE,FACEBOOK,XEROX,YAHOO =10,EBAY,MICROSOFT};

    enum company ek = GOOGLE;
    enum company dui = XEROX;
    enum company tin = EBAY;

    printf("Xerox is:%d\n",dui);
    printf("Google is:%d\n",ek);
    printf("Ebay is:%d\n",tin);

    return 0;
}
