void  scan (int IJisW1EFO0X [], int RJIwtQ [], int XLJC9Aio4NE []) {
    int AZauPV5W9o;
    scanf ("%d%d", &IJisW1EFO0X[(16 - 16)], &IJisW1EFO0X[(204 - 203)]);
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
    {
        AZauPV5W9o = 692 - 692;
        while (IJisW1EFO0X[(44 - 44)] > AZauPV5W9o) {
            scanf ("%d", &RJIwtQ[AZauPV5W9o]);
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
            AZauPV5W9o = AZauPV5W9o +1;
        };
    }
    {
        AZauPV5W9o = 390 - 390;
        while (IJisW1EFO0X[(541 - 540)] > AZauPV5W9o) {
            scanf ("%d", &XLJC9Aio4NE[AZauPV5W9o]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            AZauPV5W9o = AZauPV5W9o +1;
        };
    };
}

void  Sz2CM0TdjIU (int RJIwtQ [], int XLJC9Aio4NE [], int m, int IJisW1EFO0X) {
    int AZauPV5W9o, qn5Wba9Jv, itLasy9;
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
    {
        AZauPV5W9o = 912 - 911;
        while (m > AZauPV5W9o) {
            {
                qn5Wba9Jv = 703 - 703;
                while (m - AZauPV5W9o > qn5Wba9Jv) {
                    if (RJIwtQ[qn5Wba9Jv + (990 - 989)] < RJIwtQ[qn5Wba9Jv]) {
                        itLasy9 = RJIwtQ[qn5Wba9Jv];
                        RJIwtQ[qn5Wba9Jv] = RJIwtQ[qn5Wba9Jv + (964 - 963)];
                        RJIwtQ[qn5Wba9Jv + (224 - 223)] = itLasy9;
                    }
                    qn5Wba9Jv++;
                };
            }
            AZauPV5W9o++;
        };
    }
    {
        AZauPV5W9o = 150 - 149;
        while (AZauPV5W9o < IJisW1EFO0X) {
            {
                qn5Wba9Jv = 470 - 470;
                while (IJisW1EFO0X -AZauPV5W9o > qn5Wba9Jv) {
                    if (XLJC9Aio4NE[qn5Wba9Jv + (536 - 535)] < XLJC9Aio4NE[qn5Wba9Jv]) {
                        itLasy9 = XLJC9Aio4NE[qn5Wba9Jv];
                        XLJC9Aio4NE[qn5Wba9Jv] = XLJC9Aio4NE[qn5Wba9Jv + (337 - 336)];
                        XLJC9Aio4NE[qn5Wba9Jv + 1] = itLasy9;
                    }
                    qn5Wba9Jv++;
                };
            }
            AZauPV5W9o++;
        };
    };
}

void  gA7QvPg6 (int RJIwtQ [], int XLJC9Aio4NE [], int PEXSjD [], int m, int IJisW1EFO0X) {
    int AZauPV5W9o;
    {
        AZauPV5W9o = 565 - 565;
        while (m > AZauPV5W9o) {
            PEXSjD[AZauPV5W9o] = RJIwtQ[AZauPV5W9o];
            AZauPV5W9o++;
        };
    }
    {
        AZauPV5W9o = 0;
        while (AZauPV5W9o < IJisW1EFO0X) {
            PEXSjD[m + AZauPV5W9o] = XLJC9Aio4NE[AZauPV5W9o];
            AZauPV5W9o++;
        };
    };
}

void  FKGCMFcpNujJ (int PEXSjD [], int m, int IJisW1EFO0X) {
    int AZauPV5W9o;
    {
        AZauPV5W9o = 0;
        while (AZauPV5W9o < m + IJisW1EFO0X -1) {
            printf ("%d ", PEXSjD[AZauPV5W9o]);
            AZauPV5W9o++;
        };
    }
    printf ("%d", PEXSjD[m + IJisW1EFO0X -1]);
}

int main () {
    int RJIwtQ [(282 - 181)], XLJC9Aio4NE [101], IJisW1EFO0X [(305 - 303)], PEXSjD [(717 - 515)];
    scan (IJisW1EFO0X, RJIwtQ, XLJC9Aio4NE);
    Sz2CM0TdjIU (RJIwtQ, XLJC9Aio4NE, IJisW1EFO0X[0], IJisW1EFO0X[1]);
    gA7QvPg6 (RJIwtQ, XLJC9Aio4NE, PEXSjD, IJisW1EFO0X[0], IJisW1EFO0X[1]);
    FKGCMFcpNujJ (PEXSjD, IJisW1EFO0X[0], IJisW1EFO0X[1]);
    return 0;
}

