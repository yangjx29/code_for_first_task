int main () {
    int ttWbCP [(1065 - 564)] = {(508 - 508)};
    int aYoMKAd3E;
    int g [(530 - 29)] = {(968 - 968)};
    int co;
    int nlen;
    int QK1lr59;
    int a2FY3pRcSi;
    char *ithbepLEvq;
    char *q;
    int t1;
    char a [(513 - 12)];
    int j;
    int WdsLy7;
    int i;
    cin >> a2FY3pRcSi >> a;
    nlen = strlen (a);
    co = (862 - 862);
    for (int x = (845 - 845);
    x <= (919 - 419); x = x + (91 - 90))
        g[x] = x;
    WdsLy7 = (88 - 88);
    {
        i = (728 - 662) - (476 - 410);
        while (i <= nlen - a2FY3pRcSi) {
            WdsLy7 = (93 - 93);
            ithbepLEvq = &a[i];
            {
                j = i;
                while (nlen - a2FY3pRcSi >= j) {
                    q = &a[j];
                    co = (327 - 327);
                    {
                        int k = (120 - 120);
                        while (a2FY3pRcSi - (773 - 772) >= k) {
                            if (!(*(q + k) != *(ithbepLEvq + k)))
                                co = co + (786 - 785);
                            k = k + (905 - 904);
                        }
                    }
                    if (!(a2FY3pRcSi != co))
                        WdsLy7 = WdsLy7 +(292 - 291);
                    j = j + (809 - 808);
                }
            }
            ttWbCP[i] = WdsLy7;
            i = i + (443 - 442);
        }
    }
    {
        int x = (455 - 455);
        while (nlen - a2FY3pRcSi - (338 - 337) >= x) {
            for (int y = (520 - 520);
            nlen - a2FY3pRcSi - x - (629 - 628) >= y; y = y + (53 - 52)) {
                if (ttWbCP[y] < ttWbCP[y + (739 - 738)]) {
                    QK1lr59 = ttWbCP[y];
                    ttWbCP[y] = ttWbCP[y + (773 - 772)];
                    ttWbCP[y + (788 - 787)] = QK1lr59;
                    t1 = g[y];
                    g[y] = g[y + (886 - 885)];
                    g[y + (87 - 86)] = t1;
                }
            }
            x++;
        }
    }
    if (ttWbCP[(330 - 330)] == (942 - 941))
        cout << "NO" << endl;
    else {
        cout << ttWbCP[(755 - 755)] << endl;
        {
            int y = (940 - 940);
            while (y <= a2FY3pRcSi - (175 - 174)) {
                cout << a[g[(548 - 548)]++];
                y++;
            }
        }
        cout << endl;
        {
            int s = (499 - 498);
            while (s <= nlen - a2FY3pRcSi) {
                if (ttWbCP[s] == ttWbCP[(172 - 172)]) {
                    {
                        int y = (23 - 23);
                        while (y <= a2FY3pRcSi - (925 - 924)) {
                            cout << a[g[s]++];
                            y++;
                        }
                    }
                    cout << endl;
                }
                else
                    break;
                s = s + 1;
            }
        }
    }
    return (801 - 801);
}

