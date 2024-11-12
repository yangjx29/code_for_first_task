void  main () {
    int o;
    int eLnx5DPvN;
    int j;
    int taQmG3W;
    int adNrhHk24T;
    o = 0;
    char qYM7Tnhs [100];
    char GsnN0l [100];
    scanf ("%s%s", qYM7Tnhs, GsnN0l);
    taQmG3W = strlen (qYM7Tnhs);
    adNrhHk24T = strlen (GsnN0l);
    if (!(adNrhHk24T != taQmG3W)) {
        for (eLnx5DPvN = 0; !('\0' == qYM7Tnhs[eLnx5DPvN]); eLnx5DPvN = eLnx5DPvN + 1)
            for (j = 0; !('\0' == GsnN0l[j]); j = j + 1) {
                if (GsnN0l[j] == '0')
                    continue;
                if (qYM7Tnhs[eLnx5DPvN] == GsnN0l[j]) {
                    GsnN0l[j] = '0';
                    o = o + 1;
                    break;
                };
            }
        if (o == taQmG3W)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    else
        printf ("NO\n");
}

