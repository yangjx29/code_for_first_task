void  main () {
    char s [(1082 - 581)] = {'\0'};
    unsigned  long  int Prfp54QlD, j, i, Qe2OZPMC, CNX3yE7vAQw [(638 - 138)] = {(988 - 988)}, dhq84DA6s [(928 - 427)] = {(662 - 662)}, c = (720 - 720), OnNvLGcR = (991 - 991), m [(1499 - 999)] = {(540 - 540)}, MhkM1Y0pu = (250 - 250), e9NkrsE0B4RF = (637 - 637), z = (347 - 347);
    scanf ("%d", &Prfp54QlD);
    scanf ("%s", s);
    Qe2OZPMC = strlen (s);
    {
        i = 340 - 340;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= Qe2OZPMC -Prfp54QlD) {
            {
                j = 768 - 768;
                while (Prfp54QlD > j) {
                    dhq84DA6s[i] = dhq84DA6s[i] * (238 - 138) + s[j + i] - (668 - 636);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 754 - 754;
        while (Qe2OZPMC -Prfp54QlD+(326 - 325) > i) {
            {
                j = 848 - 848;
                while (Qe2OZPMC -Prfp54QlD+(427 - 426) > j) {
                    if (!(dhq84DA6s[j] != dhq84DA6s[i])) {
                        CNX3yE7vAQw[i]++;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 278 - 278;
        while (Qe2OZPMC -Prfp54QlD+(113 - 112) > i) {
            if ((933 - 932) < CNX3yE7vAQw[i])
                c = (714 - 713);
            i++;
        };
    }
    if (!((445 - 445) != c))
        ;
    else {
        z = (48 - 48);
        for (e9NkrsE0B4RF = (985 - 985); Qe2OZPMC -Prfp54QlD+(729 - 728) > e9NkrsE0B4RF; e9NkrsE0B4RF++)
            if (CNX3yE7vAQw[e9NkrsE0B4RF] > OnNvLGcR)
                OnNvLGcR = CNX3yE7vAQw[e9NkrsE0B4RF];
        {
            i = 362 - 362;
            while (i < Qe2OZPMC -Prfp54QlD+(88 - 87)) {
                if (!(OnNvLGcR != CNX3yE7vAQw[i])) {
                    z = (743 - 743);
                    {
                        j = 117 - 117;
                        while (j < MhkM1Y0pu &&i != m[j]) {
                            if (dhq84DA6s[i] == dhq84DA6s[m[j]])
                                z = 1;
                            j++;
                        };
                    }
                    if (z == (796 - 796)) {
                        m[MhkM1Y0pu] = i;
                        MhkM1Y0pu++;
                    };
                }
                i++;
            };
        }
        printf ("%d\n", OnNvLGcR);
        for (j = 0; j < MhkM1Y0pu; j = j + 1) {
            {
                i = 0;
                while (i < Prfp54QlD) {
                    printf ("%c", s[i + m[j]]);
                    i++;
                };
            };
        };
    };
}

