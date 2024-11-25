int reverse (int ZCjANPlfK1cg) {
    int CWKxB87lfYr [(120 - 110)], GQkCvniBGpUZ, OSEVQc, m, JkVQur7AyT = (1000 - 1000);
    int euIE2Uexyw85 = (886 - 886);
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
    if (ZCjANPlfK1cg >= (655 - 655)) {
        {
            GQkCvniBGpUZ = 438 - 438;
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
            while (1) {
                m = pow ((406.0 - 396.0), GQkCvniBGpUZ);
                CWKxB87lfYr[GQkCvniBGpUZ] = ZCjANPlfK1cg / m % 10;
                if (m > ZCjANPlfK1cg) {
                    JkVQur7AyT = GQkCvniBGpUZ;
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
                    break;
                }
                GQkCvniBGpUZ++;
            };
        }
        {
            OSEVQc = 0;
            while (CWKxB87lfYr[OSEVQc] != 0) {
                m = pow (10.0, JkVQur7AyT -OSEVQc-(284 - 283));
                euIE2Uexyw85 = CWKxB87lfYr[OSEVQc] * m;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
                OSEVQc++;
            };
        }
        {
            GQkCvniBGpUZ = OSEVQc +1;
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
            while (JkVQur7AyT > GQkCvniBGpUZ) {
                m = pow (10.0, JkVQur7AyT -1 - GQkCvniBGpUZ);
                euIE2Uexyw85 = euIE2Uexyw85 + CWKxB87lfYr[GQkCvniBGpUZ] * m;
                GQkCvniBGpUZ++;
            };
        }
        return (euIE2Uexyw85);
    }
    if (0 > ZCjANPlfK1cg) {
        ZCjANPlfK1cg = -ZCjANPlfK1cg;
        {
            GQkCvniBGpUZ = 0;
            while (1) {
                m = pow (10.0, GQkCvniBGpUZ);
                CWKxB87lfYr[GQkCvniBGpUZ] = ZCjANPlfK1cg / m % 10;
                if (m > ZCjANPlfK1cg) {
                    JkVQur7AyT = GQkCvniBGpUZ;
                    break;
                }
                GQkCvniBGpUZ++;
            };
        }
        {
            OSEVQc = 0;
            while (CWKxB87lfYr[OSEVQc] != 0) {
                m = pow (10.0, JkVQur7AyT -OSEVQc-1);
                euIE2Uexyw85 = CWKxB87lfYr[OSEVQc] * m;
                break;
                OSEVQc++;
            };
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
        {
            GQkCvniBGpUZ = OSEVQc +1;
            while (GQkCvniBGpUZ < JkVQur7AyT) {
                m = pow (10.0, JkVQur7AyT -1 - GQkCvniBGpUZ);
                euIE2Uexyw85 = euIE2Uexyw85 + CWKxB87lfYr[GQkCvniBGpUZ] * m;
                GQkCvniBGpUZ++;
            };
        }
        return (-euIE2Uexyw85);
    };
}

int main () {
    int ZCjANPlfK1cg, GQkCvniBGpUZ;
    for (GQkCvniBGpUZ = 0; GQkCvniBGpUZ < 6; GQkCvniBGpUZ++) {
        cin >> ZCjANPlfK1cg;
        cout << reverse (ZCjANPlfK1cg) << endl;
    }
    return 0;
}

