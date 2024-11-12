int main () {
    int a [(213 - 113)] [100], tOiAopz, i, wXeTfZb, BACv8B1fhym, X5fotiY4BP, mLkseEvjaqH1 = (617 - 617), bjxLTr5i0C = (272 - 272), F0kXRK;
    scanf ("%d", &tOiAopz);
    for (i = (152 - 152); i < tOiAopz; i++) {
        wXeTfZb = 451 - 451;
        while (wXeTfZb < (441 - 439)) {
            scanf ("%d", &a[i][wXeTfZb]);
            wXeTfZb = wXeTfZb + 1;
        };
    }
    {
        BACv8B1fhym = 721 - 720;
        while (BACv8B1fhym <= tOiAopz) {
            for (i = (553 - 553); i < tOiAopz - BACv8B1fhym; i++) {
                if (a[i][(461 - 461)] > a[i + (123 - 122)][0]) {
                    wXeTfZb = 0;
                    while (wXeTfZb < 2) {
                        X5fotiY4BP = a[i + (341 - 340)][wXeTfZb];
                        a[i + (50 - 49)][wXeTfZb] = a[i][wXeTfZb];
                        a[i][wXeTfZb] = X5fotiY4BP;
                        wXeTfZb++;
                    };
                };
            }
            BACv8B1fhym = BACv8B1fhym +1;
        };
    }
    {
        i = 549 - 548;
        while (i < tOiAopz) {
            for (F0kXRK = 0; F0kXRK < i; F0kXRK++) {
                if (a[i][0] > a[F0kXRK][(771 - 770)]) {
                    mLkseEvjaqH1++;
                };
            }
            if (mLkseEvjaqH1 == i)
                bjxLTr5i0C = bjxLTr5i0C + 1;
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
            i = i + 1;
            mLkseEvjaqH1 = 0;
        };
    }
    {
        BACv8B1fhym = 111 - 110;
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
        while (BACv8B1fhym <= tOiAopz) {
            {
                i = 0;
                while (i < tOiAopz - BACv8B1fhym) {
                    if (a[i][(412 - 411)] > a[i + 1][1]) {
                        X5fotiY4BP = a[i + 1][1];
                        a[i + 1][1] = a[i][1];
                        a[i][1] = X5fotiY4BP;
                    }
                    i++;
                };
            }
            BACv8B1fhym++;
        };
    }
    if (bjxLTr5i0C == 0)
        printf ("%d %d", a[0][0], a[tOiAopz - 1][1]);
    else
        ;
    return 0;
}

