void  main () {
    int MSaDAv5cGkT, O1RGszg8l, i, IvzgsRGJ, OV9i5gs;
    char P5yOZHkafm [100], fgwNfQkIse [100], IcBIlkOzZMAW [100];
    gets (P5yOZHkafm);
    gets (fgwNfQkIse);
    gets (IcBIlkOzZMAW);
    char eGatMmI [50] [100];
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
    MSaDAv5cGkT = strlen (P5yOZHkafm);
    {
        O1RGszg8l = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 408 - 408;
        while (i < MSaDAv5cGkT) {
            if (P5yOZHkafm[i] == ' ')
                O1RGszg8l = O1RGszg8l +1;
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
    for (i = 0, OV9i5gs = 0; O1RGszg8l > i; i = i + 1) {
        for (IvzgsRGJ = 0;; IvzgsRGJ++) {
            if (!(' ' != P5yOZHkafm[OV9i5gs +IvzgsRGJ])) {
                OV9i5gs = OV9i5gs +IvzgsRGJ+1;
                eGatMmI[i][IvzgsRGJ] = '\0';
                break;
            }
            else
                eGatMmI[i][IvzgsRGJ] = P5yOZHkafm[OV9i5gs +IvzgsRGJ];
        };
    }
    {
        i = 0;
        while (i < O1RGszg8l) {
            if (strcmp (eGatMmI[i], fgwNfQkIse) == 0)
                strcpy (eGatMmI[i], IcBIlkOzZMAW);
            else
                strcpy (eGatMmI[i], eGatMmI[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < O1RGszg8l -1; i = i + 1)
        printf ("%s ", eGatMmI[i]);
    printf ("%s\n", eGatMmI[O1RGszg8l -1]);
}

