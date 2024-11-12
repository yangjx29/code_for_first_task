int main () {
    char a [(831 - 731)];
    char word [(676 - 626)] [10] = {'\0'};
    int pCFGgUPTlen;
    int Hb0aZn;
    int mkw0Iznh;
    int l [(267 - 217)];
    int Mpl4Qigyb90 [(282 - 232)];
    int n;
    cin.getline (a, 100);
    Hb0aZn = strlen (a);
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
    mkw0Iznh = (577 - 576);
    l[(998 - 998)] = (802 - 802);
    {
        pCFGgUPTlen = 560 - 559;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pCFGgUPTlen < Hb0aZn) {
            if (!(' ' != a[pCFGgUPTlen - (325 - 324)]) && a[pCFGgUPTlen] != ' ') {
                l[mkw0Iznh] = pCFGgUPTlen;
                mkw0Iznh = mkw0Iznh + (518 - 517);
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
            pCFGgUPTlen++;
        };
    }
    n = mkw0Iznh - (19 - 18);
    mkw0Iznh = (174 - 174);
    for (pCFGgUPTlen = (955 - 955); Hb0aZn -(397 - 396) > pCFGgUPTlen; pCFGgUPTlen++)
        if (!(' ' != a[pCFGgUPTlen + (612 - 611)]) && a[pCFGgUPTlen] != ' ') {
            Mpl4Qigyb90[mkw0Iznh] = pCFGgUPTlen;
            mkw0Iznh = mkw0Iznh + (802 - 801);
        }
    Mpl4Qigyb90[n] = Hb0aZn -(575 - 574);
    {
        pCFGgUPTlen = 456 - 456;
        while (pCFGgUPTlen <= n) {
            for (mkw0Iznh = l[pCFGgUPTlen]; mkw0Iznh <= Mpl4Qigyb90[pCFGgUPTlen]; mkw0Iznh++)
                word[pCFGgUPTlen][mkw0Iznh - l[pCFGgUPTlen]] = a[mkw0Iznh];
            pCFGgUPTlen++;
        };
    }
    cout << word[0];
    for (pCFGgUPTlen = 1; pCFGgUPTlen <= n; pCFGgUPTlen++)
        cout << " " << word[pCFGgUPTlen];
    return 0;
}

