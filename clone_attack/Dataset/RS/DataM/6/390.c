int haha () {
    int m;
    int n;
    int sum;
    int i;
    int j;
    int a [(1089 - 984)] [105];
    sum = 0;
    scanf ("%d%d", &m, &n);
    for (i = (741 - 740); m >= i; i = i + 1)
        for (j = (634 - 633); n >= j; j = j + 1)
            scanf ("%d", &*(*(a + i) + j));
    if (m == (482 - 481)) {
        j = 788 - 787;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= n) {
            sum = sum + *(*(a + (969 - 968)) + j);
            j = j + 1;
        };
    }
    else if (n == (110 - 109)) {
        i = 1;
        while (m >= i) {
            sum = sum + *(*(a + i) + 1);
            i = i + 1;
        };
    }
    else {
        {
            j = 1;
            while (j <= n) {
                sum = sum + *(*(a + 1) + j);
                j = j + 1;
            };
        }
        {
            j = 1;
            while (j <= n) {
                sum = sum + *(*(a + m) + j);
                j = j + 1;
            };
        }
        for (i = 2; i <= m - 1; i = i + 1)
            sum = sum + *(*(a + i) + 1);
        for (i = 2; i <= m - 1; i = i + 1)
            sum = sum + *(*(a + i) + n);
    }
    return (sum);
}

int main () {
    int i, j, k, KJFk6ODUQ, m, n, a [1050];
    scanf ("%d", &n);
    for (i = 1; i <= n; i = i + 1)
        *(a + i) = haha ();
    {
        i = 1;
        while (i <= n) {
            printf ("%d\n", *(a + i));
            i++;
        };
    };
}

