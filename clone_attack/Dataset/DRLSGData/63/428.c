main () {
    static int fLhTMJ [102] [102], UNZiVmQy3Kz [102] [102], r98tEHPIvAK2 [102] [102];
    int ExshOK2y;
    int SsCkl80VzSB;
    int MsbCDF;
    int C2vsE8pdeW;
    int qxsTkA4aQ;
    int LzfwOeKAHuN;
    int SQycgJeoDT;
    int uaHDiu2m;
    int WbNakDPwQj;
    ExshOK2y = 0;
    SsCkl80VzSB = 0;
    scanf ("%d %d", &MsbCDF, &C2vsE8pdeW);
    {
        SQycgJeoDT = 1;
        while (MsbCDF >= SQycgJeoDT) {
            for (uaHDiu2m = 1; C2vsE8pdeW >= uaHDiu2m; uaHDiu2m++)
                scanf ("%d", &fLhTMJ[SQycgJeoDT][uaHDiu2m]);
            SQycgJeoDT++;
        };
    }
    scanf ("%d %d", &qxsTkA4aQ, &LzfwOeKAHuN);
    {
        SQycgJeoDT = 1;
        while (qxsTkA4aQ >= SQycgJeoDT) {
            {
                uaHDiu2m = 1;
                while (uaHDiu2m <= LzfwOeKAHuN) {
                    scanf ("%d", &UNZiVmQy3Kz[SQycgJeoDT][uaHDiu2m]);
                    uaHDiu2m++;
                };
            }
            SQycgJeoDT++;
        };
    }
    {
        SQycgJeoDT = 1;
        while (MsbCDF >= SQycgJeoDT) {
            {
                uaHDiu2m = 1;
                while (uaHDiu2m <= LzfwOeKAHuN) {
                    {
                        WbNakDPwQj = 1;
                        while (WbNakDPwQj <= C2vsE8pdeW) {
                            r98tEHPIvAK2[SQycgJeoDT][uaHDiu2m] += fLhTMJ[SQycgJeoDT][WbNakDPwQj] * UNZiVmQy3Kz[WbNakDPwQj][uaHDiu2m];
                            WbNakDPwQj++;
                        };
                    }
                    uaHDiu2m++;
                };
            }
            SQycgJeoDT++;
        };
    }
    for (SQycgJeoDT = 1; SQycgJeoDT <= MsbCDF; SQycgJeoDT++) {
        {
            uaHDiu2m = 1;
            while (uaHDiu2m <= LzfwOeKAHuN) {
                if (ExshOK2y != 0)
                    printf (" ");
                ExshOK2y++;
                printf ("%d", r98tEHPIvAK2[SQycgJeoDT][uaHDiu2m]);
                uaHDiu2m++;
            };
        }
        ExshOK2y = 0;
    };
}

