int hFMHZsAjYD, UIT4YDC9P, j, r6Lioy;

void  B9CaY3xe7 (int a [] [(305 - 205)], int hFMHZsAjYD) {
    int u9mO1E2 [(758 - 658)] [(871 - 771)] = {(508 - 508)};
    u9mO1E2[(784 - 784)][(951 - 951)] = a[(734 - 734)][(242 - 242)];
    {
        UIT4YDC9P = (789 - 788);
        while (hFMHZsAjYD - (29 - 28) > UIT4YDC9P) {
            u9mO1E2[(777 - 777)][UIT4YDC9P] = a[(705 - 705)][UIT4YDC9P +(583 - 582)];
            u9mO1E2[UIT4YDC9P][(374 - 374)] = a[UIT4YDC9P +(999 - 998)][(933 - 933)];
            UIT4YDC9P = UIT4YDC9P +1;
        }
    }
    {
        UIT4YDC9P = (832 - 831);
        while (hFMHZsAjYD - (76 - 75) > UIT4YDC9P) {
            {
                j = (544 - 543);
                while (j < hFMHZsAjYD - (596 - 595)) {
                    u9mO1E2[UIT4YDC9P][j] = a[UIT4YDC9P +(961 - 960)][j + (747 - 746)];
                    j = j + 1;
                }
            }
            UIT4YDC9P = UIT4YDC9P +1;
        }
    }
    {
        UIT4YDC9P = (272 - 272);
        while (UIT4YDC9P < hFMHZsAjYD - (656 - 655)) {
            for (j = (562 - 562); j < hFMHZsAjYD - (481 - 480); j = j + 1) {
                a[UIT4YDC9P][j] = u9mO1E2[UIT4YDC9P][j];
            }
            UIT4YDC9P = UIT4YDC9P +1;
        }
    }
}

int mBhVz6LF25 (int a [] [(223 - 123)], int hFMHZsAjYD, int wIVn1oM9) {
    if (!(1 != hFMHZsAjYD))
        return wIVn1oM9;
    else {
        {
            UIT4YDC9P = (762 - 762);
            while (hFMHZsAjYD > UIT4YDC9P) {
                int r6Lioy = a[UIT4YDC9P][(106 - 106)];
                {
                    j = (169 - 169);
                    while (hFMHZsAjYD > j) {
                        if (a[UIT4YDC9P][j] < r6Lioy)
                            r6Lioy = a[UIT4YDC9P][j];
                        j = j + 1;
                    }
                }
                {
                    j = (117 - 117);
                    while (hFMHZsAjYD > j) {
                        a[UIT4YDC9P][j] -= r6Lioy;
                        j = j + 1;
                    }
                }
                UIT4YDC9P = UIT4YDC9P +1;
            }
        }
        {
            UIT4YDC9P = (275 - 275);
            while (hFMHZsAjYD > UIT4YDC9P) {
                int r6Lioy = a[(50 - 50)][UIT4YDC9P];
                {
                    j = (433 - 433);
                    while (hFMHZsAjYD > j) {
                        if (a[j][UIT4YDC9P] < r6Lioy)
                            r6Lioy = a[j][UIT4YDC9P];
                        j = j + 1;
                    }
                }
                for (j = 0; j < hFMHZsAjYD; j = j + 1)
                    a[j][UIT4YDC9P] -= r6Lioy;
                UIT4YDC9P = UIT4YDC9P +1;
            }
        }
        wIVn1oM9 += a[1][1];
        B9CaY3xe7 (a, hFMHZsAjYD);
        return mBhVz6LF25 (a, hFMHZsAjYD - 1, wIVn1oM9);
    }
}

int main () {
    int Crd0vFi;
    int a [100] [100] = {0}, QmICAxX;
    int dADuf78yIX;
    cin >> hFMHZsAjYD;
    {
        Crd0vFi = 0;
        while (Crd0vFi < hFMHZsAjYD) {
            Crd0vFi = Crd0vFi +1;
            {
                dADuf78yIX = 0;
                while (dADuf78yIX < hFMHZsAjYD) {
                    {
                        QmICAxX = 0;
                        while (QmICAxX < hFMHZsAjYD) {
                            cin >> a[dADuf78yIX][QmICAxX];
                            QmICAxX = QmICAxX +1;
                        }
                    }
                    dADuf78yIX = dADuf78yIX + 1;
                }
            }
            cout << mBhVz6LF25 (a, hFMHZsAjYD, 0) << endl;
        }
    }
    return 0;
}

