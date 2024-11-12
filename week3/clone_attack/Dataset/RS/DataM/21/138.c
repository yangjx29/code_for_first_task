int main () {
    int add;
    int n;
    int YAxBH14zD [300];
    add = 0;
    int uTcqua = 0, mS5beAzv1R = 0;
    double  temp;
    double  uK5djXQxMZSi;
    double  UM0dkmsq [300];
    double  zCXBKZSzv [300];
    temp = 0;
    cin >> n;
    for (int i = 0;
    n > i; i = i + 1) {
        cin >> YAxBH14zD[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        add = add + YAxBH14zD[i];
    }
    uK5djXQxMZSi = (double ) add / (double ) n;
    for (int iqdZoR7r = 0;
    iqdZoR7r < n - 1; iqdZoR7r = iqdZoR7r + 1)
        for (int i = 0;
        i < n - iqdZoR7r - 1; i = i + 1) {
            if (YAxBH14zD[i] > YAxBH14zD[i + 1]) {
                uTcqua = YAxBH14zD[i];
                YAxBH14zD[i] = YAxBH14zD[i + 1];
                YAxBH14zD[i + 1] = uTcqua;
            };
        }
    for (int i = 0;
    i < n; i = i + 1) {
        zCXBKZSzv[i] = fabs ((double ) YAxBH14zD[i] - uK5djXQxMZSi);
        if (zCXBKZSzv[i] > temp)
            temp = zCXBKZSzv[i];
    }
    {
        int i = 0;
        while (i < n) {
            if (zCXBKZSzv[i] == temp) {
                UM0dkmsq[mS5beAzv1R] = YAxBH14zD[i];
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
                mS5beAzv1R = mS5beAzv1R + 1;
            }
            i = i + 1;
        };
    }
    cout << UM0dkmsq[0];
    if (mS5beAzv1R >= 1) {
        for (int KC4STq = 1;
        KC4STq < mS5beAzv1R; KC4STq = KC4STq +1)
            cout << ',' << UM0dkmsq[KC4STq];
    }
    return 0;
}

