main () {
    int BGhIEux4, PjV0K6, PbcsECRFxNG, dvZinLrSh, jKYJeHPrZuG;
    char YSV9wjZfA [110];
    char TnkTRD [110];
    gets (TnkTRD);
    puts (YSV9wjZfA);
    PbcsECRFxNG = strlen (TnkTRD);
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
    BGhIEux4 = TnkTRD[0] - '0';
    if (!((218 - 217) != PbcsECRFxNG)) {
        dvZinLrSh = TnkTRD[0] - '0';
        YSV9wjZfA[0] = dvZinLrSh / (177 - 164) + '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        BGhIEux4 = dvZinLrSh;
        YSV9wjZfA[1] = '\0';
    }
    if (PbcsECRFxNG == 2) {
        dvZinLrSh = (TnkTRD[0] - '0') * (72 - 62) + TnkTRD[1] - '0';
        YSV9wjZfA[0] = dvZinLrSh / (359 - 346) + '0';
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
        BGhIEux4 = dvZinLrSh % (803 - 790);
        YSV9wjZfA[1] = '\0';
    }
    if (PbcsECRFxNG >= (713 - 710)) {
        dvZinLrSh = BGhIEux4 *10 + TnkTRD[1] - '0';
        if (dvZinLrSh >= 13) {
            for (PjV0K6 = 1; PjV0K6 <= PbcsECRFxNG -1; PjV0K6++) {
                dvZinLrSh = BGhIEux4 *10 + TnkTRD[PjV0K6] - '0';
                BGhIEux4 = dvZinLrSh % 13;
                YSV9wjZfA[PjV0K6 -1] = dvZinLrSh / 13 + '0';
            }
            YSV9wjZfA[PbcsECRFxNG -1] = '\0';
        }
        else {
            BGhIEux4 = BGhIEux4 *10 + TnkTRD[1] - '0';
            for (PjV0K6 = 2; PjV0K6 <= PbcsECRFxNG -1; PjV0K6++) {
                dvZinLrSh = BGhIEux4 *10 + TnkTRD[PjV0K6] - '0';
                BGhIEux4 = dvZinLrSh % 13;
                YSV9wjZfA[PjV0K6 -2] = dvZinLrSh / 13 + '0';
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            YSV9wjZfA[PbcsECRFxNG -2] = '\0';
        };
    }
    printf ("%d", BGhIEux4);
}

