int main () {
    char uplgwNmJrFAK;
    int ShmAMkRCHOd [50];
    int S2fHUL;
    int xPSuomOBE4n1;
    int ifrvSCY;
    int fze2Gkhn1o;
    int kSBbTvDrh;
    S2fHUL = 0;
    xPSuomOBE4n1 = 0;
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
    ifrvSCY = 0;
    fze2Gkhn1o = 0;
    char fOIboS75HB [50] [20];
    {
        uplgwNmJrFAK = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\n' == uplgwNmJrFAK)) {
            if (uplgwNmJrFAK != ' ') {
                fOIboS75HB[S2fHUL][xPSuomOBE4n1] = uplgwNmJrFAK;
                xPSuomOBE4n1++;
                kSBbTvDrh = xPSuomOBE4n1;
            }
            else {
                ShmAMkRCHOd[ifrvSCY] = xPSuomOBE4n1;
                xPSuomOBE4n1 = 0;
                ifrvSCY++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                S2fHUL++;
                fze2Gkhn1o = S2fHUL;
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
            uplgwNmJrFAK = getchar ();
        };
    }
    ShmAMkRCHOd[ifrvSCY] = xPSuomOBE4n1;
    for (; fze2Gkhn1o > 0; fze2Gkhn1o = fze2Gkhn1o - 1) {
        {
            xPSuomOBE4n1 = 0;
            while (xPSuomOBE4n1 < ShmAMkRCHOd[fze2Gkhn1o] - 1) {
                printf ("%c", fOIboS75HB[fze2Gkhn1o][xPSuomOBE4n1]);
                xPSuomOBE4n1++;
            };
        }
        printf ("%c ", fOIboS75HB[fze2Gkhn1o][ShmAMkRCHOd[fze2Gkhn1o] - 1]);
    }
    {
        xPSuomOBE4n1 = 0;
        while (xPSuomOBE4n1 < ShmAMkRCHOd[0]) {
            printf ("%c", fOIboS75HB[0][xPSuomOBE4n1]);
            xPSuomOBE4n1++;
        };
    }
    return 0;
}

