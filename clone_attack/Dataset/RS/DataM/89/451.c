void  main () {
    int m, QgA29Zzfh, cWO1IT0hgcz, TONel3vMmUV [100001] [2], dbnEMR [10001], co8d4ShCXIKQ;
    scanf ("%d", &QgA29Zzfh);
    {
        cWO1IT0hgcz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cWO1IT0hgcz < QgA29Zzfh) {
            dbnEMR[cWO1IT0hgcz] = 0;
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
            cWO1IT0hgcz++;
        };
    }
    scanf ("%d %d", &TONel3vMmUV[(959 - 959)][0], &TONel3vMmUV[0][1]);
    {
        m = 1;
        while (!(TONel3vMmUV[m - 1][0] == 0 && TONel3vMmUV[m - 1][1] == 0)) {
            scanf ("%d %d", &TONel3vMmUV[m][0], &TONel3vMmUV[m][1]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            m++;
        };
    }
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
    m -= 1;
    {
        cWO1IT0hgcz = 0;
        while (cWO1IT0hgcz < m) {
            dbnEMR[TONel3vMmUV[cWO1IT0hgcz][0]] -= 1;
            dbnEMR[TONel3vMmUV[cWO1IT0hgcz][1]] += 1;
            cWO1IT0hgcz++;
        };
    }
    co8d4ShCXIKQ = 0;
    for (cWO1IT0hgcz = 0; cWO1IT0hgcz < QgA29Zzfh; cWO1IT0hgcz++) {
        if (dbnEMR[cWO1IT0hgcz] == QgA29Zzfh -1) {
            if (co8d4ShCXIKQ == 0)
                printf ("%d", cWO1IT0hgcz);
            else
                printf (" %d", cWO1IT0hgcz);
            co8d4ShCXIKQ++;
        };
    }
    if (co8d4ShCXIKQ == 0)
        ;
}

