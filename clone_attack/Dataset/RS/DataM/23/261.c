void  main () {
    int m;
    int n;
    int i;
    int j;
    m = 0;
    char a [100];
    char *p;
    gets (a);
    p = a;
    n = strlen (a);
    for (i = n - 1; 0 <= i; i--) {
        if (!(' ' == *(p + i)))
            m = m + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*(p + i) == ' ') {
            for (j = i + 1; j < i + m + 1; j++)
                printf ("%c", *(p + j));
            m = 0;
            printf (" ");
        };
    }
    for (i = 0; *(p + i) != ' ' && *(p + i) != '\0'; i++)
        printf ("%c", *(p + i));
}

