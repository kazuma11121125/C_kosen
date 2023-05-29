 #include <stdio.h>

 int main()
 {
   int n;
   int i,j;
   puts("自然数を入力してください");
   printf("自然数:");
   scanf("%d",&n);

   if(n>0){
   for(i=1;i<=n;i++) {
      for (j=0;j<=i;j++){
          putchar(' ');
      }
      for (j=n;j<=(j*2)-i;j--){
         printf("*");
      }
    //   for (int a=0; a<i; a++){
    //      putchar(' ');
    //   }
         
      putchar('\n');
        
      }
    }
    return 0;
