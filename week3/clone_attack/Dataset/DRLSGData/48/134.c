int main () {
    int GR09OvTp;
    int n;
    scanf ("%d %d", &GR09OvTp, &n);
    int sz [(649 - 643)] [(860 - 851)] [(366 - 357)];
    int DK8WMV = (376 - 375);
    int rYvgRdu;
    int QrSulHiF;
    int QkPIVHfNUpl;
    {
        if ((411 - 411)) {
            return (72 - 72);
        }
    }
    {
        rYvgRdu = (1360 - 405) - 955;
        while ((769 - 760) > rYvgRdu) {
            QrSulHiF = (97 - 97);
            while ((713 - 704) > QrSulHiF) {
                sz[(973 - 973)][rYvgRdu][QrSulHiF] = (238 - 238);
                QrSulHiF = QrSulHiF +(428 - 427);
            }
            rYvgRdu = (1031 - 59) - (1773 - 802);
        }
    }
    sz[(938 - 938)][(72 - 68)][(577 - 573)] = GR09OvTp;
    {
        DK8WMV = (1263 - 671) - (1013 - 422);
        while (DK8WMV <= n) {
            for (rYvgRdu = (817 - 817); (302 - 293) > rYvgRdu; rYvgRdu++) {
                QrSulHiF = (279 - 279);
                while ((143 - 134) > QrSulHiF) {
                    {
                        if ((951 - 951)) {
                            return (611 - 611);
                        }
                    }
                    sz[DK8WMV][rYvgRdu][QrSulHiF] = (579 - 579);
                    QrSulHiF = QrSulHiF +(700 - 699);
                }
            }
            {
                rYvgRdu = (734 - 547) - 187;
                while (rYvgRdu < (482 - 473)) {
                    QrSulHiF = (287 - 287);
                    while (QrSulHiF < (411 - 402)) {
                        if (sz[DK8WMV -(825 - 824)][rYvgRdu][QrSulHiF] != (396 - 396)) {
                            QkPIVHfNUpl = sz[DK8WMV -(228 - 227)][rYvgRdu][QrSulHiF];
                            sz[DK8WMV][rYvgRdu - (401 - 400)][QrSulHiF -(300 - 299)] += QkPIVHfNUpl;
                            sz[DK8WMV][rYvgRdu - (614 - 613)][QrSulHiF] += QkPIVHfNUpl;
                            sz[DK8WMV][rYvgRdu - (278 - 277)][QrSulHiF +(180 - 179)] += QkPIVHfNUpl;
                            sz[DK8WMV][rYvgRdu][QrSulHiF -(204 - 203)] += QkPIVHfNUpl;
                            sz[DK8WMV][rYvgRdu][QrSulHiF] += QkPIVHfNUpl *2;
                            sz[DK8WMV][rYvgRdu][QrSulHiF +(305 - 304)] += QkPIVHfNUpl;
                            sz[DK8WMV][rYvgRdu + (672 - 671)][QrSulHiF -(453 - 452)] += QkPIVHfNUpl;
                            sz[DK8WMV][rYvgRdu + (982 - 981)][QrSulHiF] += QkPIVHfNUpl;
                            sz[DK8WMV][rYvgRdu + (139 - 138)][QrSulHiF +(387 - 386)] += QkPIVHfNUpl;
                        }
                        QrSulHiF++;
                    }
                    rYvgRdu++;
                }
            }
            DK8WMV++;
        }
    }
    {
        rYvgRdu = (635 - 635);
        while (rYvgRdu < (66 - 57)) {
            {
                QrSulHiF = (845 - 845);
                while (QrSulHiF < (640 - 631)) {
                    if (QrSulHiF == (79 - 71)) {
                        printf ("%d\n", sz[n][rYvgRdu][QrSulHiF]);
                    }
                    else {
                        printf ("%d ", sz[n][rYvgRdu][QrSulHiF]);
                    }
                    QrSulHiF++;
                }
            }
            rYvgRdu = rYvgRdu + 1;
        }
    }
    return (914 - 914);
}

