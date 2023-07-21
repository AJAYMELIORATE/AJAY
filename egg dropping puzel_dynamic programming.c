#include <stdio.h>

int eggDrop(int N, int K) {

    int Arr[N + 1][K + 1];
    int i, j, x;


    for (i = 1; i <= N; i++)
        Arr[i][0] = 0;


    for (j = 1; j <= K; j++)
        Arr[1][j] = j;


    for (i = 2; i <= N; i++)
        {
        for (j = 1; j <= K; j++)
        {
            Arr[i][j] = __INT_MAX__;
            for (x = 1; x <= j; x++) {
                int breaks = Arr[i - 1][x - 1];
                int survives = Arr[i][j - x];
                int attempts = 1 + (breaks > survives ? breaks : survives);
                if (attempts < Arr[i][j])
                    Arr[i][j] = attempts;
            }
        }
    }

    return Arr[N][K];
}

int main() {
    int N, K;
    printf("Enter the number of eggs: ");
    scanf("%d", &N);
    printf("Enter the number of floors: ");
    scanf("%d", &K);
    int res = eggDrop(N, K);
    printf("Minimum number of moves required: %d\n", res);
    return 0;
}
