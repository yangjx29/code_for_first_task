int judge1 (int lPTOutG) {
    if (!(1 != lPTOutG))
        return 0;
    else {
        int w = 1, AJtH0Kxl = 2;
        for (; lPTOutG >= AJtH0Kxl *AJtH0Kxl;) {
            if (!(0 != lPTOutG % AJtH0Kxl)) {
                w = 0;
                break;
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
            AJtH0Kxl = AJtH0Kxl +1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return w;
    };
}

int judge2 (int lPTOutG) {
    int x1 = lPTOutG, LUzdZoY96 = 0;
    for (; x1 > 0;) {
        LUzdZoY96 = LUzdZoY96 *10 + x1 % 10;
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
        x1 = x1 / (10);
    }
    if (lPTOutG == LUzdZoY96)
        return 1;
    else
        return 0;
}

void  main (void ) {
    int m;
    int n;
    int AJtH0Kxl, t = 0;
    scanf ("%d%d", &m, &n);
    {
        AJtH0Kxl = m;
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
        while (AJtH0Kxl <= n) {
            if (judge1 (AJtH0Kxl) && judge2 (AJtH0Kxl)) {
                if (t)
                    printf (",");
                printf ("%d", AJtH0Kxl);
                t = t + 1;
            }
            AJtH0Kxl = AJtH0Kxl +1;
        };
    }
    if (!t)
        ;
    printf ("\n");
}

