int main () {
    char ihr0ENJC7Tj [100] [100];
    int P4blFOQLu, C2nvo8QdeWk, KamkVps0, zteic34KZ1ov, XUF5ScDAPMv, M59cWVxt = 0;
    cin >> P4blFOQLu;
    {
        KamkVps0 = 0;
        while (P4blFOQLu > KamkVps0) {
            {
                zteic34KZ1ov = 0;
                while (P4blFOQLu > zteic34KZ1ov) {
                    cin >> ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov];
                    zteic34KZ1ov = zteic34KZ1ov + 1;
                }
            }
            KamkVps0 = KamkVps0 +1;
        }
    }
    cin >> C2nvo8QdeWk;
    {
        XUF5ScDAPMv = 1;
        while (C2nvo8QdeWk > XUF5ScDAPMv) {
            XUF5ScDAPMv = XUF5ScDAPMv +1;
            {
                KamkVps0 = 1;
                while (P4blFOQLu -1 > KamkVps0) {
                    {
                        zteic34KZ1ov = 1;
                        while (P4blFOQLu -1 > zteic34KZ1ov) {
                            if (!('@' != ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov])) {
                                if (!('.' != ihr0ENJC7Tj[KamkVps0 -1][zteic34KZ1ov]))
                                    ihr0ENJC7Tj[KamkVps0 -1][zteic34KZ1ov] = '*';
                                if (!('.' != ihr0ENJC7Tj[KamkVps0 +1][zteic34KZ1ov]))
                                    ihr0ENJC7Tj[KamkVps0 +1][zteic34KZ1ov] = '*';
                                if (!('.' != ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov - 1]))
                                    ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov - 1] = '*';
                                if (ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov + 1] == '.')
                                    ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov + 1] = '*';
                            }
                            zteic34KZ1ov = zteic34KZ1ov + 1;
                        }
                    }
                    KamkVps0 = KamkVps0 +1;
                }
            }
            for (zteic34KZ1ov = 1; P4blFOQLu -1 > zteic34KZ1ov; zteic34KZ1ov = zteic34KZ1ov + 1) {
                if (!('@' != ihr0ENJC7Tj[0][zteic34KZ1ov])) {
                    if (ihr0ENJC7Tj[0][zteic34KZ1ov - 1] == '.')
                        ihr0ENJC7Tj[0][zteic34KZ1ov - 1] = '*';
                    if (ihr0ENJC7Tj[0][zteic34KZ1ov + 1] == '.')
                        ihr0ENJC7Tj[0][zteic34KZ1ov + 1] = '*';
                    if (!('.' != ihr0ENJC7Tj[1][zteic34KZ1ov]))
                        ihr0ENJC7Tj[1][zteic34KZ1ov] = '*';
                }
                if (!('@' != ihr0ENJC7Tj[P4blFOQLu -1][zteic34KZ1ov])) {
                    if (ihr0ENJC7Tj[P4blFOQLu -1][zteic34KZ1ov - 1] == '.')
                        ihr0ENJC7Tj[P4blFOQLu -1][zteic34KZ1ov - 1] = '*';
                    if (!('.' != ihr0ENJC7Tj[P4blFOQLu -1][zteic34KZ1ov + 1]))
                        ihr0ENJC7Tj[P4blFOQLu -1][zteic34KZ1ov + 1] = '*';
                    if (ihr0ENJC7Tj[P4blFOQLu -2][zteic34KZ1ov] == '.')
                        ihr0ENJC7Tj[P4blFOQLu -2][zteic34KZ1ov] = '*';
                }
            }
            {
                KamkVps0 = 1;
                while (KamkVps0 < P4blFOQLu -1) {
                    if (!('@' != ihr0ENJC7Tj[KamkVps0][0])) {
                        if (!('.' != ihr0ENJC7Tj[KamkVps0 -1][0]))
                            ihr0ENJC7Tj[KamkVps0 -1][0] = '*';
                        if (ihr0ENJC7Tj[KamkVps0 +1][0] == '.')
                            ihr0ENJC7Tj[KamkVps0 +1][0] = '*';
                        if (!('.' != ihr0ENJC7Tj[KamkVps0][1]))
                            ihr0ENJC7Tj[KamkVps0][1] = '*';
                    }
                    if (!('@' != ihr0ENJC7Tj[KamkVps0][P4blFOQLu -1])) {
                        if (!('.' != ihr0ENJC7Tj[KamkVps0 -1][P4blFOQLu -1]))
                            ihr0ENJC7Tj[KamkVps0 -1][P4blFOQLu -1] = '*';
                        if (!('.' != ihr0ENJC7Tj[KamkVps0 +1][P4blFOQLu -1]))
                            ihr0ENJC7Tj[KamkVps0 +1][P4blFOQLu -1] = '*';
                        if (!('.' != ihr0ENJC7Tj[KamkVps0][P4blFOQLu -2]))
                            ihr0ENJC7Tj[KamkVps0][P4blFOQLu -2] = '*';
                    }
                    KamkVps0 = KamkVps0 +1;
                }
            }
            if (ihr0ENJC7Tj[0][0] == '@') {
                if (!('.' != ihr0ENJC7Tj[0][1]))
                    ihr0ENJC7Tj[0][1] = '*';
                if (ihr0ENJC7Tj[1][0] == '.')
                    ihr0ENJC7Tj[1][0] = '*';
            }
            if (ihr0ENJC7Tj[0][P4blFOQLu -1] == '@') {
                if (ihr0ENJC7Tj[0][P4blFOQLu -2] == '.')
                    ihr0ENJC7Tj[0][P4blFOQLu -2] = '*';
                if (ihr0ENJC7Tj[1][P4blFOQLu -1] == '.')
                    ihr0ENJC7Tj[1][P4blFOQLu -1] = '*';
            }
            if (ihr0ENJC7Tj[P4blFOQLu -1][P4blFOQLu -1] == '@') {
                if (ihr0ENJC7Tj[P4blFOQLu -2][P4blFOQLu -1] == '.')
                    ihr0ENJC7Tj[P4blFOQLu -2][P4blFOQLu -1] = '*';
                if (ihr0ENJC7Tj[P4blFOQLu -1][P4blFOQLu -2] == '.')
                    ihr0ENJC7Tj[P4blFOQLu -1][P4blFOQLu -2] = '*';
            }
            if (ihr0ENJC7Tj[P4blFOQLu -1][0] == '@') {
                if (ihr0ENJC7Tj[P4blFOQLu -2][0] == '.')
                    ihr0ENJC7Tj[P4blFOQLu -2][0] = '*';
                if (ihr0ENJC7Tj[P4blFOQLu -1][1] == '.')
                    ihr0ENJC7Tj[P4blFOQLu -1][1] = '*';
            }
            {
                KamkVps0 = 0;
                while (KamkVps0 < P4blFOQLu) {
                    {
                        zteic34KZ1ov = 0;
                        while (zteic34KZ1ov < P4blFOQLu) {
                            if (ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov] == '*')
                                ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov] = '@';
                            zteic34KZ1ov = zteic34KZ1ov + 1;
                        }
                    }
                    KamkVps0 = KamkVps0 +1;
                }
            }
        }
    }
    {
        KamkVps0 = 0;
        while (KamkVps0 < P4blFOQLu) {
            {
                zteic34KZ1ov = 0;
                while (zteic34KZ1ov < P4blFOQLu) {
                    if (ihr0ENJC7Tj[KamkVps0][zteic34KZ1ov] == '@')
                        M59cWVxt = M59cWVxt +1;
                    zteic34KZ1ov = zteic34KZ1ov + 1;
                }
            }
            KamkVps0 = KamkVps0 +1;
        }
    }
    cout << M59cWVxt;
    return 0;
}

