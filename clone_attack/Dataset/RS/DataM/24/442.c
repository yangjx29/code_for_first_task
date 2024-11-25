int main () {
    int vgAqzF = 1;
    int weizhi [200];
    char zfc [2000];
    int Y8PHT7l4afSY [200];
    int n;
    int Y1PKTevf;
    int j;
    int sFZLOE;
    int EDnlMt;
    EDnlMt = 0;
    int IY8V1ptgX2SM;
    int Ok1C9gLYqzwS;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (zfc);
    n = strlen (zfc);
    {
        Y1PKTevf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Y1PKTevf) {
            if (!(' ' != zfc[Y1PKTevf]) || !(',' != zfc[Y1PKTevf])) {
                weizhi[vgAqzF] = Y1PKTevf;
                vgAqzF++;
            }
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
            Y1PKTevf = Y1PKTevf +1;
        };
    }
    weizhi[0] = -1;
    sFZLOE = vgAqzF;
    weizhi[sFZLOE] = n;
    for (vgAqzF = 0; sFZLOE > vgAqzF; vgAqzF = vgAqzF + 1) {
        Y8PHT7l4afSY[vgAqzF] = weizhi[vgAqzF + 1] - weizhi[vgAqzF] - 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (Y8PHT7l4afSY[vgAqzF] == 0) {
            Y8PHT7l4afSY[vgAqzF] = 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (sFZLOE > j) {
            if (EDnlMt < Y8PHT7l4afSY[j]) {
                EDnlMt = Y8PHT7l4afSY[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                IY8V1ptgX2SM = j;
            }
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
            j = j + 1;
        };
    }
    EDnlMt = 10;
    {
        j = 0;
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
        while (j < sFZLOE) {
            if (EDnlMt > Y8PHT7l4afSY[j]) {
                EDnlMt = Y8PHT7l4afSY[j];
                Ok1C9gLYqzwS = j;
            }
            j++;
        };
    }
    for (Y1PKTevf = weizhi[IY8V1ptgX2SM] + 1; Y1PKTevf < weizhi[IY8V1ptgX2SM +1]; Y1PKTevf = Y1PKTevf +1) {
        printf ("%c", zfc[Y1PKTevf]);
    }
    for (Y1PKTevf = weizhi[Ok1C9gLYqzwS] + 1; Y1PKTevf < weizhi[Ok1C9gLYqzwS +1]; Y1PKTevf = Y1PKTevf +1) {
        printf ("%c", zfc[Y1PKTevf]);
    }
    printf ("\n");
    return 0;
}

