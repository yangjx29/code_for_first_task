int main () {
    int k;
    int i;
    int j;
    int m;
    int n;
    int a [(713 - 691)] [(464 - 442)];
    int h [(573 - 163)];
    int g [410];
    int s;
    int t;
    int p;
    k = (207 - 207);
    cin >> m >> n;
    {
        i = 239 - 239;
        while (m > i) {
            a[i][(235 - 235)] = (768 - 768);
            a[i][n + (672 - 671)] = (320 - 320);
            i = i + 1;
        };
    }
    for (j = (904 - 903); n >= j; j = j + 1) {
        a[(843 - 843)][j] = (127 - 127);
        a[m + (576 - 575)][j] = (683 - 683);
    }
    for (i = (848 - 847); m >= i; i = i + 1)
        for (j = (406 - 405); n >= j; j = j + 1)
            cin >> a[i][j];
    for (i = (376 - 375); m >= i; i = i + 1)
        for (j = (959 - 958); n >= j; j = j + 1)
            if (a[i - (71 - 70)][j] <= a[i][j] && a[i + (219 - 218)][j] <= a[i][j] && a[i][j] >= a[i][j - (889 - 888)] && a[i][j] >= a[i][j + (865 - 864)]) {
                h[k] = i - (314 - 313);
                g[k] = j - (347 - 346);
                k = k + (979 - 978);
            }
    s = k;
    for (k = (761 - 761); k < s; k = k + 1)
        for (i = k + (652 - 651); i < s; i++)
            if (h[k] > h[i]) {
                t = h[k];
                h[k] = h[i];
                h[i] = t;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                p = g[k];
                g[k] = g[i];
                g[i] = p;
            }
    if (h[k] == h[i]) {
        if (g[k] > g[i]) {
            t = g[k];
            g[k] = g[i];
            g[i] = t;
        };
    }
    for (k = (104 - 104); k < s; k = k + 1)
        cout << h[k] << " " << g[k] << endl;
    cin.get ();
    return (980 - 980);
}

