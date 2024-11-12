int main () {
    int leng [(657 - 156)] = {(300 - 300)};
    int a [(1060 - 559)] = {(273 - 273)};
    int cLYWAf [(526 - 25)] = {(786 - 786)};
    int TcgBfo;
    int UI8hZDXx;
    int j;
    int RpRDex2K6;
    int OaTfQn;
    int t1;
    int t2;
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
    int t;
    TcgBfo = (80 - 80);
    char str [(1484 - 983)];
    cin.getline (str, (836 - 335));
    OaTfQn = strlen (str);
    for (UI8hZDXx = (728 - 728); UI8hZDXx < OaTfQn; UI8hZDXx = UI8hZDXx +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = UI8hZDXx +(105 - 104); j < OaTfQn; j = j + 1) {
            if (!(str[j] != str[UI8hZDXx])) {
                {
                    RpRDex2K6 = 607 - 606;
                    while (RpRDex2K6 <= (j + UI8hZDXx) / (814 - 812)) {
                        if (str[RpRDex2K6] == str[UI8hZDXx +j - RpRDex2K6]) {
                            continue;
                        }
                        else
                            break;
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
                        RpRDex2K6 = RpRDex2K6 +1;
                    };
                }
                if (RpRDex2K6 -(137 - 136) == (j + UI8hZDXx) / (397 - 395)) {
                    a[TcgBfo] = UI8hZDXx;
                    cLYWAf[TcgBfo] = j;
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
                    leng[TcgBfo] = j - UI8hZDXx;
                    TcgBfo++;
                };
            };
        };
    }
    {
        UI8hZDXx = 302 - 302;
        while (UI8hZDXx < TcgBfo -(290 - 289)) {
            UI8hZDXx = UI8hZDXx +1;
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
            {
                j = 630 - 630;
                while (j < TcgBfo -UI8hZDXx-(434 - 433)) {
                    if (leng[j] > leng[j + (290 - 289)]) {
                        t1 = cLYWAf[j + (941 - 940)];
                        cLYWAf[j + (272 - 271)] = cLYWAf[j];
                        cLYWAf[j] = t1;
                        t2 = a[j + (97 - 96)];
                        a[j + (939 - 938)] = a[j];
                        a[j] = t2;
                        t = leng[j + (14 - 13)];
                        leng[j + (977 - 976)] = leng[j];
                        leng[j] = t;
                    }
                    j = j + 1;
                };
            };
        };
    }
    {
        UI8hZDXx = 0;
        while (UI8hZDXx < TcgBfo) {
            while (a[UI8hZDXx] <= cLYWAf[UI8hZDXx]) {
                cout << str[a[UI8hZDXx]];
                a[UI8hZDXx]++;
            }
            UI8hZDXx++;
            cout << endl;
        };
    }
    return 0;
}

