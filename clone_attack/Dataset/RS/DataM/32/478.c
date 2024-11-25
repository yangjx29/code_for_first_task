void  main () {
    int i;
    int sBq0jG;
    int CGXbEcTu;
    int m;
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
    char Xje6K1 [100];
    char P8DXcx [100];
    scanf ("%d", &sBq0jG);
    for (; sBq0jG > 0; sBq0jG--) {
        scanf ("%s %s", Xje6K1, P8DXcx);
        i = 1;
        CGXbEcTu = strlen (P8DXcx);
        m = strlen (Xje6K1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CGXbEcTu >= i) {
            if (Xje6K1[m - i] >= P8DXcx[CGXbEcTu -i])
                Xje6K1[m - i] = Xje6K1[m - i] - P8DXcx[CGXbEcTu -i] + 48;
            else {
                Xje6K1[m - i] = Xje6K1[m - i] + 58 - P8DXcx[CGXbEcTu -i];
                Xje6K1[m - i - 1] = Xje6K1[m - i - 1] - 1;
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
            i++;
        }
        for (i = m - CGXbEcTu -1; m >= 0; m--) {
            if (Xje6K1[i] < '0') {
                Xje6K1[i] += 10;
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
                Xje6K1[i - 1] = Xje6K1[i - 1] - 1;
            }
            else
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        printf ("%s\n", Xje6K1);
    };
}

