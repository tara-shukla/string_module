/*--------------------------------------------------------------------*/
/* stra.c                                             */
/* Author: Tara Shukla                                              */
/*--------------------------------------------------------------------*/

#include "str.h"
#include <assert.h>

/*--------------------------------------------------------------------*/
/*Computes and returns str length up to, not incl terminating null char*/
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
/*returns pointer to copy*/
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
/*returns pointer to the concatenated array*/
char *Str_concat(char dest[], const char src[]){
    size_t destLen = Str_getLength(dest);
    assert(dest!= NULL);
    assert(src != NULL);
    

    /*move the dest pointer to the end of dest array*/
    /*then copy src into that memory spot*/
   
    (void)Str_copy(dest+destLen, src);

    return dest;
}

/*compares str1 to str2, returns int (0 if equal, neg if less, pos if greater)*/
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
/*returns pointer to that occurence*/
char *Str_search (const char location[], const char target[]){
    int index = 0;
    size_t subLen = Str_getLength(target);
    int locIterator;/*in location string iterator*/
    int subIterator;/*substring iterator*/

    assert (location!=NULL);
    assert (target!=NULL);

    if (subLen == 0) return (char*) &location [0];

    /*iterate through location string, searching for first letter match*/
    /*when found, iterate until match found; else break*/

    while(location[index]!='\0'){
        if(location[index]==target[0]){
            locIterator = index; 
            subIterator = 0; 
            while ((size_t)subIterator<subLen){
                if (target[subIterator]!=location[locIterator]) break;
                if ((size_t)subIterator == (subLen-1)){
                    return(char*)&location[index];
                }
                locIterator++;
                subIterator++;
            }
        }
        index++;
    }

    /*match not found return null*/
    return NULL;
}
/*--------------------------------------------------------------------*/