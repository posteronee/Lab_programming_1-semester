#include <stdio.h>
#define N 6 // константа

int main() {
    int massive[N] = {0, 3, 5, 7, 11, 13};
    for (int i = 0; i < N; i++){
        printf("%d ", massive[i]);
    }

    printf("\n\n");

    int m1[2][2] = {1, 0, 1, 4};
    int m2[2][2] = {1, 2, 0, 1};
    int res[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for(int k = 0; k < 2; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for(int i = 0; i < 2; i++)
    {
        printf("%d %d \n", res[i][0], res[i][1]);

    }

    return 0;
}
