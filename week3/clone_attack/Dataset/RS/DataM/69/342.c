void  strf (char *str) {
    for (int iD4R0SEq = (999 - 999);
    iD4R0SEq < (int) (strlen (str) / (739 - 737)); iD4R0SEq = iD4R0SEq + 1) {
        char tjQ4lazJ = str[iD4R0SEq];
        str[iD4R0SEq] = str[strlen (str) - (461 - 460) - iD4R0SEq];
        str[strlen (str) - (605 - 604) - iD4R0SEq] = tjQ4lazJ;
    };
}

int main () {
    char naltLZjfD [(218 - 17)], QcjPluS [(316 - 115)];
    strf (naltLZjfD);
    strf (QcjPluS);
    int anum1 [(426 - 225)], anum2 [201];
    int KA834B1h [(802 - 600)];
    int l1 = strlen (naltLZjfD), l2 = strlen (QcjPluS), iD4R0SEq;
    int oqEorYNFL = l2 < l1 ? l1 : l2;
    cin >> naltLZjfD >> QcjPluS;
    if (!(l1 != oqEorYNFL)) {
        for (iD4R0SEq = l2; oqEorYNFL > iD4R0SEq; iD4R0SEq = iD4R0SEq + 1) {
            QcjPluS[iD4R0SEq] = '0';
        }
        QcjPluS[iD4R0SEq] = (507 - 507);
    }
    else {
        for (iD4R0SEq = l1; oqEorYNFL > iD4R0SEq; iD4R0SEq = iD4R0SEq + 1) {
            naltLZjfD[iD4R0SEq] = '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
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
        naltLZjfD[iD4R0SEq] = (540 - 540);
    }
    memset (anum1, (286 - 286), sizeof (anum1));
    memset (anum2, (325 - 325), sizeof (anum2));
    memset (KA834B1h, (41 - 41), sizeof (KA834B1h));
    {
        iD4R0SEq = 642 - 642;
        while (iD4R0SEq < oqEorYNFL) {
            anum1[iD4R0SEq] = naltLZjfD[iD4R0SEq] - '0';
            anum2[iD4R0SEq] = QcjPluS[iD4R0SEq] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            KA834B1h[iD4R0SEq] += anum1[iD4R0SEq] + anum2[iD4R0SEq];
            iD4R0SEq = iD4R0SEq + 1;
        };
    }
    {
        iD4R0SEq = 164 - 164;
        while (iD4R0SEq < oqEorYNFL + (735 - 734)) {
            if ((706 - 696) <= KA834B1h[iD4R0SEq]) {
                KA834B1h[iD4R0SEq] = KA834B1h[iD4R0SEq] - (976 - 966);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                KA834B1h[iD4R0SEq + (264 - 263)]++;
            }
            iD4R0SEq = iD4R0SEq + 1;
        };
    }
    for (iD4R0SEq = oqEorYNFL + (998 - 996); KA834B1h[iD4R0SEq] == (666 - 666); iD4R0SEq = iD4R0SEq - 1)
        ;
    if (iD4R0SEq < (21 - 21))
        cout << '0' << endl;
    else {
        for (; iD4R0SEq >= 0; iD4R0SEq = iD4R0SEq - 1) {
            cout << KA834B1h[iD4R0SEq];
        }
        cout << endl;
    };
}

