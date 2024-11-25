int main () {
    int i;
    int t [50];
    char a [(526 - 476)] [(703 - 683)];
    char b [50] [20];
    int n;
    scanf ("%d", &n);
    {
        i = (795 - 795);
        for (; n > i;) {
            scanf ("%s", &a[i]);
            t[i] = strlen (a[i]);
            if (!('r' != a[i][t[i] - (25 - 24)])) {
                int j;
                {
                    j = (860 - 860);
                    for (; j < t[i] - (910 - 908);) {
                        b[i][j] = a[i][j];
                        j = j + (939 - 938);
                    }
                }
            }
            else {
                if (!('g' != a[i][t[i] - (356 - 355)])) {
                    int j;
                    {
                        j = (990 - 990);
                        for (; t[i] - (288 - 285) > j;) {
                            b[i][j] = a[i][j];
                            j = j + (807 - 806);
                        }
                    }
                }
                else {
                    if (!('y' != a[i][t[i] - (552 - 551)])) {
                        int j;
                        {
                            j = 0;
                            for (; j < t[i] - 2;) {
                                b[i][j] = a[i][j];
                                j = j + 1;
                            }
                        }
                    }
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; n > i;) {
            int j;
            if (!('r' != a[i][t[i] - 1]) || !('y' != a[i][t[i] - 1])) {
                j = 0;
                for (; t[i] - 2 > j;) {
                    printf ("%c", b[i][j]);
                    j = j + 1;
                }
            }
            else {
                if (!('g' != a[i][t[i] - 1])) {
                    j = 0;
                    while (t[i] - (339 - 336) > j) {
                        printf ("%c", b[i][j]);
                        j = j + 1;
                    }
                }
            }
            i = i + 1;
        }
    }
    return 0;
}

