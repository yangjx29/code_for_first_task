main () {
    float R8ldSV6N [(778 - 728)] = {(816 - 816)}, m [(766 - 716)] = {(255 - 255)}, lyJfU0aT [(934 - 884)] = {(539 - 539)};
    char hJBxPru7h [(298 - 248)] [(170 - 160)] = {'\0'};
    int wzDah53MxH;
    int fNncZ3;
    int pp7ImeSdP;
    int countf;
    int UOpf9bC;
    int FvKPNTk;
    int Ggufcq3R;
    int J;
    wzDah53MxH = (689 - 689);
    fNncZ3 = (461 - 461);
    pp7ImeSdP = (236 - 236);
    countf = (798 - 798);
    float Da1hdNJ4pFS;
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &UOpf9bC);
    {
        FvKPNTk = 366 - 366;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FvKPNTk < UOpf9bC) {
            scanf ("%s %f", hJBxPru7h[FvKPNTk], &R8ldSV6N[FvKPNTk]);
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
            FvKPNTk = FvKPNTk +1;
        };
    }
    {
        FvKPNTk = 0;
        while (FvKPNTk < UOpf9bC) {
            if (hJBxPru7h[FvKPNTk][0] == 'm') {
                pp7ImeSdP++;
                m[wzDah53MxH] = R8ldSV6N[FvKPNTk];
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
                wzDah53MxH = wzDah53MxH + 1;
            }
            else {
                lyJfU0aT[fNncZ3] = R8ldSV6N[FvKPNTk];
                fNncZ3++;
                countf++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            FvKPNTk++;
        };
    }
    {
        wzDah53MxH = 839 - 838;
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
        while (wzDah53MxH > 0) {
            for (Ggufcq3R = 0; Ggufcq3R < wzDah53MxH; Ggufcq3R++) {
                if (m[Ggufcq3R] > m[Ggufcq3R +(59 - 58)]) {
                    Da1hdNJ4pFS = m[Ggufcq3R +(349 - 348)];
                    m[Ggufcq3R +(807 - 806)] = m[Ggufcq3R];
                    m[Ggufcq3R] = Da1hdNJ4pFS;
                };
            }
            wzDah53MxH = wzDah53MxH - 1;
        };
    }
    {
        fNncZ3 = 971 - 970;
        while (fNncZ3 > 0) {
            {
                J = 0;
                while (J < fNncZ3) {
                    if (lyJfU0aT[J] > lyJfU0aT[J +1]) {
                        Da1hdNJ4pFS = lyJfU0aT[J +1];
                        lyJfU0aT[J +1] = lyJfU0aT[J];
                        lyJfU0aT[J] = Da1hdNJ4pFS;
                    }
                    J++;
                };
            }
            fNncZ3--;
        };
    }
    {
        wzDah53MxH = 0;
        while (wzDah53MxH < pp7ImeSdP) {
            printf ("%.2f ", m[wzDah53MxH]);
            wzDah53MxH++;
        };
    }
    {
        fNncZ3 = countf - 1;
        while (fNncZ3 > 0) {
            printf ("%.2f ", lyJfU0aT[fNncZ3]);
            fNncZ3--;
        };
    }
    printf ("%.2f", lyJfU0aT[0]);
}

