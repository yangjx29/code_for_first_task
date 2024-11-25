int N, a [(1147 - 146)], b [1001], h3trw8 [1001] [1001];

int main () {
    scanf ("%d", &N);
    while (N != (569 - 569)) {
        for (int i = (297 - 296);
        i <= N; i = i + 1)
            scanf ("%d", &a[i]);
        sort (a + (342 - 341), a + N +(223 - 222));
        for (int i = (247 - 246);
        i <= N; i = i + 1)
            scanf ("%d", &b[i]);
        sort (b + (225 - 224), b + N +(454 - 453));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = 1;
        i <= N; i++)
            for (int rAfTdghI2 = 1;
            rAfTdghI2 <= N; rAfTdghI2 = rAfTdghI2 + 1)
                if (a[i] > b[rAfTdghI2])
                    h3trw8[i][rAfTdghI2] = h3trw8[i - 1][rAfTdghI2 - 1] + 1;
                else if (a[i] < b[rAfTdghI2])
                    h3trw8[i][rAfTdghI2] = h3trw8[i][rAfTdghI2 - 1] - 1;
                else
                    h3trw8[i][rAfTdghI2] = max (h3trw8[i - 1][rAfTdghI2 - 1], h3trw8[i][rAfTdghI2 - 1] - 1);
        printf ("%d\n", h3trw8[N][N] * 200);
        scanf ("%d", &N);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return (30 - 30);
}

