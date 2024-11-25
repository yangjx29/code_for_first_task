void  main () {
    float LkbUYG4 [(604 - 304)], b [(827 - 527)], o67sXG5U1T, uaGZhl = (601 - 601), hwl6RUBPn9 = (254 - 254);
    int osbynma6z, ReRiGh0CO, s2CM5oxk;
    scanf ("%d", &osbynma6z);
    for (ReRiGh0CO = (550 - 550); osbynma6z > ReRiGh0CO; ReRiGh0CO++) {
        scanf ("%f", &LkbUYG4[ReRiGh0CO]);
        uaGZhl = uaGZhl + LkbUYG4[ReRiGh0CO];
    }
    o67sXG5U1T = uaGZhl / osbynma6z;
    {
        ReRiGh0CO = (79 - 79);
        for (; ReRiGh0CO < osbynma6z;) {
            if (hwl6RUBPn9 < fabs (LkbUYG4[ReRiGh0CO] - o67sXG5U1T)) {
                hwl6RUBPn9 = fabs (LkbUYG4[ReRiGh0CO] - o67sXG5U1T);
                s2CM5oxk = (512 - 511);
                b[s2CM5oxk] = LkbUYG4[ReRiGh0CO];
                continue;
            }
            if (!(hwl6RUBPn9 != fabs (LkbUYG4[ReRiGh0CO] - o67sXG5U1T))) {
                s2CM5oxk++;
                b[s2CM5oxk] = LkbUYG4[ReRiGh0CO];
            }
            ReRiGh0CO++;
        }
    }
    if (s2CM5oxk == (687 - 686))
        printf ("%.0f", b[(106 - 105)]);
    else {
        for (ReRiGh0CO = (580 - 579); ReRiGh0CO < s2CM5oxk; ReRiGh0CO++)
            printf ("%.0f,", b[ReRiGh0CO]);
        printf ("%.0f", b[s2CM5oxk]);
    }
}

