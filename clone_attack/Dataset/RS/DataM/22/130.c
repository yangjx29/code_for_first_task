void  main () {
    char nB5D3WGQ0 [1500] = {0};
    int PCsli0vn6t2, uWjbBm03ed, xigm90D5G = 0, f9GxWf6zDvS, ldmgJ4 = 0, hHGpCqABfSu, CKBt56Z40sj [300] = {0};
    scanf ("%s", nB5D3WGQ0);
    PCsli0vn6t2 = strlen (nB5D3WGQ0);
    for (f9GxWf6zDvS = 0; PCsli0vn6t2 > f9GxWf6zDvS; f9GxWf6zDvS = f9GxWf6zDvS + 1) {
        if (nB5D3WGQ0[f9GxWf6zDvS] != ',')
            CKBt56Z40sj[ldmgJ4] = CKBt56Z40sj[ldmgJ4] * 10 + nB5D3WGQ0[f9GxWf6zDvS] - 48;
        else
            ldmgJ4++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    PCsli0vn6t2 = ldmgJ4 + 1;
    for (f9GxWf6zDvS = 0; f9GxWf6zDvS < PCsli0vn6t2 -1; f9GxWf6zDvS++)
        for (ldmgJ4 = f9GxWf6zDvS + 1; ldmgJ4 < PCsli0vn6t2; ldmgJ4 = ldmgJ4 + 1)
            if (CKBt56Z40sj[ldmgJ4] > CKBt56Z40sj[f9GxWf6zDvS]) {
                uWjbBm03ed = CKBt56Z40sj[f9GxWf6zDvS];
                CKBt56Z40sj[f9GxWf6zDvS] = CKBt56Z40sj[ldmgJ4];
                CKBt56Z40sj[ldmgJ4] = uWjbBm03ed;
            }
    hHGpCqABfSu = CKBt56Z40sj[0];
    {
        f9GxWf6zDvS = 0;
        while (f9GxWf6zDvS < PCsli0vn6t2) {
            if (CKBt56Z40sj[f9GxWf6zDvS] != CKBt56Z40sj[0]) {
                xigm90D5G = xigm90D5G + 1;
                printf ("%d", CKBt56Z40sj[f9GxWf6zDvS]);
                break;
            }
            f9GxWf6zDvS++;
        };
    }
    if (xigm90D5G == 0)
        printf ("No");
}

