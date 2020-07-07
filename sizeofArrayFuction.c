#include <stdio.h>
/*回傳陣列長度*/
/*無法使用function方式*/


#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

long unsigned int get_length(int* ptr)
{
    long unsigned int length;

    printf("%lu\n",ARRAY_SIZE(ptr));

    return length; 
}


int main(){

   int array[20];
   int *ptr = array;

   /*  這裡代入的是 int * ，而不是 int [20] */
   printf("%lu\n",ARRAY_SIZE(array));
   //printf("%lu\n",ARRAY_SIZE(ptr));
   //get_length(array);
   return 0;

}

/*ref:
 * http://blog.linux.org.tw/~jserv/archives/001876.html
 * https://www.ptt.cc/bbs/C_and_CPP/M.1320222204.A.FFC.html
 *                                                          /
