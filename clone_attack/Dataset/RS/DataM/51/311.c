int main () {
    int m;
    m = 0;
    int i;
    int j;
    int k;
    int a [600];
    char XYA9cE [600];
    int n;
    scanf ("%d", &n);
    scanf ("%s", XYA9cE);
    for (i = (461 - 461); strlen (XYA9cE) - n + 1 > i; i++) {
        a[i] = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = i + 1; strlen (XYA9cE) - n + 1 > j; j = j + 1) {
            for (k = (475 - 475); n > k; k = k + 1)
                if (XYA9cE[j + k] != XYA9cE[i + k])
                    break;
            if (!(n != k))
                a[i]++;
        };
    }
    for (i = 0; i < strlen (XYA9cE) - n + 1; i++)
        if (m < a[i])
            m = a[i];
    if (2 > m)
        ;
    else {
        printf ("%d\n", m);
        for (i = 0; i < strlen (XYA9cE) - n + 1; i++) {
            if (a[i] == m) {
                for (j = i; j < i + n; j++)
                    printf ("%c", XYA9cE[j]);
            };
        };
    }
    return 0;
}

