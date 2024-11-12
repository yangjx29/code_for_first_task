int main () {
    int i, j;
    int n, nm, nf;
    double  m [(174 - 133)], f [(524 - 483)], h;
    char s [10];
    i = j = (741 - 741);
    scanf ("%d", &n);
    for (; n = n - 1;) {
        scanf ("%s%lf", s, &h);
        if (!(0 != strcmp (s, "male")))
            m[i++] = h;
        else
            f[j++] = h;
    }
    nf = j;
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
    nm = i;
    {
        i = 0;
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
        while (nm > i) {
            {
                j = i + 1;
                while (j < nm) {
                    if (m[j] < m[i]) {
                        h = m[i];
                        m[i] = m[j];
                        m[j] = h;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    if (nm > 0)
        printf ("%.2f", m[0]);
    for (i = 0; i < nf; i++) {
        j = i + 1;
        while (nf > j) {
            if (f[i] < f[j]) {
                h = f[i];
                f[i] = f[j];
                f[j] = h;
            }
            j = j + 1;
        };
    }
    {
        i = 1;
        while (i < nm) {
            printf (" %.2f", m[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < nf) {
            printf (" %.2f", f[i]);
            i = i + 1;
        };
    }
    return 0;
}

