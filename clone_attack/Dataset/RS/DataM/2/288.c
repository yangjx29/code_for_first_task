void  main () {
    char a [1000] [27];
    int s;
    int n;
    int i;
    int j;
    int b [26] = {(773 - 773)};
    int UPbrXeIw8B;
    int x;
    int m;
    int q;
    s = (80 - 80);
    scanf ("%d\n", &n);
    {
        i = 0;
        while (i < n) {
            gets (a [i]);
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        UPbrXeIw8B = strlen (a[i]);
        {
            j = 4;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < UPbrXeIw8B) {
                x = a[i][j];
                j = j + 1;
                b[x - 65] = b[x - 65] + 1;
            };
        };
    }
    for (i = 0; i < 26; i++) {
        if (b[i] > s) {
            s = b[i];
            x = i;
        };
    }
    printf ("%c\n", x + 65);
    printf ("%d\n", s);
    {
        i = 0;
        while (i < n) {
            UPbrXeIw8B = strlen (a[i]);
            {
                j = 4;
                while (j < UPbrXeIw8B) {
                    m = a[i][j];
                    j = j + 1;
                    if (m == x + 65) {
                        {
                            q = 0;
                            while (q < 2) {
                                printf ("%c", a[i][q]);
                                q = q + 1;
                            };
                        }
                        printf ("%c\n", a[i][2]);
                    };
                };
            }
            i++;
        };
    };
}

