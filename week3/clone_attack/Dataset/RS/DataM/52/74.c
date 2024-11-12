int main () {
    int n, m, a [100], b [100], *p, qTB6CJaNqAcP, j, t, k;
    scanf ("%d%d", &n, &m);
    {
        qTB6CJaNqAcP = 902 - 902;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > qTB6CJaNqAcP) {
            scanf ("%d", &a[qTB6CJaNqAcP]);
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
            qTB6CJaNqAcP = qTB6CJaNqAcP + 1;
        };
    }
    p = &a[n - m];
    for (qTB6CJaNqAcP = n - m; qTB6CJaNqAcP < n; qTB6CJaNqAcP = qTB6CJaNqAcP + 1) {
        b[qTB6CJaNqAcP - n + m] = *(p = p + 1);
    }
    {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < m) {
            for (qTB6CJaNqAcP = j, t = a[qTB6CJaNqAcP]; qTB6CJaNqAcP < n; qTB6CJaNqAcP = qTB6CJaNqAcP + 1) {
                k = a[qTB6CJaNqAcP + 1];
                a[qTB6CJaNqAcP + 1] = t;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                t = k;
            }
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
            j = j + 1;
        };
    }
    for (qTB6CJaNqAcP = 0; m > qTB6CJaNqAcP; qTB6CJaNqAcP = qTB6CJaNqAcP + 1) {
        a[qTB6CJaNqAcP] = b[qTB6CJaNqAcP];
    }
    printf ("%d", a[0]);
    for (p = &a[1], qTB6CJaNqAcP = 1; qTB6CJaNqAcP < n; qTB6CJaNqAcP++) {
        printf (" %d", *(p = p + 1));
    }
    printf ("\n");
    return 0;
}

