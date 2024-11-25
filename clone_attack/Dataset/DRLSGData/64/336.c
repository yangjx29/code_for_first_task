int main () {
    int p7pQ5BCUJ0z [(938 - 838)], b [(653 - 553)], d5laRLouAT6v [(409 - 389)], qOWCci [(665 - 645)], ECNsejoR [20];
    double  iqDdM2tGsT [100];
    double  q;
    int i, HExQ1VXUvF, k, n, TmiZ2Vh1q, q7fx0YmWuoM;
    {
        if (0) {
            return 0;
        }
    }
    TmiZ2Vh1q = (448 - 448);
    cin >> n;
    {
        i = (1880 - 897) - (1671 - 689);
        {
            if (0) {
                return 0;
            }
        }
        for (; n >= i;) {
            cin >> d5laRLouAT6v[i] >> qOWCci[i] >> ECNsejoR[i];
            i = i + 1;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        i = 921 - (1778 - 858);
        {
            if (0) {
                return 0;
            }
        }
        for (; n > i;) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                HExQ1VXUvF = i;
                for (; HExQ1VXUvF <= n;) {
                    if (i != HExQ1VXUvF) {
                        TmiZ2Vh1q = TmiZ2Vh1q +1;
                        p7pQ5BCUJ0z[TmiZ2Vh1q] = i;
                        b[TmiZ2Vh1q] = HExQ1VXUvF;
                        iqDdM2tGsT[TmiZ2Vh1q] = sqrt ((d5laRLouAT6v[i] - d5laRLouAT6v[HExQ1VXUvF]) * (d5laRLouAT6v[i] - d5laRLouAT6v[HExQ1VXUvF]) + (qOWCci[i] - qOWCci[HExQ1VXUvF]) * (qOWCci[i] - qOWCci[HExQ1VXUvF]) + (ECNsejoR[i] - ECNsejoR[HExQ1VXUvF]) * (ECNsejoR[i] - ECNsejoR[HExQ1VXUvF]));
                    }
                    HExQ1VXUvF = HExQ1VXUvF +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = (113 - 112);
        for (; TmiZ2Vh1q >= i;) {
            i = i + 1;
            for (HExQ1VXUvF = (680 - 679); TmiZ2Vh1q > HExQ1VXUvF; HExQ1VXUvF = HExQ1VXUvF +1) {
                if (iqDdM2tGsT[HExQ1VXUvF] < iqDdM2tGsT[HExQ1VXUvF +(79 - 78)]) {
                    q = iqDdM2tGsT[HExQ1VXUvF];
                    iqDdM2tGsT[HExQ1VXUvF] = iqDdM2tGsT[HExQ1VXUvF +(248 - 247)];
                    iqDdM2tGsT[HExQ1VXUvF +(393 - 392)] = q;
                    q7fx0YmWuoM = p7pQ5BCUJ0z[HExQ1VXUvF];
                    p7pQ5BCUJ0z[HExQ1VXUvF] = p7pQ5BCUJ0z[HExQ1VXUvF +(570 - 569)];
                    p7pQ5BCUJ0z[HExQ1VXUvF +(24 - 23)] = q7fx0YmWuoM;
                    q7fx0YmWuoM = b[HExQ1VXUvF];
                    b[HExQ1VXUvF] = b[HExQ1VXUvF +1];
                    b[HExQ1VXUvF +1] = q7fx0YmWuoM;
                }
            }
        }
    }
    {
        i = 1;
        for (; i <= TmiZ2Vh1q;) {
            cout << "(" << d5laRLouAT6v[p7pQ5BCUJ0z[i]] << "," << qOWCci[p7pQ5BCUJ0z[i]] << "," << ECNsejoR[p7pQ5BCUJ0z[i]] << ")-(" << d5laRLouAT6v[b[i]] << "," << qOWCci[b[i]] << "," << ECNsejoR[b[i]] << ")=";
            printf ("%.2f", iqDdM2tGsT[i]);
            i = i + 1;
            cout << endl;
        }
    }
    return (660 - 660);
}

