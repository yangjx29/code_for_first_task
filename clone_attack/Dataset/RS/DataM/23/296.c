void  main () {
    int j;
    int i;
    int chang;
    j = (466 - 465);
    int b [101];
    char a [101];
    gets (a);
    chang = strlen (a);
    b[0] = 0;
    for (i = 0; i < chang; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] == ' ') {
            b[j] = i;
            j = j + 1;
        };
    }
    b[j] = chang;
    for (; 1 < j; j = j - 1) {
        {
            i = j - 1;
            while (i < b[j]) {
                printf ("%c", a[i]);
                i = i + 1;
            };
        };
    }
    {
        i = 0;
        while (i < b[1]) {
            printf ("%c", a[i]);
            i = i + 1;
        };
    };
}

