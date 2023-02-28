/*--------------------------------------------------------------------*/
/* strp.c                                             */
/* Author: Tara Shukla                                              */
/*--------------------------------------------------------------------*/

#include "str.h"
#include <assert.h>

/*--------------------------------------------------------------------*/
/*Computes and returns str length up to, not incl terminating null char*/
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
/*returns pointer to copy*/
char *Str_copy (char *dest, const char *src){
    int i = 0;
    assert(dest!= NULL); 
    assert(src != NULL);

    while (*src!='\0'){
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    return dest-i;
}

/*appends src string to end of dest string*/
/*returns pointer to the concatenated array*/
char *Str_concat(char *dest, const char *src){

    size_t destLen = Str_getLength(dest);
    assert(dest!= NULL);
    assert(src != NULL);
    

    /*call Str_copy on pointer to end of dest array, and src*/
    (void)Str_copy(dest+destLen, src);

    return dest;
}

/*compares str1 to str2, returns int (0 if equal, neg if less, pos if greater)*/
int Str_compare (const char *str1, const char *str2){
    assert(str1!= NULL);
    assert(str2 != NULL);

    while(*str1!='\0'){
        if (*str1>*str2){
            return 1;
        }
        if (*str1<*str2){
            return -1;
        }
        str1++;
        str2++;
    }
    if (*str2!='\0'){
        return -1;
    }
    return 0;
}

/*searches for 1st occurence of the target str in the location str*/
/*returns pointer to that occurence*/
char *Str_search (const char *location, const char *target){
    size_t subLen = Str_getLength(target);
    int subIterator = 0;/*substring iterator*/
    assert (location!=NULL);
    assert (target!=NULL);

    if (subLen == 0) return (char*)location;

    /*iterate through location string, searching for first letter match*/
    /*when found, iterate until match found; else break*/

    while(*location!='\0'){
        if ( (*location==*target)& (Str_compare(location,target))){
            return location;
        }
        location++;
    }

    /*match not found return null*/
    return NULL;
}

/*--------------------------------------------------------------------*/

