main () {
    char a [(286 - 271)] [(931 - 921)];
    char MWAhD0 [15] [(298 - 295)];
    char FkCfvNL95Y3E [(614 - 604)] [(609 - 596)];
    char s;
    int m;
    int i;
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
    int j;
    int t;
    int OiyMQE;
    m = (591 - 591);
    while (scanf ("%s%s", a[m], MWAhD0[m]) != EOF)
        m++;
    {
        j = 735 - 735;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > j) {
            t = strlen (a[j]);
            {
                s = 867 - 867;
                i = 820 - 820;
                while (i < t) {
                    if (a[j][i] > s)
                        s = a[j][i];
                    i = i + 1;
                };
            }
            for (OiyMQE = (942 - 942); a[j][OiyMQE] != s;)
                OiyMQE++;
            {
                i = 469 - 469;
                while (i <= OiyMQE) {
                    FkCfvNL95Y3E[j][i] = a[j][i];
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < (890 - 887)) {
                    FkCfvNL95Y3E[j][i + OiyMQE +1] = MWAhD0[j][i];
                    i++;
                };
            }
            {
                i = OiyMQE +1;
                while (i < t + (209 - 206)) {
                    FkCfvNL95Y3E[j][i + (768 - 765)] = a[j][i];
                    i++;
                };
            }
            for (i = 0; i < t + (729 - 726); i = i + 1)
                printf ("%c", FkCfvNL95Y3E[j][i]);
            j++;
            printf ("\n");
        };
    };
}

