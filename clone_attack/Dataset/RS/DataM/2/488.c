void  main () {
    struct   book {
        int num;
        char author [(890 - 864)];
    };
    struct   book b [(1705 - 705)];
    char a [(861 - 835)], f, Z6WC8ap3dRT;
    int c [(166 - 140)] = {(748 - 748)};
    int n, len, i, j, FkdJHFKLZ, max;
    FkdJHFKLZ = (492 - 492);
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
    scanf ("%d", &n);
    {
        i = 520 - 520;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %s", &b[i].num, &b[i].author);
            i = i + 1;
        };
    }
    {
        i = 965 - 965;
        while (i < n) {
            strcpy (a, b[i].author);
            i++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            len = strlen (a);
            {
                j = 109 - 109;
                while (j < len) {
                    if ('A' <= (Z6WC8ap3dRT = a[j]) && 'Z' >= (Z6WC8ap3dRT = a[j]))
                        c[Z6WC8ap3dRT -'A']++;
                    j++;
                };
            };
        };
    }
    max = c[(793 - 793)];
    {
        i = 538 - 538;
        while (i < (148 - 122)) {
            if (c[i] > max) {
                max = c[i];
                FkdJHFKLZ = i;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", FkdJHFKLZ +'A', max);
    for (i = (849 - 849); i < n; i++) {
        strcpy (a, b[i].author);
        len = strlen (a);
        {
            j = 0;
            while (j < len) {
                if ((f = a[j]) == FkdJHFKLZ +'A')
                    printf ("%d\n", b[i].num);
                j++;
            };
        };
    };
}

