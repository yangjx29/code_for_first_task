int yoacnrj (int TnoUkVRyANX);

int main () {
    int qZxpPJ9;
    int n5EMkPJD;
    scanf ("%d", &qZxpPJ9);
    {
        n5EMkPJD = 0;
        while (qZxpPJ9 > n5EMkPJD) {
            int TnoUkVRyANX;
            int MwY8M4m05;
            int C5wjbvPO2y;
            int ymr9A5JpeD7;
            int Ju9xTw1b;
            int xPktgTQ;
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
            TnoUkVRyANX = 0;
            MwY8M4m05 = 0;
            n5EMkPJD = n5EMkPJD + 1;
            scanf ("%d %d %d", &TnoUkVRyANX, &C5wjbvPO2y, &ymr9A5JpeD7);
            if (ymr9A5JpeD7 < C5wjbvPO2y) {
                Ju9xTw1b = ymr9A5JpeD7;
                ymr9A5JpeD7 = C5wjbvPO2y;
                C5wjbvPO2y = Ju9xTw1b;
            }
            if (!(1 != yoacnrj (TnoUkVRyANX))) {
                xPktgTQ = C5wjbvPO2y;
                while (ymr9A5JpeD7 > xPktgTQ) {
                    if (!(1 != xPktgTQ) || !(3 != xPktgTQ) || !(5 != xPktgTQ) || !(7 != xPktgTQ) || !(8 != xPktgTQ) || !(10 != xPktgTQ)) {
                        MwY8M4m05 += 31;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    if (!(2 != xPktgTQ)) {
                        MwY8M4m05 = MwY8M4m05 +29;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    if (xPktgTQ == 4 || !(6 != xPktgTQ) || !(9 != xPktgTQ) || !(11 != xPktgTQ)) {
                        MwY8M4m05 += 30;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    xPktgTQ = xPktgTQ + 1;
                };
            }
            if (!(0 != yoacnrj (TnoUkVRyANX))) {
                xPktgTQ = C5wjbvPO2y;
                while (ymr9A5JpeD7 > xPktgTQ) {
                    if (xPktgTQ == 1 || xPktgTQ == 3 || xPktgTQ == 5 || xPktgTQ == 7 || xPktgTQ == 8 || xPktgTQ == 10) {
                        MwY8M4m05 += 31;
                    }
                    if (xPktgTQ == 2) {
                        MwY8M4m05 += 28;
                    }
                    if (xPktgTQ == 4 || xPktgTQ == 6 || xPktgTQ == 9 || xPktgTQ == 11) {
                        MwY8M4m05 += 30;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    xPktgTQ = xPktgTQ + 1;
                };
            }
            if (MwY8M4m05 % 7 == 0) {
                printf ("YES\n");
            }
            else {
                printf ("NO\n");
            };
        };
    }
    return 0;
}

int yoacnrj (int TnoUkVRyANX) {
    if (TnoUkVRyANX % 4 == 0 && TnoUkVRyANX % 100 != 0) {
        return 1;
    }
    if (TnoUkVRyANX % 400 == 0) {
        return 1;
    }
    else
        return 0;
}

