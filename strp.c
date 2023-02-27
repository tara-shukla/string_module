/*--------------------------------------------------------------------*/
/* strp.c                                             */
/* Author: Tara Shukla                                              */
/*--------------------------------------------------------------------*/

#include "str.h"
#include <assert.h>

/*--------------------------------------------------------------------*/
/*Computes str length up to, not incl terminating null char*/
/*Str_getLength implementation taken from assignment desc*/
size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);

}

/*makes a copy of the string pointed to src to the given destination string dest*/
char *Str_copy (char *dest, const char *src){
    assert(dest!= NULL); /*question: pointers = null vs *p = null?*/
    assert(src != NULL);

    while (*src!='\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}

/*appends src string to end of dest string
char *Str_concat(char *dest, const char *src){
    return '0';
}

/*compares str1 to str2
int Str_compare (const char *str1, const char *str2){
    return 0;
}

/*searches for 1st occurence target str in location str
char *Str_search (const char *location, const char *target){
    return '0';
}

--------------------------------------------------------------------*/

