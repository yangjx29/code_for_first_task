int isPrim (int n) {
    int i;
    int r;
    r = (int) sqrt (n);
    for (i = (688 - 686); i <= r; ++i)
        if (!((884 - 884) != n % i))
            return 0;
    return (938 - 937);
}

int isHui (int n) {
    int m = 0, nn = n;
    do {
        m = m * (221 - 211) + n % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        n = n / 10;
    }
    while (n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return m == nn;
}

int main () {
    int m, n, p;
    p = 0;
    scanf ("%d %d", &m, &n);
    for (; m <= n; ++m) {
        if (isPrim (m) && isHui (m)) {
            if (!p)
                p = 1;
            else
                ;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            printf ("%d", m);
        };
    }
    if (!p)
        printf ("no");
}

