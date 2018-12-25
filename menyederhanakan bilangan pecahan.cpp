#include <iostream>
using namespace std;
int pecahan();
int main(int argc, char *argv[])

{

int pecahan();
       int a,b,l,t;
       printf("***************************************************\n");
       printf("	MENYEDERHANAKAN BILANGAN PECAHAN \n");
       printf("***************************************************\n");
	   printf("masukkan pembilang : ");
       scanf("%d",&a);
       printf("masukkan penyebut : ");
       scanf("%d",&b);
       t = a/b;
       l = a%b;
       if (a%b == 0)
       printf("Bilangan (%d/%d) \ndi sederhanakan menjadi  %d ",a,b,t);
       else if (a%b != 0)
       printf("Bilangan (%d/%d) \ndi sederhanakan menjadi (%d %d/%d)",a,b,t,l,b);
return 0;
}
