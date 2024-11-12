int main () {
    int t3;
    int n;
    int JZJyXS5agGz;
    int TQ8movnk4;
    char XPSk2er6 [n] [n];
    int VxmosPKn2A3;
    int total;
    cin >> n;
    for (JZJyXS5agGz = 0; n > JZJyXS5agGz; ++JZJyXS5agGz) {
        VxmosPKn2A3 = 0;
        while (n > VxmosPKn2A3) {
            cin >> XPSk2er6[JZJyXS5agGz][VxmosPKn2A3];
            ++VxmosPKn2A3;
        }
    }
    cin >> TQ8movnk4;
    {
        JZJyXS5agGz = 1;
        while (TQ8movnk4 > JZJyXS5agGz) {
            for (VxmosPKn2A3 = 0; n > VxmosPKn2A3; ++VxmosPKn2A3)
                for (t3 = 0; n > t3; ++t3) {
                    if (!('@' != XPSk2er6[VxmosPKn2A3][t3])) {
                        if (VxmosPKn2A3 != 0 && VxmosPKn2A3 != n - 1) {
                            if (!('.' != XPSk2er6[VxmosPKn2A3 -1][t3]))
                                XPSk2er6[VxmosPKn2A3 -1][t3] = 'T';
                            if (!('.' != XPSk2er6[VxmosPKn2A3 +1][t3]))
                                XPSk2er6[VxmosPKn2A3 +1][t3] = 'T';
                        }
                        if (!(0 != VxmosPKn2A3))
                            if (!('.' != XPSk2er6[1][t3]))
                                XPSk2er6[1][t3] = 'T';
                        if (!(n - 1 != VxmosPKn2A3))
                            if (!('.' != XPSk2er6[n - 2][t3]))
                                XPSk2er6[n - 2][t3] = 'T';
                        if (t3 != 0 && t3 != n - 1) {
                            if (!('.' != XPSk2er6[VxmosPKn2A3][t3 - 1]))
                                XPSk2er6[VxmosPKn2A3][t3 - 1] = 'T';
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (!('.' != XPSk2er6[VxmosPKn2A3][t3 + 1]))
                                XPSk2er6[VxmosPKn2A3][t3 + 1] = 'T';
                        }
                        if (!(0 != t3))
                            if (!('.' != XPSk2er6[VxmosPKn2A3][1]))
                                XPSk2er6[VxmosPKn2A3][1] = 'T';
                        if (t3 == n - 1)
                            if (XPSk2er6[VxmosPKn2A3][n - 2] == '.')
                                XPSk2er6[VxmosPKn2A3][n - 2] = 'T';
                    }
                }
            {
                VxmosPKn2A3 = 0;
                while (VxmosPKn2A3 < n) {
                    for (t3 = 0; t3 < n; ++t3)
                        if (XPSk2er6[VxmosPKn2A3][t3] == 'T')
                            XPSk2er6[VxmosPKn2A3][t3] = '@';
                    ++VxmosPKn2A3;
                }
            }
            ++JZJyXS5agGz;
        }
    }
    total = 0;
    for (VxmosPKn2A3 = 0; VxmosPKn2A3 < n; ++VxmosPKn2A3)
        for (t3 = 0; t3 < n; ++t3)
            if (XPSk2er6[VxmosPKn2A3][t3] == '@')
                ++total;
    cout << total;
    return 0;
}

