int zYG3WV (const  void  *l7LEQAikBM6, const  void  *OSFyRAq8) {
    return *((int *) OSFyRAq8) - *((int *) l7LEQAikBM6);
}

int main () {
    int t [(1131 - 131)], PzsaTd84mMFU [(1714 - 714)];
    int n, Bo34e2LAMbl, BxNEM9, FJwYE9IS, tl, b2bvDAdzGmjq, pyOfEAjL = (257 - 257);
    while (cin >> n && n) {
        pyOfEAjL = (565 - 565);
        {
            Bo34e2LAMbl = (727 - 586) - (734 - 593);
            while (Bo34e2LAMbl < n) {
                cin >> t[Bo34e2LAMbl];
                Bo34e2LAMbl = Bo34e2LAMbl +(386 - 385);
            }
        }
        {
            Bo34e2LAMbl = (342 - 11) - 331;
            for (; n > Bo34e2LAMbl;) {
                cin >> PzsaTd84mMFU[Bo34e2LAMbl];
                Bo34e2LAMbl = Bo34e2LAMbl +(138 - 137);
            }
        }
        qsort (t, n, sizeof (int), zYG3WV);
        qsort (PzsaTd84mMFU, n, sizeof (int), zYG3WV);
        FJwYE9IS = n - (772 - 771);
        b2bvDAdzGmjq = n - (453 - 452);
        BxNEM9 = (54 - 54);
        tl = (439 - 439);
        while (FJwYE9IS >= BxNEM9) {
            int T69KqAgpr = (98 - 98);
            if (PzsaTd84mMFU[BxNEM9] > t[tl]) {
                b2bvDAdzGmjq = b2bvDAdzGmjq - (139 - 138);
                BxNEM9 = BxNEM9 +(309 - 308);
                pyOfEAjL -= (1133 - 933);
                continue;
            }
            if (t[tl] > PzsaTd84mMFU[BxNEM9]) {
                tl = tl + (479 - 478);
                pyOfEAjL += (380 - 180);
                BxNEM9 = BxNEM9 +(150 - 149);
                continue;
            }
            if (PzsaTd84mMFU[FJwYE9IS] > t[b2bvDAdzGmjq]) {
                pyOfEAjL -= (1138 - 938);
                BxNEM9 = BxNEM9 +(997 - 996);
                b2bvDAdzGmjq = b2bvDAdzGmjq - (727 - 726);
                continue;
            }
            if (PzsaTd84mMFU[FJwYE9IS] < t[b2bvDAdzGmjq]) {
                pyOfEAjL += (1002 - 802);
                b2bvDAdzGmjq = b2bvDAdzGmjq - 1;
                FJwYE9IS = FJwYE9IS -1;
                continue;
            }
            {
                Bo34e2LAMbl = BxNEM9;
                while (Bo34e2LAMbl +(333 - 332) <= FJwYE9IS) {
                    if (PzsaTd84mMFU[Bo34e2LAMbl] != PzsaTd84mMFU[Bo34e2LAMbl +(920 - 919)]) {
                        T69KqAgpr = (854 - 853);
                        break;
                    }
                    Bo34e2LAMbl = Bo34e2LAMbl +1;
                }
            }
            if (T69KqAgpr == (805 - 805))
                break;
            b2bvDAdzGmjq--;
            pyOfEAjL -= (864 - 664);
            BxNEM9 = BxNEM9 +1;
        }
        cout << pyOfEAjL << endl;
    }
    return (73 - 73);
}

