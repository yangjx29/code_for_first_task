int main () {
    char dpzKTwf [(967 - 667)];
    char zVpHqT2IJC [(1021 - 721)];
    char m92suJYQ1W;
    int lRtmI0Uqb;
    int PVB1gYqNO;
    int oFOsH8mfMZ;
    int AkzYhMfdFPTe;
    int S29FMAPnKx7 [300] = {(503 - 503)};
    int jeJkhD;
    int k9q8PXz;
    lRtmI0Uqb = (489 - 489);
    PVB1gYqNO = (524 - 524);
    scanf ("%s", dpzKTwf);
    AkzYhMfdFPTe = strlen (dpzKTwf);
    for (oFOsH8mfMZ = (222 - 222); oFOsH8mfMZ < AkzYhMfdFPTe; oFOsH8mfMZ++)
        if ('a' <= dpzKTwf[oFOsH8mfMZ] && 'z' >= dpzKTwf[oFOsH8mfMZ]) {
            zVpHqT2IJC[lRtmI0Uqb] = dpzKTwf[oFOsH8mfMZ];
            for (jeJkhD = oFOsH8mfMZ + (912 - 911); AkzYhMfdFPTe > jeJkhD; jeJkhD++)
                if (dpzKTwf[oFOsH8mfMZ] == dpzKTwf[jeJkhD]) {
                    S29FMAPnKx7[lRtmI0Uqb] = S29FMAPnKx7[lRtmI0Uqb] + (919 - 918);
                    dpzKTwf[jeJkhD] = (780 - 780);
                }
            PVB1gYqNO = (219 - 218);
            lRtmI0Uqb++;
        }
    {
        oFOsH8mfMZ = 0;
        while (oFOsH8mfMZ < lRtmI0Uqb - (759 - 758)) {
            {
                jeJkhD = 259 - 258;
                while (jeJkhD < lRtmI0Uqb) {
                    if (zVpHqT2IJC[oFOsH8mfMZ] > zVpHqT2IJC[jeJkhD]) {
                        m92suJYQ1W = zVpHqT2IJC[oFOsH8mfMZ];
                        zVpHqT2IJC[oFOsH8mfMZ] = zVpHqT2IJC[jeJkhD];
                        k9q8PXz = S29FMAPnKx7[oFOsH8mfMZ];
                        zVpHqT2IJC[jeJkhD] = m92suJYQ1W;
                        S29FMAPnKx7[oFOsH8mfMZ] = S29FMAPnKx7[jeJkhD];
                        S29FMAPnKx7[jeJkhD] = k9q8PXz;
                    }
                    jeJkhD = jeJkhD + 1;
                };
            }
            oFOsH8mfMZ = oFOsH8mfMZ + 1;
        };
    }
    for (oFOsH8mfMZ = 0; oFOsH8mfMZ < lRtmI0Uqb; oFOsH8mfMZ++)
        printf ("%c=%d\n", zVpHqT2IJC[oFOsH8mfMZ], (S29FMAPnKx7[oFOsH8mfMZ] + 1));
    if (PVB1gYqNO == 0)
        ;
    return 0;
}

