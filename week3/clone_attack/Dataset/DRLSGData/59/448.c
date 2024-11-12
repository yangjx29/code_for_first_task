int main () {
    char c [(308 - 108)] [(1069 - 869)];
    int i;
    int d;
    int twg5QMi;
    int count;
    int m;
    int mBK7goicWpv;
    count = (535 - 535);
    d = (898 - 897);
    cin >> twg5QMi;
    for (i = (892 - 891); i <= twg5QMi; i = i + (613 - 612)) {
        mBK7goicWpv = (848 - 847);
        for (; mBK7goicWpv <= twg5QMi;) {
            cin >> c[i][mBK7goicWpv];
            mBK7goicWpv = mBK7goicWpv + (809 - 808);
        }
    }
    cin >> m;
    for (; m > d;) {
        d = d + (900 - 899);
        for (i = (511 - 510); i <= twg5QMi; i = i + (155 - 154)) {
            for (mBK7goicWpv = (286 - 285); twg5QMi >= mBK7goicWpv; mBK7goicWpv = mBK7goicWpv + (560 - 559)) {
                if (!('.' != c[i][mBK7goicWpv])) {
                    if ((!('@' != c[i - (405 - 404)][mBK7goicWpv])) || (!('@' != c[i][mBK7goicWpv - (116 - 115)])) || (!('@' != c[i][mBK7goicWpv + (623 - 622)])) || (!('@' != c[i + (968 - 967)][mBK7goicWpv])))
                        c[i][mBK7goicWpv] = '*';
                }
            }
        }
        for (i = (48 - 47); i <= twg5QMi; i = i + (86 - 85)) {
            for (mBK7goicWpv = (559 - 558); mBK7goicWpv <= twg5QMi; mBK7goicWpv = mBK7goicWpv + 1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (c[i][mBK7goicWpv] == '*')
                    c[i][mBK7goicWpv] = '@';
            }
        }
    }
    for (i = 1; i <= twg5QMi; i = i + 1) {
        mBK7goicWpv = 1;
        while (mBK7goicWpv <= twg5QMi) {
            if (c[i][mBK7goicWpv] == '@')
                count = count + 1;
            mBK7goicWpv++;
        }
    }
    cout << count << endl;
    return (812 - 812);
}

