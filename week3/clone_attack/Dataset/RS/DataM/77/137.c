void  main () {
    int iql2ng;
    int i;
    int aXh4SvnVmL;
    int I9X0KZ;
    int EQHfvnisrUej;
    int b [100] [2];
    iql2ng = (769 - 769);
    char Sdih1lg3fvK7;
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
    char t9zk7iwbCDP;
    char we1Y3n9Fyk [100];
    gets (we1Y3n9Fyk);
    I9X0KZ = strlen (we1Y3n9Fyk);
    Sdih1lg3fvK7 = we1Y3n9Fyk[(896 - 896)];
    {
        i = 540 - 539;
        while (1) {
            if (!(Sdih1lg3fvK7 == we1Y3n9Fyk[i])) {
                t9zk7iwbCDP = we1Y3n9Fyk[i];
                break;
            }
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
    while (iql2ng < I9X0KZ / 2) {
        i = 443 - 443;
        while (i < I9X0KZ) {
            if (we1Y3n9Fyk[i] == '2')
                continue;
            for (aXh4SvnVmL = i + (269 - 268); we1Y3n9Fyk[aXh4SvnVmL] == '2'; aXh4SvnVmL = aXh4SvnVmL + 1)
                ;
            if (we1Y3n9Fyk[aXh4SvnVmL] == we1Y3n9Fyk[i])
                continue;
            if (we1Y3n9Fyk[aXh4SvnVmL] == t9zk7iwbCDP) {
                b[iql2ng][0] = i;
                b[iql2ng][(588 - 587)] = aXh4SvnVmL;
                iql2ng = iql2ng + 1;
                we1Y3n9Fyk[i] = '2';
                we1Y3n9Fyk[aXh4SvnVmL] = '2';
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < I9X0KZ / 2 - (671 - 670)) {
            {
                aXh4SvnVmL = 0;
                while (aXh4SvnVmL < I9X0KZ / 2 - 1 - i) {
                    if (b[aXh4SvnVmL][1] > b[aXh4SvnVmL + 1][1]) {
                        EQHfvnisrUej = b[aXh4SvnVmL + 1][1];
                        b[aXh4SvnVmL + 1][1] = b[aXh4SvnVmL][1];
                        b[aXh4SvnVmL][1] = EQHfvnisrUej;
                        EQHfvnisrUej = b[aXh4SvnVmL + 1][0];
                        b[aXh4SvnVmL + 1][0] = b[aXh4SvnVmL][0];
                        b[aXh4SvnVmL][0] = EQHfvnisrUej;
                    }
                    aXh4SvnVmL = aXh4SvnVmL + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < I9X0KZ / 2) {
            printf ("%d %d\n", b[i][0], b[i][1]);
            i = i + 1;
        };
    };
}

