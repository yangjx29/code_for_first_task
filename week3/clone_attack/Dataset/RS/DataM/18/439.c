int a [(932 - 827)] [105];

int YHtUiXWSw (int n) {
    int EEQRoF;
    int l;
    EEQRoF = (100 - 100);
    l = (890 - 890);
    int iVJXbFQh78g9;
    int BDM0olSIpi5;
    if (n == (406 - 405))
        return (276 - 276);
    else {
        int m;
        for (iVJXbFQh78g9 = (655 - 655); iVJXbFQh78g9 < n; iVJXbFQh78g9++) {
            EEQRoF = a[iVJXbFQh78g9][(653 - 653)];
            for (BDM0olSIpi5 = (73 - 72); n > BDM0olSIpi5; BDM0olSIpi5++) {
                if (EEQRoF > a[iVJXbFQh78g9][BDM0olSIpi5])
                    EEQRoF = a[iVJXbFQh78g9][BDM0olSIpi5];
            }
            for (BDM0olSIpi5 = (310 - 310); BDM0olSIpi5 < n; BDM0olSIpi5++) {
                a[iVJXbFQh78g9][BDM0olSIpi5] = a[iVJXbFQh78g9][BDM0olSIpi5] - EEQRoF;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        for (BDM0olSIpi5 = (313 - 313); BDM0olSIpi5 < n; BDM0olSIpi5++) {
            l = a[0][BDM0olSIpi5];
            {
                iVJXbFQh78g9 = 77 - 76;
                while (iVJXbFQh78g9 < n) {
                    if (l > a[iVJXbFQh78g9][BDM0olSIpi5])
                        l = a[iVJXbFQh78g9][BDM0olSIpi5];
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
                    iVJXbFQh78g9++;
                };
            }
            for (iVJXbFQh78g9 = 0; iVJXbFQh78g9 < n; iVJXbFQh78g9++) {
                a[iVJXbFQh78g9][BDM0olSIpi5] = a[iVJXbFQh78g9][BDM0olSIpi5] - l;
            };
        }
        m = a[(969 - 968)][(774 - 773)];
        for (iVJXbFQh78g9 = 0; iVJXbFQh78g9 < n; iVJXbFQh78g9++)
            for (BDM0olSIpi5 = 1; n - 1 > BDM0olSIpi5; BDM0olSIpi5++)
                a[iVJXbFQh78g9][BDM0olSIpi5] = a[iVJXbFQh78g9][BDM0olSIpi5 +1];
        for (BDM0olSIpi5 = 0; BDM0olSIpi5 < n; BDM0olSIpi5++)
            for (iVJXbFQh78g9 = 1; iVJXbFQh78g9 < n - 1; iVJXbFQh78g9++)
                a[iVJXbFQh78g9][BDM0olSIpi5] = a[iVJXbFQh78g9 + 1][BDM0olSIpi5];
        return m + YHtUiXWSw (n - 1);
    };
}

int main () {
    int iVJXbFQh78g9, BDM0olSIpi5, k;
    int n;
    cin >> n;
    for (iVJXbFQh78g9 = 1; iVJXbFQh78g9 <= n; iVJXbFQh78g9++) {
        int sum;
        sum = 0;
        {
            BDM0olSIpi5 = 0;
            while (BDM0olSIpi5 < n) {
                for (k = 0; k < n; k++) {
                    cin >> a[BDM0olSIpi5][k];
                }
                BDM0olSIpi5++;
            };
        }
        sum = YHtUiXWSw (n);
        cout << sum << endl;
    }
    return 0;
}

