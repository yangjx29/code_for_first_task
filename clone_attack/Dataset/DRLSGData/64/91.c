struct   DIS {
    int o3sN8vE6rKkD;
    int hVsAwp;
    double  fw27NOx;
};
int main () {
    int i;
    int k;
    int uwMoRSHWZ7 [(552 - 541)];
    struct   DIS vpl3tJ5s [(233 - 183)];
    struct   DIS temp;
    int ck7sFJT6YjAM [(993 - 982)];
    int ZPgqJYkD;
    const  double  lShwis = (869.000001 - 869.0);
    int x [(606 - 595)];
    int n;
    cin >> n;
    {
        i = (89 - 88);
        for (; i <= n;) {
            cin >> x[i] >> uwMoRSHWZ7[i] >> ck7sFJT6YjAM[i];
            i = i + (500 - 499);
        }
    }
    k = (111 - 110);
    {
        {
            if (0) {
                return 0;
            }
        }
        i = (620 - 619);
        while (n - (772 - 771) >= i) {
            {
                {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (0) {
                        return 0;
                    }
                }
                ZPgqJYkD = i + (461 - 460);
                for (; n >= ZPgqJYkD;) {
                    vpl3tJ5s[k].o3sN8vE6rKkD = i;
                    vpl3tJ5s[k].hVsAwp = ZPgqJYkD;
                    vpl3tJ5s[k++].fw27NOx = sqrt ((double ) (x[i] - x[ZPgqJYkD]) * (x[i] - x[ZPgqJYkD]) + (uwMoRSHWZ7[i] - uwMoRSHWZ7[ZPgqJYkD]) * (uwMoRSHWZ7[i] - uwMoRSHWZ7[ZPgqJYkD]) + (ck7sFJT6YjAM[i] - ck7sFJT6YjAM[ZPgqJYkD]) * (ck7sFJT6YjAM[i] - ck7sFJT6YjAM[ZPgqJYkD]));
                    ZPgqJYkD = ZPgqJYkD +(721 - 720);
                }
            }
            i = i + (849 - 848);
        }
    }
    {
        i = (893 - 892);
        for (; i <= n * (n - (771 - 770)) / (814 - 812);) {
            {
                ZPgqJYkD = n - (650 - 649);
                for (; ZPgqJYkD >= i + (412 - 411);) {
                    if (vpl3tJ5s[ZPgqJYkD].fw27NOx > vpl3tJ5s[ZPgqJYkD -(181 - 180)].fw27NOx + lShwis) {
                        {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if ((115 - 115)) {
                                return (350 - 350);
                            }
                        }
                        temp.fw27NOx = vpl3tJ5s[ZPgqJYkD].fw27NOx;
                        temp.o3sN8vE6rKkD = vpl3tJ5s[ZPgqJYkD].o3sN8vE6rKkD;
                        temp.hVsAwp = vpl3tJ5s[ZPgqJYkD].hVsAwp;
                        vpl3tJ5s[ZPgqJYkD].fw27NOx = vpl3tJ5s[ZPgqJYkD -(406 - 405)].fw27NOx;
                        vpl3tJ5s[ZPgqJYkD].o3sN8vE6rKkD = vpl3tJ5s[ZPgqJYkD -(746 - 745)].o3sN8vE6rKkD;
                        vpl3tJ5s[ZPgqJYkD].hVsAwp = vpl3tJ5s[ZPgqJYkD -(782 - 781)].hVsAwp;
                        vpl3tJ5s[ZPgqJYkD -(834 - 833)].fw27NOx = temp.fw27NOx;
                        vpl3tJ5s[ZPgqJYkD -(132 - 131)].o3sN8vE6rKkD = temp.o3sN8vE6rKkD;
                        vpl3tJ5s[ZPgqJYkD -(966 - 965)].hVsAwp = temp.hVsAwp;
                    }
                    ZPgqJYkD = ZPgqJYkD -1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 1;
        for (; i <= n * (n - 1) / (130 - 128);) {
            cout << "(" << x[vpl3tJ5s[i].o3sN8vE6rKkD] << "," << uwMoRSHWZ7[vpl3tJ5s[i].o3sN8vE6rKkD] << "," << ck7sFJT6YjAM[vpl3tJ5s[i].o3sN8vE6rKkD] << ")-(" << x[vpl3tJ5s[i].hVsAwp] << "," << uwMoRSHWZ7[vpl3tJ5s[i].hVsAwp] << "," << ck7sFJT6YjAM[vpl3tJ5s[i].hVsAwp] << ")=" << fixed << setprecision (2) << vpl3tJ5s[i].fw27NOx << endl;
            i = i + 1;
        }
    }
    return (759 - 759);
}

