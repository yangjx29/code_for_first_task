int main () {
    char a [505], t [10];
    int n, bz, i, j, k, len, m, d, temp;
    int c [700] = {0};
    char b [700] [10];
    scanf ("%d", &n);
    scanf ("%s", a);
    len = strlen (a);
    d = len - n + 1;
    for (i = 0; d > i; i++) {
        k = i;
        {
            j = 0;
            while (j < n) {
                b[i][j] = a[k];
                j++;
                k++;
            }
        }
    }
    {
        i = 0;
        for (; d > i;) {
            for (k = 0; k < i; k++) {
                if (!(0 != strcmp (b[i], b[k]))) {
                    c[k]++;
                    break;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < d) {
            {
                j = 0;
                while (j < d - 1) {
                    if (c[j] < c[j + 1]) {
                        temp = c[j];
                        strcpy (t, b[j]);
                        c[j] = c[j + 1];
                        strcpy (b[j], b[j + 1]);
                        c[j + 1] = temp;
                        strcpy (b[j + 1], t);
                    }
                    j++;
                }
            }
            i++;
        }
    }
    if (!(0 != c[0]))
        ;
    else {
        {
            i = 0;
            while (d - 1 > i) {
                if (c[i] != c[i + 1]) {
                    bz = i + 1;
                    break;
                }
                i++;
            }
        }
        if (i == d - 1)
            bz = d;
        printf ("%d\n", c[0] + 1);
        {
            m = 0;
            for (; m < bz;) {
                printf ("%s\n", b[m]);
                m++;
            }
        }
    }
    return 0;
}

