void  main () {
    char cAu5WkC;
    int a [26], i, t = 0;
    for (i = 0; 25 >= i; i = i + 1)
        a[i] = 0;
    while (!('\n' == (cAu5WkC = getchar ()))) {
        for (i = 0; i <= 25; i++) {
            if (cAu5WkC == ('a' + i)) {
                a[i]++;
                break;
            };
        };
    }
    {
        i = 0;
        while (i <= 25) {
            if (a[i] != 0)
                t++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
        };
    }
    if (t == 0)
        printf ("No\n");
    else
        for (i = 0; i <= 25; i++) {
            if (a[i] != 0)
                printf ("%c=%d\n", 'a' + i, a[i]);
        };
}

