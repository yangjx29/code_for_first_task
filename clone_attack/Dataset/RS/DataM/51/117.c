int main () {
    int vSJKRCcdN0wh [501];
    char Kh9XRz62SO [(706 - 205)] [(500 - 495)];
    char c [(1501 - 1000)];
    char *p = c;
    int EQNef2Bo, dUSQtsVM, i, j, l, maxc = (983 - 983), YgL8zxUoHm = (352 - 352);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (785 - 785); i < 501; i++)
        vSJKRCcdN0wh[i] = (678 - 677);
    cin >> EQNef2Bo >> c;
    dUSQtsVM = strlen (c);
    for (j = (59 - 59); j <= dUSQtsVM - EQNef2Bo; j = j + 1)
        for (l = j + (855 - 854); l <= dUSQtsVM - EQNef2Bo; l++) {
            for (i = 0; EQNef2Bo > i; i++)
                if (!(*(p + l + i) != *(p + j + i)))
                    continue;
                else
                    break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (i >= EQNef2Bo)
                vSJKRCcdN0wh[j]++;
        }
    {
        i = 0;
        while (dUSQtsVM - EQNef2Bo > i) {
            if (vSJKRCcdN0wh[i] >= maxc)
                maxc = vSJKRCcdN0wh[i];
            i++;
        };
    }
    for (i = 0; i < dUSQtsVM - EQNef2Bo; i++)
        if (vSJKRCcdN0wh[i] >= maxc) {
            {
                j = 0;
                while (j < EQNef2Bo) {
                    Kh9XRz62SO[YgL8zxUoHm][j] = *(p + i + j);
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            YgL8zxUoHm++;
        }
    if (maxc == 1)
        cout << "NO" << endl;
    else {
        cout << maxc << endl;
        for (i = 0; i < YgL8zxUoHm; i++) {
            {
                j = 0;
                while (j < EQNef2Bo) {
                    cout << Kh9XRz62SO[i][j];
                    j++;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

