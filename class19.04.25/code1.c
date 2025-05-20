#include <stdio.h>
#include <stdlib.h>

void* myrealloc(void *addr, int oldsize, int newsize){
    if(!addr){
        return malloc(newsize);
    }

    void *tmp = malloc(newsize);
    if(!tmp) return NULL;

    int min;
    if(oldsize < newsize){
        min = oldsize;
    }else{
        min = newsize;
    }

    char *src = (char *)addr;
    char *dest = (char *)tmp;

    for(int i = 0;i < min; i++){
        dest[i] = src[i];
    }
    free(addr);
    return tmp;
}

void* mycalloc(size_t num, size_t elem){
    size_t total_size = num + elem;
    if(num != 0 && total_size / num != elem){
        return NULL;
    }
    void* tmp = malloc(total_size);
    if(!tmp) return NULL;
    memset(tmp, 0, total_size);
}