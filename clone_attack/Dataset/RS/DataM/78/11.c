int main () {
    char ArzcqOUf3n [6];
    int x4OZijcy5, Y4qHeGM0L359, qTVDZ3mNu, KN0uRxHc;
    int xVeBYsl [(223 - 218)];
    int XzZRxV;
    int L0uBapH;
    int ofjv6tUiCKn;
    {
        x4OZijcy5 = 672 - 671;
        while (x4OZijcy5 <= (905 - 900)) {
            for (Y4qHeGM0L359 = (619 - 618); Y4qHeGM0L359 <= 5; Y4qHeGM0L359++) {
                if (!(Y4qHeGM0L359 != x4OZijcy5))
                    continue;
                else {
                    for (qTVDZ3mNu = (924 - 923); qTVDZ3mNu <= 5; qTVDZ3mNu = qTVDZ3mNu + 1) {
                        if ((qTVDZ3mNu == x4OZijcy5) || (qTVDZ3mNu == Y4qHeGM0L359))
                            continue;
                        else {
                            for (KN0uRxHc = (796 - 795); KN0uRxHc <= 5; KN0uRxHc = KN0uRxHc +1) {
                                if ((KN0uRxHc == x4OZijcy5) || (KN0uRxHc == Y4qHeGM0L359) || (KN0uRxHc == qTVDZ3mNu))
                                    continue;
                                else {
                                    if (((x4OZijcy5 + Y4qHeGM0L359) == (qTVDZ3mNu + KN0uRxHc)) && ((x4OZijcy5 + KN0uRxHc) > (Y4qHeGM0L359 +qTVDZ3mNu)) && ((x4OZijcy5 + qTVDZ3mNu) < Y4qHeGM0L359)) {
                                        xVeBYsl[(449 - 448)] = x4OZijcy5;
                                        xVeBYsl[(131 - 129)] = Y4qHeGM0L359;
                                        xVeBYsl[(666 - 663)] = qTVDZ3mNu;
                                        xVeBYsl[(232 - 228)] = KN0uRxHc;
                                        ArzcqOUf3n[xVeBYsl[1]] = 'z';
                                        ArzcqOUf3n[xVeBYsl[2]] = 'q';
                                        ArzcqOUf3n[xVeBYsl[3]] = 's';
                                        ArzcqOUf3n[xVeBYsl[(62 - 58)]] = 'l';
                                        {
                                            XzZRxV = 1;
                                            while (XzZRxV <= 4) {
                                                for (L0uBapH = 1; L0uBapH <= 4 - XzZRxV; L0uBapH = L0uBapH +1) {
                                                    if (xVeBYsl[L0uBapH] < xVeBYsl[L0uBapH +1]) {
                                                        ofjv6tUiCKn = xVeBYsl[L0uBapH];
                                                        xVeBYsl[L0uBapH] = xVeBYsl[L0uBapH +1];
                                                        xVeBYsl[L0uBapH +1] = ofjv6tUiCKn;
                                                    };
                                                }
                                                XzZRxV = XzZRxV +1;
                                            };
                                        }
                                        for (XzZRxV = 1; XzZRxV <= 4; XzZRxV = XzZRxV +1) {
                                            cout << ArzcqOUf3n[xVeBYsl[XzZRxV]] << " " << xVeBYsl[XzZRxV] * 10;
                                            if (XzZRxV != 4)
                                                cout << endl;
                                        };
                                    };
                                };
                            };
                        };
                    };
                };
            }
            x4OZijcy5++;
        };
    }
    return 0;
}

