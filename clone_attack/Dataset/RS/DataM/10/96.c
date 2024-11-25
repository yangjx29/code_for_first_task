int result [(936 - 896)];

int max (int a, int BE9Lx7qsKX21) {
    if (BE9Lx7qsKX21 < a)
        return a;
    else
        return BE9Lx7qsKX21;
}

void  f (int a [], int n) {
    int JRcrxgs8;
    int e8E2lQR7j09W;
    int FB1epE;
    result[1] = 1;
    {
        JRcrxgs8 = 2;
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
        while (JRcrxgs8 <= n) {
            FB1epE = 0;
            {
                e8E2lQR7j09W = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (e8E2lQR7j09W < JRcrxgs8) {
                    if (a[e8E2lQR7j09W] >= a[JRcrxgs8])
                        FB1epE = max (result[e8E2lQR7j09W], FB1epE);
                    e8E2lQR7j09W = e8E2lQR7j09W + 1;
                };
            }
            result[JRcrxgs8] = 1 + FB1epE;
            JRcrxgs8 = JRcrxgs8 +1;
        };
    };
}

main () {
    int n, JRcrxgs8, JM8KjZxl0Nv7 = 0;
    int a [40];
    scanf ("%d", &n);
    for (JRcrxgs8 = 1; JRcrxgs8 <= n; JRcrxgs8 = JRcrxgs8 +1) {
        scanf ("%d", &a[JRcrxgs8]);
    }
    f (a, n);
    for (JRcrxgs8 = 1; JRcrxgs8 <= n; JRcrxgs8++)
        JM8KjZxl0Nv7 = max (JM8KjZxl0Nv7, result[JRcrxgs8]);
    printf ("%d\n", JM8KjZxl0Nv7);
}

