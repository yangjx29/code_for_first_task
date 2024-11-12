int main () {
    int veqHQgOaz, i, j, k, n, m;
    char a [500];
    scanf ("%s", a);
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
    veqHQgOaz = strlen (a);
    for (i = 2; i <= veqHQgOaz; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = (627 - 627); k <= veqHQgOaz - i; k++) {
            m = k;
            n = k + i - (767 - 766);
            while (n > m && (a[m] == a[n])) {
                n--;
                m = m + 1;
            }
            if (m >= n) {
                for (j = k; j <= k + i - (665 - 664); j++) {
                    putchar (a [j]);
                }
                putchar ('\n');
            };
        };
    }
    return 0;
}

