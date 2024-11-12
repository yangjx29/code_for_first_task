void  main () {
    int YrVNvSkzW [6];
    int EojRcfbA [6];
    int X1eCiUd;
    int MGLr04;
    scanf ("%d", &X1eCiUd);
    YrVNvSkzW[0] = X1eCiUd % 10;
    YrVNvSkzW[1] = (X1eCiUd % 100 - X1eCiUd % 10) / 10;
    YrVNvSkzW[2] = (X1eCiUd % 1000 - X1eCiUd % 100) / 100;
    YrVNvSkzW[3] = (X1eCiUd % 10000 - X1eCiUd % 1000) / 1000;
    YrVNvSkzW[4] = (X1eCiUd % 100000 - X1eCiUd % 10000) / 10000;
    if (!(0 == YrVNvSkzW[4])) {
        MGLr04 = YrVNvSkzW[0] * 10000 + YrVNvSkzW[1] * 1000 + YrVNvSkzW[2] * 100 + YrVNvSkzW[3] * 10 + YrVNvSkzW[4];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", MGLr04);
    }
    else if (!(0 == YrVNvSkzW[3])) {
        MGLr04 = YrVNvSkzW[0] * 1000 + YrVNvSkzW[1] * 100 + YrVNvSkzW[2] * 10 + YrVNvSkzW[3];
        printf ("%d\n", MGLr04);
    }
    else if (YrVNvSkzW[2] != 0) {
        MGLr04 = YrVNvSkzW[0] * 100 + YrVNvSkzW[1] * 10 + YrVNvSkzW[2];
        printf ("%d\n", MGLr04);
    }
    else if (YrVNvSkzW[1] != 0) {
        MGLr04 = YrVNvSkzW[1] * 10 + YrVNvSkzW[0];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d\n", MGLr04);
    }
    else {
        printf ("%d\n", YrVNvSkzW[0]);
    };
}

