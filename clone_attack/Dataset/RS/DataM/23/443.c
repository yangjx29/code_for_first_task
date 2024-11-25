void  main () {
    int oxvmM94j, CMlN49k, j, CWlTo0MS, sJZ2S5, FnlStMr = 0;
    char BeumGnN7 [100] = {(563 - 563)};
    gets (BeumGnN7);
    oxvmM94j = strlen (BeumGnN7);
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
    CWlTo0MS = oxvmM94j - 1;
    {
        sJZ2S5 = 0;
        while (sJZ2S5 < oxvmM94j) {
            if (!(' ' != BeumGnN7[sJZ2S5]))
                FnlStMr = FnlStMr +1;
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
            sJZ2S5 = sJZ2S5 + 1;
        };
    }
    if (FnlStMr != 0) {
        for (CMlN49k = (oxvmM94j - 1); CMlN49k >= 0; CMlN49k--) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (BeumGnN7[CMlN49k] == ' ') {
                {
                    j = CMlN49k +1;
                    while (j <= CWlTo0MS) {
                        printf ("%c", BeumGnN7[j]);
                        j = j + 1;
                    };
                }
                CWlTo0MS = CMlN49k -1;
                printf ("%c", BeumGnN7[CMlN49k]);
            };
        }
        {
            CMlN49k = 0;
            while (CMlN49k < oxvmM94j) {
                if (BeumGnN7[CMlN49k] == ' ') {
                    {
                        j = 0;
                        while (j < CMlN49k) {
                            printf ("%c", BeumGnN7[j]);
                            j++;
                        };
                    }
                    break;
                }
                CMlN49k = CMlN49k +1;
            };
        };
    }
    else
        puts (BeumGnN7);
}

