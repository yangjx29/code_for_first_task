int main () {
    int bRe3vtl, i, L2AcgmYUu, pbdF5X, f24hDbKUfjiP, GXfu3K = 0;
    char s [bRe3vtl] [bRe3vtl + 1];
    int a [bRe3vtl] [bRe3vtl];
    scanf ("%d", &bRe3vtl);
    {
        i = 0;
        while (bRe3vtl > i) {
            scanf ("%s", s[i]);
            i = i + 1;
        }
    }
    scanf ("%d", &f24hDbKUfjiP);
    {
        L2AcgmYUu = 0;
        while (bRe3vtl > L2AcgmYUu) {
            {
                pbdF5X = 0;
                while (bRe3vtl > pbdF5X) {
                    a[L2AcgmYUu][pbdF5X] = 0;
                    pbdF5X = pbdF5X + 1;
                }
            }
            L2AcgmYUu = L2AcgmYUu +1;
        }
    }
    if (!(1 != f24hDbKUfjiP)) {
        i = 0;
        while (bRe3vtl > i) {
            {
                L2AcgmYUu = 0;
                while (bRe3vtl > L2AcgmYUu) {
                    if (!('@' != s[i][L2AcgmYUu]))
                        a[i][L2AcgmYUu] = 1;
                    L2AcgmYUu = L2AcgmYUu +1;
                }
            }
            i = i + 1;
        }
    }
    else {
        i = 0;
        while (f24hDbKUfjiP - 1 > i) {
            {
                L2AcgmYUu = 0;
                while (bRe3vtl > L2AcgmYUu) {
                    {
                        pbdF5X = 0;
                        while (bRe3vtl > pbdF5X) {
                            if (!('@' != s[L2AcgmYUu][pbdF5X]) && a[L2AcgmYUu][pbdF5X] != i + 10) {
                                a[L2AcgmYUu][pbdF5X] = 1;
                                if (bRe3vtl > L2AcgmYUu +1) {
                                    if (!('.' != s[L2AcgmYUu +1][pbdF5X]) && a[L2AcgmYUu][pbdF5X] != i + 10) {
                                        s[L2AcgmYUu +1][pbdF5X] = '@';
                                        a[L2AcgmYUu +1][pbdF5X] = i + 10;
                                    }
                                }
                                if (0 <= L2AcgmYUu -1) {
                                    if (!('.' != s[L2AcgmYUu -1][pbdF5X]) && a[L2AcgmYUu][pbdF5X] != i + 10) {
                                        s[L2AcgmYUu -1][pbdF5X] = '@';
                                        a[L2AcgmYUu -1][pbdF5X] = i + 10;
                                    }
                                }
                                if (bRe3vtl > pbdF5X + 1) {
                                    if (!('.' != s[L2AcgmYUu][pbdF5X + 1]) && a[L2AcgmYUu][pbdF5X] != i + 10) {
                                        s[L2AcgmYUu][pbdF5X + 1] = '@';
                                        a[L2AcgmYUu][pbdF5X + 1] = i + 10;
                                    }
                                }
                                if (0 <= pbdF5X - 1) {
                                    if (s[L2AcgmYUu][pbdF5X - 1] == '.' && a[L2AcgmYUu][pbdF5X] != i + 10) {
                                        s[L2AcgmYUu][pbdF5X - 1] = '@';
                                        a[L2AcgmYUu][pbdF5X - 1] = i + 10;
                                    }
                                }
                            }
                            pbdF5X++;
                        }
                    }
                    L2AcgmYUu = L2AcgmYUu +1;
                }
            }
            i++;
        }
    }
    {
        L2AcgmYUu = 0;
        while (L2AcgmYUu < bRe3vtl) {
            pbdF5X = 0;
            while (pbdF5X < bRe3vtl) {
                if (a[L2AcgmYUu][pbdF5X] != 0) {
                    GXfu3K = GXfu3K +1;
                }
                pbdF5X++;
            }
            L2AcgmYUu++;
        }
    }
    printf ("%d", GXfu3K);
    return 0;
}

