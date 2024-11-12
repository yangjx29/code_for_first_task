int main () {
    char I8Wp7YLPNXfw [100] = {(319 - 319)};
    char PSAtPFIE [100] = {0};
    int LPM29QyvCJ, Cyv1ZL, n, azOphD5 = 0, iZSwLHAbEDq, j, vjyOWU0PH = 0, NwNJF3VcMKW8, jsazLH [100];
    scanf ("%d", &LPM29QyvCJ);
    NwNJF3VcMKW8 = 0;
    scanf ("%s", I8Wp7YLPNXfw);
    n = strlen (I8Wp7YLPNXfw);
    {
        vjyOWU0PH = 0;
        while (n > vjyOWU0PH) {
            if ('a' <= I8Wp7YLPNXfw[vjyOWU0PH] && I8Wp7YLPNXfw[vjyOWU0PH] <= 'z') {
                I8Wp7YLPNXfw[vjyOWU0PH] = I8Wp7YLPNXfw[vjyOWU0PH] - (922 - 890);
            }
            vjyOWU0PH = vjyOWU0PH + 1;
        }
    }
    {
        vjyOWU0PH = 0;
        while (vjyOWU0PH < n) {
            iZSwLHAbEDq = 1;
            if ('0' <= I8Wp7YLPNXfw[vjyOWU0PH] && I8Wp7YLPNXfw[vjyOWU0PH] <= '9') {
                {
                    j = 1;
                    while (n - vjyOWU0PH > j) {
                        j++;
                        iZSwLHAbEDq = iZSwLHAbEDq * LPM29QyvCJ;
                    }
                }
                azOphD5 = azOphD5 + (I8Wp7YLPNXfw[vjyOWU0PH] - '0') * iZSwLHAbEDq;
            }
            else if ('A' <= I8Wp7YLPNXfw[vjyOWU0PH] && I8Wp7YLPNXfw[vjyOWU0PH] <= 'Z') {
                {
                    j = 1;
                    while (j < n - vjyOWU0PH) {
                        j++;
                        iZSwLHAbEDq = iZSwLHAbEDq * LPM29QyvCJ;
                    }
                }
                azOphD5 = azOphD5 + (I8Wp7YLPNXfw[vjyOWU0PH] - 'A' + 10) * iZSwLHAbEDq;
            }
            vjyOWU0PH = vjyOWU0PH + 1;
        }
    }
    scanf ("%d", &Cyv1ZL);
    if (azOphD5 != 0) {
        while (azOphD5 != 0) {
            jsazLH[NwNJF3VcMKW8] = azOphD5 % Cyv1ZL;
            azOphD5 = (azOphD5 - jsazLH[NwNJF3VcMKW8]) / Cyv1ZL;
            NwNJF3VcMKW8 = NwNJF3VcMKW8 +1;
        }
        for (vjyOWU0PH = 0; NwNJF3VcMKW8 > vjyOWU0PH; vjyOWU0PH++) {
            if (jsazLH[vjyOWU0PH] >= 0 && jsazLH[vjyOWU0PH] <= 9) {
                PSAtPFIE[NwNJF3VcMKW8 -vjyOWU0PH - 1] = jsazLH[vjyOWU0PH] + '0';
            }
            else {
                PSAtPFIE[NwNJF3VcMKW8 -vjyOWU0PH - 1] = jsazLH[vjyOWU0PH] - 10 + 'A';
            }
        }
        {
            vjyOWU0PH = 0;
            while (vjyOWU0PH < NwNJF3VcMKW8) {
                printf ("%c", PSAtPFIE[vjyOWU0PH]);
                vjyOWU0PH++;
            }
        }
    }
    else if (azOphD5 == 0) {
        printf ("%d\n", azOphD5);
    }
    return 0;
}

