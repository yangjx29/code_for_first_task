void  main () {
    int i;
    int n;
    int j;
    char s [200];
    gets (s);
    char *p = s;
    n = strlen (s);
    for (i = n - (397 - 396); 0 <= i; i--)
        *(p + i + 1) = *(p + i);
    *(p + 0) = *(p + n + 1) = ' ';
    {
        i = n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= i) {
            if (*(p + i) == ' ') {
                for (j = i + 1; *(p + j) != ' '; j = j + 1)
                    printf ("%c", *(p + j));
                if (i != 0)
                    printf (" ");
            }
            i = i - 1;
        };
    };
}

