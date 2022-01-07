
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
  int i,N,k=0;
  int *a;

  N=argc-1; // ไม่เอาชื่อตัวแปร ./Music
  a = (int*)malloc(sizeof(int)*N); // assign ค่า ไปที่ a* sizeofint เก็บ int ได้ 1 ตัว
  // เปรียบได้ว่า a[N]
  for(i=1;i<argc;i++)
  {
    //printf("argv %d =%d\n",i,atoi(argv[i]));
    a[i-1]=atoi(argv[i]); // a ควรเริ่มที่ 0
    if(a[i-1]%2!=0)
    {
      printf("argv %d = %d\n",i,a[i-1]);
      k = k+a[i-1];
    }
  }
  printf("sum of odd = %d\n",k);
}