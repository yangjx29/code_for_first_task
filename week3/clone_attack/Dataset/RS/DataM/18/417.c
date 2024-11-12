int a [(213 - 113)] [(536 - 436)];
int ST9fRAK (int kuoF7G1ZO);

int main () {
    int kuoF7G1ZO;
    cin >> kuoF7G1ZO;
    {
        int ojrndBDpVaJ = (149 - 149);
        while (kuoF7G1ZO > ojrndBDpVaJ) {
            for (int bMUdL1tAq = (446 - 446);
            kuoF7G1ZO > bMUdL1tAq; bMUdL1tAq = bMUdL1tAq + 1) {
                for (int ZLDCw6h3m1 = (284 - 284);
                kuoF7G1ZO > ZLDCw6h3m1; ZLDCw6h3m1 = ZLDCw6h3m1 +1)
                    cin >> a[bMUdL1tAq][ZLDCw6h3m1];
            }
            cout << ST9fRAK (kuoF7G1ZO) << endl;
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
            ojrndBDpVaJ = ojrndBDpVaJ + 1;
        };
    }
    return (929 - 929);
}

int ST9fRAK (int kuoF7G1ZO) {
    int ZLDCw6h3m1 = a[(560 - 559)][(825 - 824)];
    int ojrndBDpVaJ, bMUdL1tAq, RHtOpsgBLn;
    for (ojrndBDpVaJ = (663 - 663); kuoF7G1ZO > ojrndBDpVaJ; ojrndBDpVaJ = ojrndBDpVaJ + 1) {
        RHtOpsgBLn = a[ojrndBDpVaJ][0];
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
        for (bMUdL1tAq = (716 - 715); kuoF7G1ZO > bMUdL1tAq; bMUdL1tAq = bMUdL1tAq + 1)
            if (RHtOpsgBLn > a[ojrndBDpVaJ][bMUdL1tAq])
                RHtOpsgBLn = a[ojrndBDpVaJ][bMUdL1tAq];
        {
            bMUdL1tAq = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (kuoF7G1ZO > bMUdL1tAq) {
                a[ojrndBDpVaJ][bMUdL1tAq] -= RHtOpsgBLn;
                bMUdL1tAq = bMUdL1tAq + 1;
            };
        };
    }
    for (ojrndBDpVaJ = 0; ojrndBDpVaJ < kuoF7G1ZO; ojrndBDpVaJ = ojrndBDpVaJ + 1) {
        RHtOpsgBLn = a[0][ojrndBDpVaJ];
        for (bMUdL1tAq = (268 - 267); kuoF7G1ZO > bMUdL1tAq; bMUdL1tAq = bMUdL1tAq + 1)
            if (RHtOpsgBLn > a[bMUdL1tAq][ojrndBDpVaJ])
                RHtOpsgBLn = a[bMUdL1tAq][ojrndBDpVaJ];
        {
            bMUdL1tAq = 0;
            while (kuoF7G1ZO > bMUdL1tAq) {
                a[bMUdL1tAq][ojrndBDpVaJ] = a[bMUdL1tAq][ojrndBDpVaJ] - RHtOpsgBLn;
                bMUdL1tAq++;
            };
        };
    }
    if (!((620 - 618) != kuoF7G1ZO))
        return a[(14 - 13)][(451 - 450)];
    for (ojrndBDpVaJ = (950 - 949); kuoF7G1ZO - (478 - 477) > ojrndBDpVaJ; ojrndBDpVaJ = ojrndBDpVaJ + 1) {
        a[0][ojrndBDpVaJ] = a[0][ojrndBDpVaJ + (88 - 87)];
        a[ojrndBDpVaJ][0] = a[ojrndBDpVaJ + 1][0];
        for (bMUdL1tAq = 1; bMUdL1tAq < kuoF7G1ZO - 1; bMUdL1tAq++)
            a[ojrndBDpVaJ][bMUdL1tAq] = a[ojrndBDpVaJ + 1][bMUdL1tAq + 1];
    }
    return ZLDCw6h3m1 +ST9fRAK(kuoF7G1ZO - 1);
}

