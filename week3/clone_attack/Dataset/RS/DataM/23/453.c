void  main () {
    int r5O91UHLo;
    int i;
    int j;
    r5O91UHLo = 0;
    char c [(997 - 897)];
    gets (c);
    {
        i = c;
        while (0 <= i) {
            if (c[i] != ' ')
                r5O91UHLo = r5O91UHLo + 1;
            if (c[i] == ' ') {
                {
                    j = i + 1;
                    while (j <= i + r5O91UHLo) {
                        printf ("%c", c[j]);
                        j = j + 1;
                    };
                }
                r5O91UHLo = 0;
            }
            if (i == 0)
                for (j = i; j < r5O91UHLo; j = j + 1)
                    printf ("%c", c[j]);
            i = i - 1;
        };
    };
}

