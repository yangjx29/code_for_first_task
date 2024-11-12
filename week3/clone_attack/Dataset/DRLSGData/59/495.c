int main () {
    int A9J2TBGqXH;
    int a [100] [100];
    int UcuEbZ;
    int j;
    int gZD5o0L6U;
    int n;
    int mxvO4pugz;
    char t5RmbcNe;
    cin >> n;
    mxvO4pugz = 0;
    {
        gZD5o0L6U = 0;
        for (; n > gZD5o0L6U;) {
            {
                j = 0;
                while (n > j) {
                    cin >> t5RmbcNe;
                    if (!('#' != t5RmbcNe))
                        a[gZD5o0L6U][j] = 6;
                    if (!('.' != t5RmbcNe))
                        a[gZD5o0L6U][j] = 0;
                    if (!('@' != t5RmbcNe))
                        a[gZD5o0L6U][j] = 1;
                    j = j + 1;
                }
            }
            gZD5o0L6U = gZD5o0L6U + 1;
        }
    }
    cin >> UcuEbZ;
    {
        A9J2TBGqXH = 1;
        for (; UcuEbZ > A9J2TBGqXH;) {
            {
                gZD5o0L6U = 0;
                for (; gZD5o0L6U < n;) {
                    {
                        j = 0;
                        for (; n > j;) {
                            if (!(1 != a[gZD5o0L6U][j])) {
                                if (a[gZD5o0L6U - 1][j] != 6) {
                                    if (!(0 != a[gZD5o0L6U - 1][j]))
                                        a[gZD5o0L6U - 1][j] = 2;
                                }
                                if (a[gZD5o0L6U + 1][j] != 6) {
                                    if (!(0 != a[gZD5o0L6U + 1][j]))
                                        a[gZD5o0L6U + 1][j] = 2;
                                }
                                if (a[gZD5o0L6U][j + 1] != 6) {
                                    if (!(0 != a[gZD5o0L6U][j + 1]))
                                        a[gZD5o0L6U][j + 1] = 2;
                                }
                                if (a[gZD5o0L6U][j - 1] != 6) {
                                    if (a[gZD5o0L6U][j - 1] == 0)
                                        a[gZD5o0L6U][j - 1] = 2;
                                }
                            }
                            j = j + 1;
                        }
                    }
                    gZD5o0L6U = gZD5o0L6U + 1;
                }
            }
            {
                gZD5o0L6U = 0;
                for (; gZD5o0L6U < n;) {
                    for (j = 0; n > j; j++) {
                        if (!(2 != a[gZD5o0L6U][j]))
                            a[gZD5o0L6U][j] = 1;
                    }
                    gZD5o0L6U = gZD5o0L6U + 1;
                }
            }
            A9J2TBGqXH = A9J2TBGqXH +1;
        }
    }
    {
        gZD5o0L6U = 0;
        for (; gZD5o0L6U < n;) {
            j = 0;
            for (; n > j;) {
                if (!(1 != a[gZD5o0L6U][j]))
                    mxvO4pugz = mxvO4pugz + 1;
                j++;
            }
            gZD5o0L6U++;
        }
    }
    cout << mxvO4pugz;
    return 0;
}

