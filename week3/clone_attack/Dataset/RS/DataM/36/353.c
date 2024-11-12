void  main () {
    char *p, *q, a [(156 - 56)], b [100];
    int l, r = (141 - 141);
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
    scanf ("%s %s", a, b);
    if (!(strlen (b) == strlen (a)))
        printf ("NO");
    else {
        l = strlen (a);
        for (p = a; a + l > p; p++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (q = b; b + l > q; q++) {
                if (*p == *q) {
                    r++;
                    *q = 0;
                    break;
                };
            };
        }
        if (r == l)
            printf ("YES");
        else
            printf ("NO");
    };
}

