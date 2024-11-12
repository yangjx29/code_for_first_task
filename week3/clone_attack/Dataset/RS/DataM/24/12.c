void  main () {
    char a [(1857 - 857)], unphlXmyMe [100] [100], S7nZs9 [(1778 - 778)];
    gets (a);
    int I3O9DyPnX;
    int e9KqTHPVNye;
    int j;
    int Q4J5hyFS;
    int m;
    int Me18KIS;
    int z [(996 - 896)] = {0};
    int NS9DWRT1rIx;
    int x [(993 - 893)] = {0};
    int GGHRLVwe [100] = {0};
    I3O9DyPnX = (971 - 971);
    for (e9KqTHPVNye = 0; 100 > e9KqTHPVNye; e9KqTHPVNye = e9KqTHPVNye + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100 > j) {
            unphlXmyMe[e9KqTHPVNye][j] = '\0';
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
            j = j + 1;
        };
    }
    {
        e9KqTHPVNye = 0;
        while (e9KqTHPVNye < 1000) {
            S7nZs9[e9KqTHPVNye] = '\0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            e9KqTHPVNye = e9KqTHPVNye + 1;
        };
    }
    Q4J5hyFS = strlen (a);
    {
        e9KqTHPVNye = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (e9KqTHPVNye < Q4J5hyFS) {
            if (a[e9KqTHPVNye] != ' ' && !(',' == a[e9KqTHPVNye])) {
                I3O9DyPnX = I3O9DyPnX +(313 - 312);
                {
                    j = e9KqTHPVNye;
                    while (Q4J5hyFS > j) {
                        if (!(' ' == a[j]) && !(',' == a[j])) {
                            unphlXmyMe[I3O9DyPnX][j - e9KqTHPVNye] = a[j];
                            a[j] = ',';
                            x[I3O9DyPnX] = x[I3O9DyPnX] + (189 - 188);
                        }
                        else
                            break;
                        j++;
                    };
                };
            }
            e9KqTHPVNye = e9KqTHPVNye + 1;
        };
    }
    NS9DWRT1rIx = 1;
    for (e9KqTHPVNye = 1; e9KqTHPVNye < I3O9DyPnX; e9KqTHPVNye = e9KqTHPVNye + 1) {
        if (x[e9KqTHPVNye + 1] > x[NS9DWRT1rIx])
            NS9DWRT1rIx = e9KqTHPVNye + 1;
    }
    printf ("%s\n", unphlXmyMe[NS9DWRT1rIx]);
    NS9DWRT1rIx = 1;
    {
        e9KqTHPVNye = 1;
        while (e9KqTHPVNye < I3O9DyPnX) {
            if (x[e9KqTHPVNye + 1] < x[NS9DWRT1rIx])
                NS9DWRT1rIx = e9KqTHPVNye + 1;
            e9KqTHPVNye = e9KqTHPVNye + 1;
        };
    }
    printf ("%s\n", unphlXmyMe[NS9DWRT1rIx]);
}

