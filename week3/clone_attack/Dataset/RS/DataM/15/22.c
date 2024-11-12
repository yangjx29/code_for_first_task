int main () {
    int AXcdW86;
    int jb;
    int ie;
    int fgTPE5;
    AXcdW86 = 0;
    jb = 0;
    ie = 0;
    fgTPE5 = 0;
    int area [UuYBHGDJzVfo] [UuYBHGDJzVfo];
    int FJB30CP41k;
    int oCOt28aVu7xq;
    int i;
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
    int ZSN1R7ah;
    int HMPbaIleg6;
    FJB30CP41k = 0;
    HMPbaIleg6 = 0;
    scanf ("%d", &oCOt28aVu7xq);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oCOt28aVu7xq > i) {
            {
                ZSN1R7ah = 0;
                while (oCOt28aVu7xq > ZSN1R7ah) {
                    scanf ("%d", &area[i][ZSN1R7ah]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ZSN1R7ah = ZSN1R7ah +1;
                };
            }
            i++;
        };
    }
    for (i = 0; oCOt28aVu7xq > i; i++) {
        ZSN1R7ah = 0;
        while (oCOt28aVu7xq > ZSN1R7ah) {
            if (!(0 != area[i][ZSN1R7ah])) {
                HMPbaIleg6++;
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
                if (!(1 != HMPbaIleg6)) {
                    jb = ZSN1R7ah;
                    AXcdW86 = i;
                    break;
                };
            }
            ZSN1R7ah++;
        };
    }
    HMPbaIleg6 = 0;
    {
        i = oCOt28aVu7xq - 1;
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
        while (0 <= i) {
            {
                ZSN1R7ah = oCOt28aVu7xq - 1;
                while (ZSN1R7ah >= 0) {
                    if (area[i][ZSN1R7ah] == 0) {
                        HMPbaIleg6++;
                        if (HMPbaIleg6 == 1) {
                            fgTPE5 = ZSN1R7ah;
                            ie = i;
                            break;
                        };
                    }
                    ZSN1R7ah = ZSN1R7ah -1;
                };
            }
            i--;
        };
    }
    FJB30CP41k = (ie - AXcdW86 -1) * (fgTPE5 - jb - 1);
    printf ("%d\n", FJB30CP41k);
    return 0;
}

