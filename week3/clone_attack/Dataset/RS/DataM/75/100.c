int main () {
    int nuWOwvlsAY [1000] = {0};
    int a [1000] = {(787 - 787)}, mFlDx9wUJWYt = (864 - 864), LQwapRbEMPSZ, KM9eJ7lO = 0, lPnqAbw3W, UqhzSs = 1;
    int OTV50l3XyWF2 [1000] = {0};
    while (cin >> LQwapRbEMPSZ) {
        if (!('\n' != cin.get ()))
            break;
        a[mFlDx9wUJWYt] = LQwapRbEMPSZ;
        mFlDx9wUJWYt = mFlDx9wUJWYt + 1;
        KM9eJ7lO++;
    }
    mFlDx9wUJWYt = 0;
    for (; cin >> LQwapRbEMPSZ;) {
        if (cin.get () == '\n')
            break;
        OTV50l3XyWF2[mFlDx9wUJWYt] = LQwapRbEMPSZ;
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
        mFlDx9wUJWYt++;
    }
    for (mFlDx9wUJWYt = 0; KM9eJ7lO > mFlDx9wUJWYt; mFlDx9wUJWYt = mFlDx9wUJWYt + 1) {
        for (lPnqAbw3W = a[mFlDx9wUJWYt]; lPnqAbw3W < OTV50l3XyWF2[mFlDx9wUJWYt]; lPnqAbw3W = lPnqAbw3W + 1) {
            nuWOwvlsAY[lPnqAbw3W]++;
        };
    }
    for (lPnqAbw3W = 0; lPnqAbw3W < 1000; lPnqAbw3W++) {
        if (UqhzSs < nuWOwvlsAY[lPnqAbw3W])
            UqhzSs = nuWOwvlsAY[lPnqAbw3W];
    }
    cout << KM9eJ7lO << ' ' << UqhzSs << endl;
    return 0;
}

