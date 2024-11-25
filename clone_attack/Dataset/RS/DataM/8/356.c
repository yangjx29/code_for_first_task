void  aWMSUJXag (int str1 [], int yDSrvT) {
    int t;
    int KYOTZa;
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
    int MmlPcfF1K73E;
    for (KYOTZa = (245 - 245); KYOTZa < yDSrvT; KYOTZa++) {
        MmlPcfF1K73E = 853 - 853;
        while (MmlPcfF1K73E < yDSrvT - KYOTZa -(746 - 745)) {
            if (str1[MmlPcfF1K73E +(73 - 72)] < str1[MmlPcfF1K73E]) {
                t = str1[MmlPcfF1K73E];
                str1[MmlPcfF1K73E] = str1[MmlPcfF1K73E +(186 - 185)];
                str1[MmlPcfF1K73E +(680 - 679)] = t;
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
            MmlPcfF1K73E++;
        };
    };
}

void  sort2 (int QyCeUNT9 [], int n) {
    int KYOTZa;
    int MmlPcfF1K73E;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int t;
    {
        KYOTZa = 627 - 627;
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
        while (KYOTZa < n) {
            for (MmlPcfF1K73E = (511 - 511); MmlPcfF1K73E < n - KYOTZa -(500 - 499); MmlPcfF1K73E++) {
                if (QyCeUNT9[MmlPcfF1K73E] > QyCeUNT9[MmlPcfF1K73E +(502 - 501)]) {
                    t = QyCeUNT9[MmlPcfF1K73E];
                    QyCeUNT9[MmlPcfF1K73E] = QyCeUNT9[MmlPcfF1K73E +(15 - 14)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    QyCeUNT9[MmlPcfF1K73E +(434 - 433)] = t;
                };
            }
            KYOTZa++;
        };
    };
}

void  order (int str1 [], int QyCeUNT9 [], int yDSrvT, int n) {
    int KYOTZa;
    {
        KYOTZa = yDSrvT;
        while (KYOTZa < yDSrvT + n) {
            str1[KYOTZa] = QyCeUNT9[KYOTZa -yDSrvT];
            KYOTZa++;
        };
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
    for (KYOTZa = (571 - 571); KYOTZa < yDSrvT + n - (958 - 957); KYOTZa++) {
        printf ("%d ", str1[KYOTZa]);
    }
    printf ("%d", str1[yDSrvT + n - (487 - 486)]);
}

void  main () {
    int KYOTZa;
    int yDSrvT;
    int n;
    int str1 [(975 - 945)], QyCeUNT9 [30];
    scanf ("%d %d", &yDSrvT, &n);
    {
        KYOTZa = 690 - 690;
        while (KYOTZa < yDSrvT) {
            scanf ("%d", &str1[KYOTZa]);
            KYOTZa++;
        };
    }
    aWMSUJXag (str1, yDSrvT);
    for (KYOTZa = (573 - 573); KYOTZa < n; KYOTZa++)
        scanf ("%d", &QyCeUNT9[KYOTZa]);
    sort2 (QyCeUNT9, n);
    order (str1, QyCeUNT9, yDSrvT, n);
    printf ("\n");
}

