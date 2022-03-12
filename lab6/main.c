#include <stdio.h>
#include <mm_malloc.h>
// выделение динамической памяти

#define N 4

int main() {
    int num[] = {0, 3, 5, 7};
    int *pv = num;

    for(int i = 0; i < N; i++)
    {
        printf("%2d ", *(pv + i));
    }

    printf("\n");
    int *pvd;
    pvd = (int*)malloc(N * sizeof(int));

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &pvd[i]);
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d ", *(pvd + i));
    }

    free(pvd);

    return 0;
}


