main () {
    char UHt1VgdfSs0 [1000], cbAzpMFofW [1000], EFnN9DP [1000];
    gets (UHt1VgdfSs0);
    int dLgB4ONMbd [1000] = {(302 - 302)};
    int i;
    int Jvi3RdPtrk;
    int xEDy3O;
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
    xEDy3O = 0;
    dLgB4ONMbd[0] = 1;
    Jvi3RdPtrk = strlen (UHt1VgdfSs0);
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
        while (Jvi3RdPtrk >= i) {
            if (UHt1VgdfSs0[i] < 'a')
                cbAzpMFofW[i] = UHt1VgdfSs0[i];
            else
                cbAzpMFofW[i] = UHt1VgdfSs0[i] + 'A' - 'a';
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
            i = i + 1;
        };
    }
    EFnN9DP[0] = cbAzpMFofW[0];
    for (i = 1; i <= Jvi3RdPtrk; i = i + 1) {
        if (cbAzpMFofW[i] == cbAzpMFofW[i - 1])
            dLgB4ONMbd[xEDy3O] = dLgB4ONMbd[xEDy3O] + 1;
        else {
            xEDy3O = xEDy3O + 1;
            EFnN9DP[xEDy3O] = cbAzpMFofW[i];
            dLgB4ONMbd[xEDy3O] = dLgB4ONMbd[xEDy3O] + 1;
        };
    }
    {
        i = 0;
        while (i <= xEDy3O - 1) {
            printf ("(%c,%d)", EFnN9DP[i], dLgB4ONMbd[i]);
            i = i + 1;
        };
    };
}

