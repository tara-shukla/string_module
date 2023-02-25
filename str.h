/*--------------------------------------------------------------------*/
/* str.h                                       */
/* Author: Tara Shukla                                               */
/*--------------------------------------------------------------------*/

#ifndef STR_INCLUDED
#define STR_INCLUDED
#include<stddef.h>
/*--------------------------------------------------------------------*/
/*needs Str_getLength, Str_copy,Str_concat, Str_compare,Str_search*/

/*Computes str length up to, not incl terminating null char*/
size_t Str_getLength(const char *str);

/*makes a copy of the string pointed to src to the given destination string dest*/
char *strcpy(char *dest, const char *src);

/*appends src string to end of dest string*/
char *strcat(char *dest, const char *src);

/*compares str1 to str2*/
int strcmp(const char *str1, const char *str2);

/*searches for 1st occurence target str in location str*/
char *strstr(const char *location, const char *target);
/*--------------------------------------------------------------------*/
#endif

