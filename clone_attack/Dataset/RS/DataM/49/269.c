void  f (char cYnRpCo0E8 [(1048 - 548)]) {
    int i;
    int VPAnTaRY;
    char Mr6EmzRU [(703 - 203)];
    VPAnTaRY = strlen (cYnRpCo0E8);
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
        while (i <= 499) {
            if (VPAnTaRY -1 >= i)
                Mr6EmzRU[i] = cYnRpCo0E8[VPAnTaRY -1 - i];
            else
                Mr6EmzRU[i] = '\0';
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
        };
    }
    if (!(0 != strcmp (cYnRpCo0E8, Mr6EmzRU)))
        puts (cYnRpCo0E8);
}

void  main (void ) {
    char gvTe2am [500];
    gets (gvTe2am);
    int VPAnTaRY;
    VPAnTaRY = strlen (gvTe2am);
    int Hr06iGXmuRHK;
    for (Hr06iGXmuRHK = 1; Hr06iGXmuRHK <= VPAnTaRY -1; Hr06iGXmuRHK++) {
        char cYnRpCo0E8 [500];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        int i;
        {
            i = 0;
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
            while (i <= VPAnTaRY -1 - Hr06iGXmuRHK) {
                int bobpk3d;
                f (cYnRpCo0E8);
                for (bobpk3d = 0; bobpk3d <= 499; bobpk3d++) {
                    if (bobpk3d <= Hr06iGXmuRHK)
                        cYnRpCo0E8[bobpk3d] = gvTe2am[i + bobpk3d];
                    else
                        cYnRpCo0E8[bobpk3d] = '\0';
                }
                i++;
            };
        };
    };
}

