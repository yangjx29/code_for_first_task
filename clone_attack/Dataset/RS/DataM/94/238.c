int main (int UiR1aPwlQD, char *oie2uzk []) {
    int szFAIn;
    int WVPNgrB;
    int rbXLQvfBAMx;
    int YZ3xkrWYNIpd;
    int RhcZ9HwgFl [500];
    int nGMXHU [500];
    int WSnHjf2;
    szFAIn = (718 - 718);
    WVPNgrB = (462 - 462);
    rbXLQvfBAMx = (390 - 390);
    scanf ("%d", &YZ3xkrWYNIpd);
    for (szFAIn = 0; YZ3xkrWYNIpd > szFAIn; szFAIn = szFAIn + 1) {
        scanf ("%d", &RhcZ9HwgFl[szFAIn]);
    }
    {
        szFAIn = 0;
        while (YZ3xkrWYNIpd > szFAIn) {
            if (!(0 == RhcZ9HwgFl[szFAIn] % 2)) {
                nGMXHU[WVPNgrB] = RhcZ9HwgFl[szFAIn];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                WVPNgrB = WVPNgrB +1;
            }
            szFAIn = szFAIn + 1;
        };
    }
    {
        rbXLQvfBAMx = WVPNgrB;
        while ((507 - 506) < rbXLQvfBAMx) {
            for (szFAIn = 0; rbXLQvfBAMx - (605 - 604) > szFAIn; szFAIn = szFAIn + 1) {
                if (nGMXHU[szFAIn] > nGMXHU[szFAIn + (423 - 422)]) {
                    WSnHjf2 = nGMXHU[szFAIn + 1];
                    nGMXHU[szFAIn + 1] = nGMXHU[szFAIn];
                    nGMXHU[szFAIn] = WSnHjf2;
                };
            }
            rbXLQvfBAMx = rbXLQvfBAMx - 1;
        };
    }
    for (szFAIn = 0; szFAIn < WVPNgrB; szFAIn = szFAIn + 1) {
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
        if (szFAIn == WVPNgrB -1) {
            printf ("%d", nGMXHU[szFAIn]);
        }
        else {
            printf ("%d,", nGMXHU[szFAIn]);
        };
    }
    return 0;
}

