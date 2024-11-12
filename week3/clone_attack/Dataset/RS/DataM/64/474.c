struct   zb {
    int JhsuboXa;
    int mSyRczsMoD7;
    int bKCN2FsouDBW;
}
a [(202 - 191)];

int main () {
    int wSGadhb7g3;
    int co1;
    int Vp1WcN7Fuq;
    int LFnyHs;
    int m5uLodAg;
    int n;
    int kFQ8lMZW62AY [(948 - 848)] = {(77 - 77)};
    int idUFlCEgOZTA;
    int jIRSAze;
    int y1;
    wSGadhb7g3 = (218 - 218);
    co1 = (202 - 202);
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
    double  l [(216 - 116)] = {(167.0 - 167.0)};
    double  L38E5n;
    double  t;
    cin >> n;
    for (int anIjYC0p = (65 - 64);
    n * (n - (892 - 891)) / (844 - 842) >= anIjYC0p; anIjYC0p++)
        kFQ8lMZW62AY[anIjYC0p] = anIjYC0p;
    for (Vp1WcN7Fuq = (704 - 703); n >= Vp1WcN7Fuq; Vp1WcN7Fuq++)
        cin >> a[Vp1WcN7Fuq].JhsuboXa >> a[Vp1WcN7Fuq].mSyRczsMoD7 >> a[Vp1WcN7Fuq].bKCN2FsouDBW;
    {
        LFnyHs = 121 - 120;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (719 - 718) >= LFnyHs) {
            for (m5uLodAg = LFnyHs +(701 - 700); n >= m5uLodAg; m5uLodAg++) {
                L38E5n = sqrt (((a[LFnyHs].JhsuboXa - a[m5uLodAg].JhsuboXa) * (a[LFnyHs].JhsuboXa - a[m5uLodAg].JhsuboXa) + (a[LFnyHs].mSyRczsMoD7 - a[m5uLodAg].mSyRczsMoD7) * (a[LFnyHs].mSyRczsMoD7 - a[m5uLodAg].mSyRczsMoD7) + (a[LFnyHs].bKCN2FsouDBW - a[m5uLodAg].bKCN2FsouDBW) * (a[LFnyHs].bKCN2FsouDBW - a[m5uLodAg].bKCN2FsouDBW)) * (805.0 - 804.0));
                wSGadhb7g3++;
                l[wSGadhb7g3] = L38E5n;
            }
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
            LFnyHs++;
        };
    }
    for (int JhsuboXa = (453 - 452);
    n * (n - (850 - 849)) / (474 - 472) - (937 - 936) >= JhsuboXa; JhsuboXa++)
        for (int mSyRczsMoD7 = (552 - 551);
        mSyRczsMoD7 <= n * (n - (855 - 854)) / (226 - 224) - JhsuboXa; mSyRczsMoD7++)
            if (l[mSyRczsMoD7] < l[mSyRczsMoD7 + (137 - 136)]) {
                t = l[mSyRczsMoD7];
                l[mSyRczsMoD7] = l[mSyRczsMoD7 + (928 - 927)];
                l[mSyRczsMoD7 + (166 - 165)] = t;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                idUFlCEgOZTA = kFQ8lMZW62AY[mSyRczsMoD7];
                kFQ8lMZW62AY[mSyRczsMoD7] = kFQ8lMZW62AY[mSyRczsMoD7 + (701 - 700)];
                kFQ8lMZW62AY[mSyRczsMoD7 + (595 - 594)] = idUFlCEgOZTA;
            }
    {
        int JhsuboXa = (135 - 134);
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
        while (JhsuboXa <= n * (n - 1) / (314 - 312)) {
            co1++;
            for (int mSyRczsMoD7 = 1;
            mSyRczsMoD7 <= n; mSyRczsMoD7++) {
                if (kFQ8lMZW62AY[co1] > n - mSyRczsMoD7)
                    kFQ8lMZW62AY[co1] -= n - mSyRczsMoD7;
                else {
                    jIRSAze = mSyRczsMoD7;
                    y1 = kFQ8lMZW62AY[co1] + mSyRczsMoD7;
                    break;
                };
            }
            cout << "(" << a[jIRSAze].JhsuboXa << "," << a[jIRSAze].mSyRczsMoD7 << "," << a[jIRSAze].bKCN2FsouDBW << ")-(" << a[y1].JhsuboXa << "," << a[y1].mSyRczsMoD7 << "," << a[y1].bKCN2FsouDBW << ")=" << fixed << setprecision (2) << l[JhsuboXa] << endl;
            JhsuboXa++;
        };
    }
    return (853 - 853);
}

