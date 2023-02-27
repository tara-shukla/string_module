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

