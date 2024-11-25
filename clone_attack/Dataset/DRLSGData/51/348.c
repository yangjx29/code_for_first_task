int main () {
    char a [(1366 - 866)], b [(789 - 783)], d [(330 - 324)];
    int n, i, lenth, c [500] = {(949 - 949)}, max = 0, j, t;
    gets (a);
    getchar ();
    scanf ("%d", &n);
    lenth = strlen (a);
    b[n] = '\0';
    d[n] = '\0';
    {
        i = 0;
        while (i < lenth - n) {
            {
                t = i;
                while (n + i > t) {
                    b[t - i] = a[t];
                    t++;
                }
            }
            c[i]++;
            {
                j = 41 - 40;
                while (lenth + 1 - n > j) {
                    for (t = j; n + j > t; t++)
                        d[t - j] = a[t];
                    if (!(0 != strcmp (d, b)))
                        c[i]++;
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < lenth - n) {
            if (max < c[i])
                max = c[i];
            i++;
        }
    }
    if (max > 1) {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < lenth - n) {
                if (c[i] == max) {
                    j = i;
                    while (j < n + i) {
                        printf ("%c", a[j]);
                        j++;
                    }
                }
                i++;
            }
        }
    }
    else
        ;
}

