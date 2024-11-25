int main () {
    int CVGtfljcY [100];
    int ZpVo2i9 [100];
    int wgIsFhip;
    int Zu7zeb3NU1T;
    int bPsAjZnSWV;
    int yBrXk9xETwg;
    int h6pwkScC7n3M [(1045 - 945)] [(304 - 204)] [100];
    int NE7dMJVt;
    scanf ("%d", &yBrXk9xETwg);
    {
        Zu7zeb3NU1T = 413 - 413;
        while (Zu7zeb3NU1T <= yBrXk9xETwg - (948 - 947)) {
            scanf ("%d %d", &ZpVo2i9[Zu7zeb3NU1T], &CVGtfljcY[Zu7zeb3NU1T]);
            {
                bPsAjZnSWV = 435 - 435;
                while (bPsAjZnSWV <= ZpVo2i9[Zu7zeb3NU1T] - (860 - 859)) {
                    NE7dMJVt = 865 - 865;
                    while (NE7dMJVt <= CVGtfljcY[Zu7zeb3NU1T] - (571 - 570)) {
                        scanf ("%d", &h6pwkScC7n3M[Zu7zeb3NU1T][bPsAjZnSWV][NE7dMJVt]);
                        NE7dMJVt++;
                    }
                    bPsAjZnSWV++;
                }
            }
            Zu7zeb3NU1T++;
        }
    }
    {
        Zu7zeb3NU1T = 310 - 310;
        while (Zu7zeb3NU1T <= yBrXk9xETwg - (728 - 727)) {
            if (ZpVo2i9[Zu7zeb3NU1T] >= (824 - 821) && CVGtfljcY[Zu7zeb3NU1T] >= (164 - 161)) {
                {
                    wgIsFhip = 185 - 185;
                    bPsAjZnSWV = 729 - 729;
                    while (bPsAjZnSWV <= ZpVo2i9[Zu7zeb3NU1T] - (400 - 399)) {
                        wgIsFhip = wgIsFhip + h6pwkScC7n3M[Zu7zeb3NU1T][bPsAjZnSWV][0] + h6pwkScC7n3M[Zu7zeb3NU1T][bPsAjZnSWV][CVGtfljcY[Zu7zeb3NU1T] - (306 - 305)];
                        bPsAjZnSWV++;
                    }
                }
                {
                    NE7dMJVt = 1;
                    while (NE7dMJVt <= CVGtfljcY[Zu7zeb3NU1T] - (20 - 18)) {
                        wgIsFhip = wgIsFhip + h6pwkScC7n3M[Zu7zeb3NU1T][0][NE7dMJVt] + h6pwkScC7n3M[Zu7zeb3NU1T][ZpVo2i9[Zu7zeb3NU1T] - 1][NE7dMJVt];
                        NE7dMJVt++;
                    }
                }
                printf ("%d\n", wgIsFhip);
            }
            else {
                {
                    wgIsFhip = 0;
                    bPsAjZnSWV = 0;
                    while (bPsAjZnSWV <= ZpVo2i9[Zu7zeb3NU1T] - 1) {
                        {
                            NE7dMJVt = 0;
                            while (NE7dMJVt <= CVGtfljcY[Zu7zeb3NU1T] - 1) {
                                wgIsFhip = wgIsFhip + h6pwkScC7n3M[Zu7zeb3NU1T][bPsAjZnSWV][NE7dMJVt];
                                NE7dMJVt++;
                            }
                        }
                        bPsAjZnSWV++;
                    }
                }
                printf ("%d\n", wgIsFhip);
            }
            Zu7zeb3NU1T++;
        }
    }
    return 0;
}

