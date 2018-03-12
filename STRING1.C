  #include<stdio.h>
  #include<conio.h>
  #include<string.h>

  void main()
  {
  char a[100],b,c;
  int i,length;
  clrscr();
  printf("Enter the regular expression\n");
  gets(a);
  length=strlen(a);
  printf("%d is length\n",length);
    {if(a[length-2]=='b' && a[length-1]=='c')
     {printf("accpeted\n");
     }
     else
     printf("not accepted");
     }
   getch();
}