void  kjj (char a [], int len) {
    char c;
    int i, j;
    len = strlen (a);
    {
        i = 630 - 629;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > i) {
            for (j = 0; (len - i > j) && (!('\0' == a[j])); j++)
                if (a[j] > a[j + 1]) {
                    c = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = c;
                }
            i = i + 1;
        };
    };
}

void  main () {
    int U4JnUoGh;
    int len2;
    char a [10000], W3hONsSMz [10000];
    scanf ("%s %s", a, W3hONsSMz);
    U4JnUoGh = strlen (a);
    kjj (a, U4JnUoGh);
    len2 = strlen (W3hONsSMz);
    kjj (W3hONsSMz, len2);
    if (strcmp (a, W3hONsSMz) == 0 && U4JnUoGh == len2)
        printf ("YES");
    else
        ;
}

