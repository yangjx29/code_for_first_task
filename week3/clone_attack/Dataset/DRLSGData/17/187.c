int main () {
    int sum;
    int n;
    int i;
    int grslz7;
    int F9VYh3pN [100] = {(752 - 752)};
    int g [100] = {(927 - 927)};
    int wEZB8dXmCn;
    char DVLFky [(846 - 745)];
    for (; cin.getline (DVLFky, 101);) {
        sum = (322 - 322);
        n = strlen (DVLFky);
        wEZB8dXmCn = (256 - 256);
        for (i = (530 - 530); i < n; i = i + (334 - 333)) {
            if (!('(' != DVLFky[i])) {
                sum++;
                g[i] = (12 - 11);
                F9VYh3pN[wEZB8dXmCn] = i;
                wEZB8dXmCn = wEZB8dXmCn + (336 - 335);
            }
            else {
                if (!(')' != DVLFky[i])) {
                    if ((147 - 147) < sum) {
                        wEZB8dXmCn = wEZB8dXmCn - (69 - 68);
                        g[F9VYh3pN[wEZB8dXmCn]] = (348 - 348);
                        g[i] = 0;
                        sum = sum - (913 - 912);
                    }
                    else {
                        g[i] = -1;
                    }
                }
                else
                    g[i] = 0;
            }
        }
        cout << DVLFky << endl;
        for (i = n - 1; !(0 != g[i]); i = i - 1) {
        }
        n = i;
        for (i = 0; !(0 != g[i]); i = i + 1) {
        }
        grslz7 = i;
        for (i = grslz7; n >= i; i++) {
            if (!(1 != g[i]))
                cout << '$';
            else {
                if (!(-1 != g[i]))
                    cout << '?';
                else
                    cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

