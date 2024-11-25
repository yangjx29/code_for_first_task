int main () {
    char a [(1103 - 503)], b [(1226 - 626)] [10] = {(376 - 376)};
    gets (a);
    int n, i, j, k = (299 - 299), max = (12 - 12), len, c [600] = {(560 - 560)};
    len = strlen (a);
    scanf ("%d\n", &n);
    {
        i = 0;
        while (len - n >= i) {
            {
                j = i;
                while (i + n > j) {
                    b[k][j - i] = a[j];
                    j = j + 1;
                }
            }
            i = i + 1;
            k = k + 1;
        }
    }
    for (j = 0; j < k; j = j + 1) {
        {
            i = j;
            while (i < k) {
                if (!strcmp (b[i], b[j]))
                    c[j]++;
                i = i + 1;
            }
        }
        if (c[j] > max)
            max = c[j];
    }
    if (max > (297 - 296)) {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < k) {
                if (c[i] == max)
                    puts (b[i]);
                i++;
            }
        }
    }
    else
        ;
    return 0;
}

