void  main () {
    char a [10000], t;
    gets (a);
    int i, j, k = 0, m = 0, x;
    for (i = 0; !(' ' == a[i]);)
        i = i + 1;
    for (j = i + 1; !('\0' == a[j]);)
        j = j + 1;
    if (j == 2 * i + 1) {
        j = i + 1;
        while (j < 2 * i + 1) {
            {
                x = 0;
                k = j - i - 1;
                while (k < i) {
                    if (a[j] == a[k]) {
                        x = 0;
                        m++;
                        t = a[k];
                        a[k] = a[j - i - 1];
                        a[j - i - 1] = t;
                        j++;
                    }
                    else
                        x++;
                    k++;
                };
            }
            if (x == 2 * i + 1 - j)
                j++;
        };
    }
    if (m == i)
        printf ("YES");
    else
        printf ("NO");
}

