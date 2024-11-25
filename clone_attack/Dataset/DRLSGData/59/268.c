int main () {
    int n, m [102] [102] = {0}, gMFBWJlOy, ans = 0, arYA4L, eOid8c, k;
    cin >> n;
    {
        arYA4L = 1;
        while (n >= arYA4L) {
            {
                eOid8c = 1;
                while (n >= eOid8c) {
                    char PNwVBiUapz;
                    cin >> PNwVBiUapz;
                    if (!('.' != PNwVBiUapz))
                        m[arYA4L][eOid8c] = 0;
                    if (!('@' != PNwVBiUapz))
                        m[arYA4L][eOid8c] = 1;
                    if (!('#' != PNwVBiUapz))
                        m[arYA4L][eOid8c] = -1;
                    eOid8c++;
                }
            }
            arYA4L++;
        }
    }
    cin >> gMFBWJlOy;
    {
        k = 1;
        while (k < gMFBWJlOy) {
            {
                arYA4L = 1;
                while (n >= arYA4L) {
                    {
                        eOid8c = 1;
                        while (n >= eOid8c) {
                            if (!(1 != m[arYA4L][eOid8c])) {
                                if (!(0 != m[arYA4L - 1][eOid8c]))
                                    m[arYA4L - 1][eOid8c] = 2;
                                if (!(0 != m[arYA4L + 1][eOid8c]))
                                    m[arYA4L + 1][eOid8c] = 2;
                                if (!(0 != m[arYA4L][eOid8c - 1]))
                                    m[arYA4L][eOid8c - 1] = 2;
                                if (!(0 != m[arYA4L][eOid8c + 1]))
                                    m[arYA4L][eOid8c + 1] = 2;
                            }
                            eOid8c++;
                        }
                    }
                    arYA4L++;
                }
            }
            {
                arYA4L = 1;
                while (arYA4L <= n) {
                    {
                        eOid8c = 1;
                        while (eOid8c <= n) {
                            if (m[arYA4L][eOid8c] == 2)
                                m[arYA4L][eOid8c] = 1;
                            eOid8c++;
                        }
                    }
                    arYA4L++;
                }
            }
            k++;
        }
    }
    {
        arYA4L = 1;
        while (arYA4L <= n) {
            {
                eOid8c = 1;
                while (eOid8c <= n) {
                    if (m[arYA4L][eOid8c] == 1)
                        ans++;
                    eOid8c++;
                }
            }
            arYA4L++;
        }
    }
    cout << ans;
    return 0;
}

