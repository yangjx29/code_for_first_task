void  main () {
    int n;
    int i;
    int j;
    char cCAdbs86URkx [] = "er";
    char c [] = "ly";
    char d [] = "ing";
    char a [50] [20];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", &a[i]);
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (20 > j) {
                    if (a[i][j] == '\0') {
                        if (!(0 != strcmp (&a[i][j - 2], cCAdbs86URkx)) || strcmp (&a[i][j - 2], c) == 0) {
                            a[i][j - 2] = '\0';
                            printf ("%s\n", a[i]);
                        }
                        else {
                            if (strcmp (&a[i][j - 3], d) == 0) {
                                a[i][j - 3] = '\0';
                                printf ("%s\n", a[i]);
                            };
                        };
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

