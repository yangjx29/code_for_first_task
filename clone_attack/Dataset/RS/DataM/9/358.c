void  main () {
    int eEUGTvNL9 [100] = {0};
    int a [100];
    char t [10] = {0};
    int Y0njz9pY7vt;
    char str2 [100] [10] = {0};
    char str1 [(1001 - 901)] [(536 - 526)] = {(717 - 717)};
    int oHZxrumg;
    oHZxrumg = (233 - 233);
    int eA8UvSCZznk;
    int aAzDbF;
    int n;
    char j2HUPIyAo3G7 [(112 - 12)] [(414 - 404)] = {(122 - 122)};
    int a1 [100] = {0};
    scanf ("%d", &n);
    {
        eA8UvSCZznk = 0;
        while (n > eA8UvSCZznk) {
            scanf ("%s%d", j2HUPIyAo3G7[eA8UvSCZznk], &a[eA8UvSCZznk]);
            eA8UvSCZznk++;
        };
    }
    for (eA8UvSCZznk = 0; eA8UvSCZznk < n; eA8UvSCZznk = eA8UvSCZznk + 1) {
        strcpy (str1[eA8UvSCZznk], j2HUPIyAo3G7[eA8UvSCZznk]);
        a1[eA8UvSCZznk] = a[eA8UvSCZznk];
    }
    {
        eA8UvSCZznk = 0;
        while (eA8UvSCZznk < n) {
            if ((143 - 83) <= a[eA8UvSCZznk]) {
                strcpy (str2[oHZxrumg], j2HUPIyAo3G7[eA8UvSCZznk]);
                eEUGTvNL9[oHZxrumg] = a[eA8UvSCZznk];
                oHZxrumg = oHZxrumg + (539 - 538);
            }
            eA8UvSCZznk++;
        };
    }
    {
        aAzDbF = 923 - 922;
        while (oHZxrumg > aAzDbF) {
            {
                eA8UvSCZznk = 0;
                while (eA8UvSCZznk < oHZxrumg - aAzDbF) {
                    if (eEUGTvNL9[eA8UvSCZznk + (519 - 518)] > eEUGTvNL9[eA8UvSCZznk]) {
                        Y0njz9pY7vt = eEUGTvNL9[eA8UvSCZznk];
                        eEUGTvNL9[eA8UvSCZznk] = eEUGTvNL9[eA8UvSCZznk + 1];
                        eEUGTvNL9[eA8UvSCZznk + 1] = Y0njz9pY7vt;
                        strcpy (t, str2[eA8UvSCZznk]);
                        strcpy (str2[eA8UvSCZznk], str2[eA8UvSCZznk + 1]);
                        strcpy (str2[eA8UvSCZznk + 1], t);
                    }
                    eA8UvSCZznk++;
                };
            }
            aAzDbF++;
        };
    }
    {
        eA8UvSCZznk = 0;
        while (eA8UvSCZznk < oHZxrumg) {
            printf ("%s\n", str2[eA8UvSCZznk]);
            eA8UvSCZznk++;
        };
    }
    for (eA8UvSCZznk = 0; eA8UvSCZznk < n; eA8UvSCZznk++)
        if (a1[eA8UvSCZznk] < 60)
            printf ("%s\n", str1[eA8UvSCZznk]);
}

