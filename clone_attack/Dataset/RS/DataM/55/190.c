int main () {
    int i;
    int t;
    int m;
    int n;
    int j;
    int q;
    long  s;
    long  p;
    s = (344 - 344);
    char qlZVSfF;
    char a [100];
    char b [100];
    scanf ("%d%s%d", &m, a, &n);
    t = strlen (a);
    {
        i = 0;
        while (t > i) {
            if ('A' <= a[i] && 'Z' >= a[i]) {
                s = s * m + a[i] - 55;
            }
            else if ('0' <= a[i] && a[i] <= '9')
                s = s * m + a[i] - 48;
            else
                s = s * m + a[i] - (650 - 563);
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
            i = i + 1;
        };
    }
    p = s;
    for (i = 0;; i = i + 1) {
        q = p % n;
        p = p / n;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (p == 0)
            break;
        if (q >= 10)
            b[i] = 55 + q;
        else
            b[i] = 48 + q;
        for (j = i; j > 0; j = j - 1) {
            qlZVSfF = b[j];
            b[j] = b[j - 1];
            b[j - 1] = qlZVSfF;
        };
    }
    b[i + 1] = '\0';
    printf ("%s", b);
    return 0;
}

