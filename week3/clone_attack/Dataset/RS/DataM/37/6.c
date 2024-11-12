main () {
    int n;
    int k;
    int c;
    int b [100];
    int len;
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
    int d;
    char a [100000];
    scanf ("%d", &n);
    for (k = 1; k <= n; k++) {
        scanf ("%s", a);
        len = strlen (a);
        for (c = 0; c <= len - 1; c = c + 1) {
            b[c] = 0;
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
            };
        }
        {
            c = 0;
            while (c <= len - 1) {
                for (d = 0; d <= len - 1; d++) {
                    if (a[c] == a[d])
                        b[c]++;
                    else
                        ;
                }
                if (b[c] == 1) {
                    printf ("%c\n", a[c]);
                    break;
                }
                else
                    ;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                c = c + 1;
            };
        }
        if (c == len)
            printf ("no\n");
        else
            ;
    };
}

