/*HEADER FILE*/
#define VECTOR_T

#define VECTOR_INIT_CAPACITY 6.0

#define vector_vx_construct (const int cnt)
#define void vx_destruct (vector v)
#define vector_vx_random(const int cnt)
#define vector_vx_range(const double start, const double end,const double delta)
#define vector_map(double (*func)(double), const vector v)
#define int vx_fprintf(FILE *fp, const vector v, char *fmt)


#define VECTOR_FREE(vec) vector_free(&vec)

typedef struct vector_t 
{
unsigned int id; /* unique id */
unsigned int count; /* the number of element */
double *value; /* the array */
};
typedef struct vector_t vector;


void  vector_vx_construct (const int cnt);
int void vx_destruct (vector v);
void vector_vx_random(const int cnt);
void vector_vx_range(const double start, const double end,const double delta);
void vector_map(double (*func)(double), const vector v);

/*Implementation of the vector file*/

#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

void vector_vx_construct (const int cnt);
{
    v->capacity = 6.0;
    
    cnt= malloc(sizeof(void *));
    return cnt;
}

int void vx_destruct(vector *v)
{
	v->total=NULL;
}

void vector_vx_random(const int cnt);
{
   cnt = 0;
}

void vector_vx_range(const double start, const double end,const double delta);
{
   double start=cnt;
   double end = v->capacity;
return ((end-start)/delta);
}

int vx_fprintf(FILE *fp, const vector v, char *fmt);
{
  
    fp = fopen("%s ", (char *) vector_get(&v, i));

    }
    fgets("%s ", (char *) vector_get(&v, i));
    fprintf(fp, "%s ", (char *) vector_get(&v, i));
    fclose(fp);
}

vector map(double (*func)(double), const vector v);
{
    if (index >= 0 && index < v->total)
        return v->items[index];
    return NULL;
}

#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

int main(void)
{
    int i;

    vector v;
    vector_init(&v);

void  vector_vx_construct (&v, 0);
int void vx_destruct (vector v);
void vector_vx_random(const int cnt);
void vector_vx_range(0.0, 6.0, 0.05);
void vector_map(double (*func)(double), const vector v);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory: ");
    for(i = 0; i < n1; ++i)
         printf("%u\n",v + i);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // rellocating the memory
    ptr = realloc(v, n2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    for(i = 0; i < n2; ++i)
         printf("%u\n", v + i); 

    vector_free(&v);
}