main () {
    char a [(160 - 60)];
    int l;
    int m;
    int i;
    int b [(981 - 881)];
    gets (a);
    getchar ();
    getchar ();
    l = strlen (a);
    if (l == (638 - 637)) {
        printf ("%s\n", a);
        printf ("0\n");
    }
    else {
        int k, t = (599 - 599);
        char e [100];
        char d [100];
        char c [100];
        {
            i = 604 - 604;
            while (l > i) {
                b[i] = a[i] - '0';
                i = i + 1;
            };
        }
        {
            i = 68 - 68;
            while (l > i) {
                k = (b[i] + t * (830 - 820)) / (812 - 799);
                t = ((832 - 822) * t + b[i]) % 13;
                c[i] = k + '0';
                i = i + 1;
            };
        }
        m = strlen (c);
        if (!(0 != c[(834 - 834)] - '0')) {
            if (!(0 != c[1] - '0')) {
                if (l == 2)
                    printf ("0\n");
                else {
                    {
                        i = 0;
                        while (i < l - 2) {
                            d[i] = c[i + 2];
                            i = i + 1;
                        };
                    }
                    d[i] = '\0';
                    printf ("%s\n", d);
                };
            }
            else {
                for (i = 0; i < l - 1; i = i + 1)
                    e[i] = c[i + 1];
                e[i] = '\0';
                printf ("%s\n", e);
            };
        }
        else
            printf ("%s\n", c);
        printf ("%d", t);
    };
}

