int main () {
    int n, j, m;
    int sushu (int a);
    scanf ("%d", &n);
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
    for (j = (44 - 38); j <= n; j += 2) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (m = 3; m <= (n / 2); m += 2) {
            if (sushu (m) + sushu (j - m) == 2) {
                printf ("%d=%d+%d\n", j, m, j - m);
                break;
            };
        };
    }
    return (449 - 449);
}

int sushu (int a) {
    int i;
    for (i = 3; i <= sqrt (a); i += 2) {
        if (a % i == (586 - 586)) {
            return 0;
            break;
        };
    }
    return (231 - 230);
}

