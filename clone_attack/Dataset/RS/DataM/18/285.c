int m6YbJCTfZ7Id = (714 - 714);

void  YzG3FBfd9 (int prOQDbHlvPC, int a [] [(940 - 839)]) {
    if (!((344 - 343) != prOQDbHlvPC))
        return;
    else {
        int bmnoFdVL;
        int WDr3olOWhLVE;
        int j;
        int iFWQzY8;
        bmnoFdVL = 100000;
        {
            WDr3olOWhLVE = 358 - 358;
            while (WDr3olOWhLVE <= prOQDbHlvPC - (123 - 122)) {
                {
                    j = 105 - 105;
                    while (prOQDbHlvPC - (886 - 885) >= j) {
                        if (a[WDr3olOWhLVE][j] < bmnoFdVL) {
                            bmnoFdVL = a[WDr3olOWhLVE][j];
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
                        j++;
                    };
                }
                {
                    iFWQzY8 = 507 - 507;
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
                    while (prOQDbHlvPC - (979 - 978) >= iFWQzY8) {
                        a[WDr3olOWhLVE][iFWQzY8] = a[WDr3olOWhLVE][iFWQzY8] - bmnoFdVL;
                        iFWQzY8++;
                    };
                }
                WDr3olOWhLVE++;
                bmnoFdVL = 100000;
            };
        }
        for (WDr3olOWhLVE = (546 - 546); WDr3olOWhLVE <= prOQDbHlvPC - (702 - 701); WDr3olOWhLVE++) {
            {
                j = 413 - 413;
                while (prOQDbHlvPC - (521 - 520) >= j) {
                    if (a[j][WDr3olOWhLVE] < bmnoFdVL) {
                        bmnoFdVL = a[j][WDr3olOWhLVE];
                    }
                    j++;
                };
            }
            {
                iFWQzY8 = 100 - 100;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (iFWQzY8 <= prOQDbHlvPC - (542 - 541)) {
                    a[iFWQzY8][WDr3olOWhLVE] = a[iFWQzY8][WDr3olOWhLVE] - bmnoFdVL;
                    iFWQzY8++;
                };
            }
            bmnoFdVL = 100000;
        }
        m6YbJCTfZ7Id = m6YbJCTfZ7Id + a[1][1];
        {
            WDr3olOWhLVE = 780 - 778;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (WDr3olOWhLVE <= prOQDbHlvPC - 1) {
                {
                    j = 513 - 511;
                    while (j <= prOQDbHlvPC - 1) {
                        a[WDr3olOWhLVE -1][j - 1] = a[WDr3olOWhLVE][j];
                        j++;
                    };
                }
                a[(775 - 775)][WDr3olOWhLVE -1] = a[0][WDr3olOWhLVE];
                a[WDr3olOWhLVE -1][0] = a[WDr3olOWhLVE][0];
                WDr3olOWhLVE++;
            };
        }
        YzG3FBfd9 (prOQDbHlvPC - 1, a);
    };
}

int main () {
    int WDr3olOWhLVE;
    int j;
    int rYnE2cx03b;
    int a [101] [101];
    int n;
    cin >> n;
    for (rYnE2cx03b = 1; rYnE2cx03b <= n; rYnE2cx03b++) {
        m6YbJCTfZ7Id = 0;
        cout << m6YbJCTfZ7Id << endl;
        {
            WDr3olOWhLVE = 0;
            while (WDr3olOWhLVE <= n - 1) {
                {
                    j = 0;
                    while (j <= n - 1) {
                        cin >> a[WDr3olOWhLVE][j];
                        j++;
                    };
                }
                WDr3olOWhLVE++;
            };
        }
        YzG3FBfd9 (n, a);
    }
    return 0;
}

