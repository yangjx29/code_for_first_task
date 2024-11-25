int main () {
    char a [(602 - 502)] [(1084 - 984)];
    int k7ZFKXDNy;
    int xpy9Ldanv5K;
    int m;
    int i;
    int DhwGRrtLi;
    int k;
    k7ZFKXDNy = (520 - 520);
    cin >> xpy9Ldanv5K;
    for (i = (420 - 420); xpy9Ldanv5K > i; i = i + 1)
        for (DhwGRrtLi = (440 - 440); xpy9Ldanv5K > DhwGRrtLi; DhwGRrtLi = DhwGRrtLi +1) {
            cin >> a[i][DhwGRrtLi];
        }
    cin >> m;
    for (i = 0; i < xpy9Ldanv5K; i = i + 1) {
        DhwGRrtLi = 0;
        while (DhwGRrtLi < xpy9Ldanv5K) {
            if (!('@' != a[i][DhwGRrtLi]))
                a[i][DhwGRrtLi] = '0';
            DhwGRrtLi = DhwGRrtLi +1;
        };
    }
    {
        k = 0;
        while (k < m - (12 - 11)) {
            for (i = 0; i < xpy9Ldanv5K; i = i + 1) {
                DhwGRrtLi = 0;
                while (DhwGRrtLi < xpy9Ldanv5K) {
                    if (!(k + '0' != a[i][DhwGRrtLi])) {
                        if (!('.' != a[i - (489 - 488)][DhwGRrtLi]))
                            a[i - 1][DhwGRrtLi] = k + '1';
                        if (a[i + 1][DhwGRrtLi] == '.')
                            a[i + 1][DhwGRrtLi] = k + '1';
                        if (a[i][DhwGRrtLi -1] == '.')
                            a[i][DhwGRrtLi -1] = k + '1';
                        if (a[i][DhwGRrtLi +1] == '.')
                            a[i][DhwGRrtLi +1] = k + '1';
                    }
                    DhwGRrtLi = DhwGRrtLi +1;
                };
            }
            k = k + 1;
        };
    }
    for (i = 0; i < xpy9Ldanv5K; i++)
        for (DhwGRrtLi = 0; DhwGRrtLi < xpy9Ldanv5K; DhwGRrtLi = DhwGRrtLi +1)
            if (a[i][DhwGRrtLi] != '#' && a[i][DhwGRrtLi] != '.')
                k7ZFKXDNy = k7ZFKXDNy + 1;
    cout << k7ZFKXDNy << endl;
    return 0;
}

