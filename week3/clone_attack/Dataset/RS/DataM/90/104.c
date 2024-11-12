int main () {
    int t;
    int ShHplTSQjR;
    int N;
    int xi1Z5ym;
    int r5PUnIs;
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int H6DaFhLMbIZ [(745 - 715)] [30];
    scanf ("%d", &t);
    for (xi1Z5ym = (570 - 569); t >= xi1Z5ym; xi1Z5ym = xi1Z5ym + 1) {
        scanf ("%d %d", &ShHplTSQjR, &N);
        memset (H6DaFhLMbIZ, (520 - 520), sizeof (int));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (r5PUnIs = 0; ShHplTSQjR >= r5PUnIs; r5PUnIs++) {
            for (n = 1; N >= n; n = n + 1) {
                if (r5PUnIs == 0 || r5PUnIs == 1 || n == 1)
                    H6DaFhLMbIZ[r5PUnIs][n] = 1;
                else if (r5PUnIs >= n)
                    H6DaFhLMbIZ[r5PUnIs][n] = H6DaFhLMbIZ[r5PUnIs - n][n] + H6DaFhLMbIZ[r5PUnIs][n - 1];
                else
                    H6DaFhLMbIZ[r5PUnIs][n] = H6DaFhLMbIZ[r5PUnIs][n - 1];
            };
        }
        printf ("%d\n", H6DaFhLMbIZ[ShHplTSQjR][N]);
    }
    return 0;
}

