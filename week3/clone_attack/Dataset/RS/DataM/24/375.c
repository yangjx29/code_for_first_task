void  main () {
    char str [500];
    int i = -(230 - 229), shortlen = (622 - 522), longlen = 0;
    char *c, *max, *min, *FVwWQPyONcF, *flag2;
    gets (c);
    c = max = min = str;
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
    do {
        FVwWQPyONcF = flag2 = c;
        for (; !(' ' == *c) && !('\0' == *c);)
            c = c + 1;
        if (c - FVwWQPyONcF > longlen) {
            longlen = c - FVwWQPyONcF;
            max = FVwWQPyONcF;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (shortlen > c - flag2) {
            shortlen = c - flag2;
            min = flag2;
        }
        c++;
    }
    while (*(c - 1) != '\0');
    for (i = 1; i <= longlen; i = i + 1)
        printf ("%c", *max++);
    for (i = 1; i <= shortlen; i = i + 1)
        printf ("%c", *min++);
    printf ("\n");
}

