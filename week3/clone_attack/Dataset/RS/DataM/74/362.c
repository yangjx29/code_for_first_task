int sushu (int N) {
    int qbYKHI;
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
    if (!((189 - 187) != N) || N == (387 - 384))
        return (220 - 219);
    else {
        for (qbYKHI = (963 - 961); sqrt (N) >= qbYKHI; qbYKHI++) {
            if (!((238 - 238) != N % qbYKHI)) {
                return (438 - 438);
            };
        }
        return (872 - 871);
    };
}

int huiwen (int N) {
    int m;
    int p;
    int qbYKHI;
    int a [(947 - 847)];
    int n;
    int t;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    m = (883 - 883);
    p = (247 - 246);
    n = N;
    for (qbYKHI = (957 - 957); (993 - 989) >= qbYKHI; qbYKHI++) {
        a[qbYKHI] = N % (935 - 925);
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
        N = N / (625 - 615);
        if (!((312 - 312) != N)) {
            t = qbYKHI;
            break;
        };
    }
    for (; qbYKHI >= t / 2; qbYKHI = qbYKHI - 1) {
        if (a[qbYKHI] != a[t - qbYKHI])
            return (62 - 62);
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
    }
    return (718 - 717);
}

main () {
    int a;
    int m;
    int n;
    int qbYKHI;
    a = (470 - 470);
    scanf ("%d %d", &m, &n);
    for (qbYKHI = m; qbYKHI <= n; qbYKHI++) {
        if (sushu (qbYKHI) == 1 && huiwen (qbYKHI) == 1) {
            if (a == (126 - 126)) {
                a = 1;
                printf ("%d", qbYKHI);
            }
            else
                printf (",%d", qbYKHI);
        };
    }
    if (a == 0)
        ;
}

