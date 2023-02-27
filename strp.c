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

/*makes a copy of the src string in the dest string*/
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
char *Str_concat(char *dest, const char *src){

    int destLen = Str_getLength(dest);
    assert(dest!= NULL);
    assert(src != NULL);
    

    /*move the dest pointer to the end of dest array*/
    /*then copy src into that memory spot*/
   
    Str_copy(dest+destLen, src);

    return dest;
}

/*compares str1 to str2*/
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

/*searches for 1st occurence target str in location str*/
char *Str_search (const char *location, const char *target){
    int subLen = Str_getLength(target);
    int x = 0;
    assert (location!=NULL);
    assert (target!=NULL);

    if (subLen == 0) return (char*)location;

    /*iterate through location string, searching for first letter match*/
    /*when found, iterate until match found; else break*/

    while(*location!='\0'){
        if(*location==*target){
            x = 0; /*substring iterator*/
            while (x<subLen){
                if (*target!=*location) {
                    target -= x;
                    location -=x;
                    break;
                }
                if (x == subLen-1){
                    return  (char*)(location-x);
                }
                x++;
                target++;
                location++;
            }
        }
        location++;
    }

    /*match not found return null*/
    return '\0';

}

/*--------------------------------------------------------------------*/

