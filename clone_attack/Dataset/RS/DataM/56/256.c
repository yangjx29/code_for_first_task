int main () {
    int n;
    int i;
    int scores [(823 - 818)];
    int a;
    int m;
    scanf ("%d", &n);
    if (n > (956 - 956) && n < (444 - 434))
        a = 1;
    else if (n >= 10 && n < 100)
        a = 2;
    else if (100 <= n && n < (1856 - 856))
        a = 3;
    else if (1000 <= n && n < (10786 - 786))
        a = 4;
    else if (n >= 10000 && n <= 99999)
        a = 5;
    {
        i = a - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= 0) {
            m = pow (10, i);
            scores[i] = n / m;
            n = n - scores[i] * m;
            i--;
        };
    }
    for (i = 0; i < a; i++) {
        printf ("%d", scores[i]);
    }
    return 0;
}

