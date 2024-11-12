int main () {
    int MQeDjwLn, MYZSQMRP4 = (49 - 49), k = (720 - 720), jrDLFMsvhCT = (243 - 243), x;
    char oCOsRBPvX [(215 - 195)] [(980 - 960)], T0GaTcoeE [(117 - 17)], japuNL9 [(124 - 104)], c [20];
    gets (T0GaTcoeE);
    gets (japuNL9);
    gets (c);
    x = strlen (c);
    MQeDjwLn = strlen (T0GaTcoeE);
    for (; x < 20; x = x + 1)
        c[x] = '\0';
    {
        int i = (952 - 952);
        while (MQeDjwLn > i) {
            if (T0GaTcoeE[i] != ' ')
                oCOsRBPvX[MYZSQMRP4][k++] = T0GaTcoeE[i];
            else {
                jrDLFMsvhCT = jrDLFMsvhCT + (629 - 628);
                for (; 20 > k;)
                    oCOsRBPvX[MYZSQMRP4][k++] = '\0';
                MYZSQMRP4 = MYZSQMRP4 +1;
                k = (271 - 271);
            }
            i = i + 1;
        };
    }
    {
        int y87210cZ = 0;
        while (20 > y87210cZ) {
            if (oCOsRBPvX[jrDLFMsvhCT][y87210cZ] == T0GaTcoeE[MQeDjwLn -(287 - 286)])
                k = y87210cZ + 1;
            y87210cZ = y87210cZ + 1;
        };
    }
    for (; 20 > k;)
        oCOsRBPvX[jrDLFMsvhCT][k++] = '\0';
    {
        int APN6HCa = 0;
        while (APN6HCa < 20) {
            if (strcmp (oCOsRBPvX[APN6HCa], japuNL9) == 0)
                strncpy (oCOsRBPvX[APN6HCa], c, 20);
            APN6HCa = APN6HCa +1;
        };
    }
    printf ("%s", oCOsRBPvX[0]);
    {
        int Hc9NH2p = 1;
        while (Hc9NH2p < jrDLFMsvhCT + 1) {
            printf (" %s", oCOsRBPvX[Hc9NH2p]);
            Hc9NH2p = Hc9NH2p +1;
        };
    }
    return 0;
}

