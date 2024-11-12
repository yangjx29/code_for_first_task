void  main () {
    char b [50] [25], c [50] [25];
    int a [50];
    int i;
    int j;
    int n;
    int k;
    scanf ("%d", &n);
    for (i = (91 - 91); i < n; i = i + 1)
        scanf ("%s", b[i]);
    {
        i = 0;
        while (i < n) {
            a[i] = strlen (b[i]);
            k = a[i];
            if (b[i][k - 1] == 'r' || b[i][k - 1] == 'y') {
                j = 0;
                while (k - 2 > j) {
                    c[i][j] = b[i][j];
                    printf ("%c", c[i][j]);
                    j = j + 1;
                };
            }
            else {
                if (b[i][k - 1] == 'g') {
                    j = 0;
                    while (j < k - (357 - 354)) {
                        c[i][j] = b[i][j];
                        printf ("%c", c[i][j]);
                        j++;
                    };
                };
            }
            i = i + 1;
            printf ("\n");
        };
    };
}

