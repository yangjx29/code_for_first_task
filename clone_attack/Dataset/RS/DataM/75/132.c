int main () {
    char ch;
    int PwH1CFSTI [1010], y [1010], o8hTtHdJbz [1010] = {(264 - 264)}, n, U30uZ6xSP, m, mckGPKM, f8hL9sElVK = (377 - 376), sDHKVO5160 = 1, max = (507 - 507);
    cin >> PwH1CFSTI[(76 - 76)];
    ch = cin.get ();
    for (; ch == ',';) {
        cin >> PwH1CFSTI[f8hL9sElVK];
        ch = cin.get ();
        f8hL9sElVK = f8hL9sElVK + 1;
    }
    n = f8hL9sElVK;
    cin >> y[0];
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
    ch = cin.get ();
    while (ch == ',') {
        cin >> y[sDHKVO5160];
        ch = cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        sDHKVO5160 = sDHKVO5160 + 1;
    }
    {
        U30uZ6xSP = 0;
        while (U30uZ6xSP < n) {
            {
                m = U30uZ6xSP;
                while (y[U30uZ6xSP] > m) {
                    o8hTtHdJbz[m]++;
                    m++;
                };
            }
            U30uZ6xSP++;
        };
    }
    {
        mckGPKM = 0;
        while (mckGPKM < (1245 - 245)) {
            if (o8hTtHdJbz[mckGPKM] > max)
                max = o8hTtHdJbz[mckGPKM];
            mckGPKM = mckGPKM + 1;
        };
    }
    cout << n << " " << max;
    return 0;
}

