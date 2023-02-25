/*--------------------------------------------------------------------*/
/* stra.c                                             */
/* Author: Tara Shukla                                              */
/*--------------------------------------------------------------------*/

#include "str.h"
#include <assert.h>

/*--------------------------------------------------------------------*/
/*Computes str length up to, not incl terminating null char*/
/*Str_getLength implementation taken from assignment desc*/
size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

/*makes a copy of the string pointed to src to the given destination string dest*/
char *strcpy (char *dest, const char *src){
    return '0';
}

/*appends src string to end of dest string*/
char *strcat(char *dest, const char *src){
    return '0';
}

/*compares str1 to str2*/
int strcmp (const char *str1, const char *str2){
    return 0;
}

/*searches for 1st occurence target str in location str*/
char *strstr (const char *location, const char *target){
    return '0';
}

/*--------------------------------------------------------------------*/

