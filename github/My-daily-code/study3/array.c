#include "array.h"

Array array_create(int init_size)
{
    Array a;
    a.array = (int*)malloc(sizeof(int)*init_size);
    a.size = init_size;
    return a;
}

void array_free(Array *a)
{
    free(a->array);
    a->array=NULL;
    a->size=0;
}
int main()
{
    Array a = array_create(100);
    return 0;
}