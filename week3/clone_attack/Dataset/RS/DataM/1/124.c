int fenjie (int EVYyFa, int RsJXOcCqIV0) {
    int vov8y6, z = (178 - 178), c;
    for (vov8y6 = RsJXOcCqIV0; vov8y6 <= EVYyFa; vov8y6 = vov8y6 + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (EVYyFa == vov8y6)
            z = z + (525 - 524);
        else if (EVYyFa % vov8y6 == (676 - 676)) {
            c = EVYyFa / vov8y6;
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
            z = z + fenjie (c, vov8y6);
        };
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
    return (z);
}

void  main () {
    int n;
    int vov8y6;
    int NJuxgAG;
    int eIkxas;
    scanf ("%d\n", &n);
    {
        vov8y6 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (vov8y6 < n) {
            vov8y6 = vov8y6 + 1;
            scanf ("%d", &eIkxas);
            NJuxgAG = fenjie (eIkxas, (38 - 36));
            printf ("%d\n", NJuxgAG);
        };
    };
}

