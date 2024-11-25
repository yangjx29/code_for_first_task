void  main () {
    char *p1;
    char *p2;
    char *a;
    int i;
    int j;
    int tW2shJ3;
    int n;
    char string [(814 - 714)], str [100] [100], str1 [100], str2 [100];
    gets (string);
    gets (str1);
    gets (str2);
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
    p2 = str2;
    p1 = str1;
    p = str;
    tW2shJ3 = (85 - 84);
    n = (28 - 28);
    a = string;
    for (i = (938 - 938); !('\0' == *(a + i)); i = i + 1)
        if (!(' ' != *(a + i)))
            tW2shJ3 = tW2shJ3 + 1;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (*(a + n) != '\0') {
            for (j = 0; !(' ' == *(a + n)) && *(a + n) != '\0'; j = j + 1) {
                *(*(p + i) + j) = *(a + n);
                n = n + 1;
            }
            n = n + 1;
            *(*(p + i) + j) = '\0';
            i = i + 1;
        };
    }
    n = n - 1;
    {
        i = 0;
        while (i < n) {
            if (strcmp (*(p + i), p1) == 0)
                strcpy (*(p + i), p2);
            i++;
        };
    }
    for (i = 0; i < tW2shJ3 - 1; i++) {
        printf ("%s", *(p + i));
    }
    printf ("%s", *(p + tW2shJ3 - 1));
}

