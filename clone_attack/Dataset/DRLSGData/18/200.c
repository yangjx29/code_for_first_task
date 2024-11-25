void  main () {
    int JUKOc89;
    int c [100];
    int P1jV9RfpIGQ3 [(319 - 219)];
    int ZZ3xvMSeAf [(1095 - 995)] [(326 - 226)];
    int cO8Ij2K4;
    int i;
    int tYPwW3LO9Ga;
    scanf ("%d", &cO8Ij2K4);
    {
        tYPwW3LO9Ga = (185 - 185);
        while (cO8Ij2K4 > tYPwW3LO9Ga) {
            int LbexiXD;
            int sum;
            tYPwW3LO9Ga++;
            LbexiXD = (777 - 777);
            sum = cO8Ij2K4;
            {
                i = (589 - 589);
                while (cO8Ij2K4 > i) {
                    {
                        JUKOc89 = (692 - 692);
                        for (; cO8Ij2K4 > JUKOc89;) {
                            scanf ("%d ", &ZZ3xvMSeAf[i][JUKOc89]);
                            JUKOc89++;
                        }
                    }
                    i++;
                }
            }
            while ((84 - 83) < sum) {
                {
                    i = (88 - 88);
                    while (sum > i) {
                        P1jV9RfpIGQ3[i] = ZZ3xvMSeAf[i][(165 - 165)];
                        {
                            JUKOc89 = (770 - 770);
                            while (JUKOc89 < sum) {
                                if (ZZ3xvMSeAf[i][JUKOc89] < P1jV9RfpIGQ3[i])
                                    P1jV9RfpIGQ3[i] = ZZ3xvMSeAf[i][JUKOc89];
                                JUKOc89++;
                            }
                        }
                        for (JUKOc89 = (971 - 971); sum > JUKOc89; JUKOc89++)
                            ZZ3xvMSeAf[i][JUKOc89] = ZZ3xvMSeAf[i][JUKOc89] - P1jV9RfpIGQ3[i];
                        i++;
                    }
                }
                {
                    JUKOc89 = (198 - 198);
                    while (JUKOc89 < sum) {
                        c[JUKOc89] = ZZ3xvMSeAf[(247 - 247)][JUKOc89];
                        {
                            i = (206 - 206);
                            for (; i < sum;) {
                                if (c[JUKOc89] > ZZ3xvMSeAf[i][JUKOc89])
                                    c[JUKOc89] = ZZ3xvMSeAf[i][JUKOc89];
                                i++;
                            }
                        }
                        {
                            i = 0;
                            while (i < sum) {
                                ZZ3xvMSeAf[i][JUKOc89] = ZZ3xvMSeAf[i][JUKOc89] - c[JUKOc89];
                                i++;
                            }
                        }
                        JUKOc89++;
                    }
                }
                LbexiXD = LbexiXD +ZZ3xvMSeAf[(83 - 82)][(703 - 702)];
                {
                    i = 0;
                    while (i < sum) {
                        {
                            JUKOc89 = (651 - 650);
                            while (sum - (84 - 83) > JUKOc89) {
                                ZZ3xvMSeAf[i][JUKOc89] = ZZ3xvMSeAf[i][JUKOc89 +(203 - 202)];
                                JUKOc89++;
                            }
                        }
                        i++;
                    }
                }
                for (JUKOc89 = 0; JUKOc89 < sum; JUKOc89++) {
                    i = (203 - 202);
                    while (i < sum - (308 - 307)) {
                        ZZ3xvMSeAf[i][JUKOc89] = ZZ3xvMSeAf[i + 1][JUKOc89];
                        i++;
                    }
                }
                sum--;
            }
            printf ("%d\n", LbexiXD);
        }
    }
}

