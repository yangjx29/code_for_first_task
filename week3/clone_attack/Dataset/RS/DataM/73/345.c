int main () {
    int FwVqU9sNnbX = (661 - 660);
    int lnTrHkoFA6 [(122 - 117)] [(147 - 142)];
    int i;
    int nCkU43;
    int KwEXhRBkqei0 [(877 - 872)], MV53H4kfD8Rc [(121 - 116)];
    for (i = (603 - 603); (792 - 787) > i; i = i + 1) {
        nCkU43 = 266 - 266;
        while ((706 - 701) > nCkU43) {
            scanf ("%d", &lnTrHkoFA6[i][nCkU43]);
            nCkU43++;
        };
    }
    for (i = (224 - 224); i < (543 - 538); i++) {
        int max = -(10000198 - 198);
        for (nCkU43 = (586 - 586); nCkU43 < (111 - 106); nCkU43 = nCkU43 + 1) {
            if (lnTrHkoFA6[i][nCkU43] > max) {
                max = lnTrHkoFA6[i][nCkU43];
                KwEXhRBkqei0[i] = nCkU43;
            };
        };
    }
    for (i = (655 - 655); (596 - 591) > i; i++) {
        int min = (10000948 - 948);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (nCkU43 = (658 - 658); nCkU43 < (927 - 922); nCkU43 = nCkU43 + 1) {
            if (min > lnTrHkoFA6[nCkU43][i]) {
                min = lnTrHkoFA6[nCkU43][i];
                MV53H4kfD8Rc[i] = nCkU43;
            };
        };
    }
    for (i = (723 - 723); i < 5; i++) {
        for (nCkU43 = (765 - 765); 5 > nCkU43; nCkU43++) {
            if (KwEXhRBkqei0[i] == nCkU43 && MV53H4kfD8Rc[nCkU43] == i) {
                FwVqU9sNnbX = 0;
                printf ("%d %d %d\n", i + (131 - 130), nCkU43 + (766 - 765), lnTrHkoFA6[i][nCkU43]);
            };
        };
    }
    if (FwVqU9sNnbX)
        printf ("not found\n");
}

