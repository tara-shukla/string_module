

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

/*makes a copy of the src string to the dest string*/
char *Str_copy(char dest[], const char src[]){ 
    int i = 0;

    assert(dest!= NULL);
    assert(src != NULL);
    
    while (src[i]!='\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;

}

/*appends src string to end of dest string*/
char *Str_concat(char dest[], const char src[]){
    int destLen = Str_getLength(dest);
    assert(dest!= NULL);
    assert(src != NULL);
    

    /*move the dest pointer to the end of dest array*/
    /*then copy src into that memory spot*/
   
    Str_copy(dest+destLen, src);

    return dest;
}

/*compares str1 to str2*/
int Str_compare (const char str1[], const char str2[]){
    int i = 0;

    assert(str1!= NULL);
    assert(str2 != NULL);

    while(str1[i]!='\0'){
        if (str1[i]>str2[i]){
            return 1;
        }
        if (str1[i]<str2[i]){
            return -1;
        }
        i++;
    }
    if (str2[i]!='\0'){
        return -1;
    }
    return 0;
}

/*searches for 1st occurence target str in location str*/
char *Str_search (const char location[], const char target[]){
    int i = 0;
    int subLen = Str_getLength(target);

    assert (location!=NULL);
    assert (target!=NULL);

    if (subLen == 0) return (char*) &location [0];

    /*iterate through location string, searching for first letter match*/
    /*when found, iterate until match found; else break*/

    while(location[i]!='\0'){
        if(location[i]==target[0]){
            int y = i; /*in location string iterator*/
            int x = 0; /*substring iterator*/
            while (x<subLen){
                if (target[x]!=location[y]) break;
                if (x == subLen-1){
                    return(char*)&location[i];
                }
                y++;
                x++;
            }
        }
        i++;
    }

    /*match not found return null*/
    return '\0';
}
/*--------------------------------------------------------------------*/