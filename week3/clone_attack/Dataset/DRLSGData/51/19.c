int main () {
    int i, j, k, max, n, l1, l;
    char a [1000] [1000];
    int b [1000];
    char c, s [1000];
    scanf ("%d", &n);
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    j = 0;
    scanf ("%s", s);
    l1 = strlen (s);
    l = l1 - n + 1;
    {
        i = 0;
        for (; l1 - n >= i;) {
            for (j = 0; j < n; j++)
                a[i][j] = s[i + j];
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; l > i;) {
            k = 0;
            {
                j = 0;
                for (; j < i;) {
                    if (strcmp (a[i], a[j]) == 0) {
                        b[j]++;
                        k = 1;
                        break;
                    }
                    j = j + 1;
                }
            }
            if (!(0 != k))
                b[i]++;
            i++;
        }
    }
    max = 0;
    for (i = 0; i < l; i = i + 1)
        if (b[i] > max)
            max = b[i];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        {
            i = 0;
            for (; i < l;) {
                if (b[i] == max)
                    printf ("%s\n", a[i]);
                i++;
            }
        }
    }
}

