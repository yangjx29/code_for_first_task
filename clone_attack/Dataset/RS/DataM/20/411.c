main () {
    char JdhVA7F [(414 - 403)] = {'\0'}, sub [(297 - 293)];
    while (scanf ("%s %s", JdhVA7F, sub) != EOF) {
        int TRarIvtDUOy;
        int T04GXl6wO2;
        int Bo3xwcm;
        int ubnJ7NIK;
        TRarIvtDUOy = strlen (JdhVA7F);
        char axHNG5JQ = JdhVA7F[(799 - 799)];
        char ApVPqf [15] = {'\0'}, ubscZO93NU [10] = {'\0'};
        {
            T04GXl6wO2 = 199 - 198;
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
            while (T04GXl6wO2 < TRarIvtDUOy) {
                if (JdhVA7F[T04GXl6wO2] > axHNG5JQ)
                    axHNG5JQ = JdhVA7F[T04GXl6wO2];
                T04GXl6wO2 = T04GXl6wO2 +1;
            };
        }
        {
            Bo3xwcm = 367 - 367;
            while (1) {
                ApVPqf[Bo3xwcm] = JdhVA7F[Bo3xwcm];
                if (JdhVA7F[Bo3xwcm] == axHNG5JQ)
                    break;
                Bo3xwcm = Bo3xwcm +1;
            };
        }
        strcat (ApVPqf, sub);
        {
            ubnJ7NIK = Bo3xwcm +1;
            while (ubnJ7NIK < TRarIvtDUOy) {
                ubscZO93NU[ubnJ7NIK - Bo3xwcm -1] = JdhVA7F[ubnJ7NIK];
                ubnJ7NIK = ubnJ7NIK + 1;
            };
        }
        strcat (ApVPqf, ubscZO93NU);
        printf ("%s\n", ApVPqf);
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
    return 0;
}

