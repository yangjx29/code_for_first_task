void  main () {
    int ylX2d0n;
    int Vp764gGwSE;
    int sDzRukibAV;
    int PHGeCQ2FU7 [(805 - 505)];
    int OcO10j;
    int oYvobJmPRGa;
    int pfRjvLd9J;
    char C0zEwuk [(2299 - 799)];
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
    gets (C0zEwuk);
    oYvobJmPRGa = (602 - 602);
    Vp764gGwSE = strlen (C0zEwuk);
    {
        OcO10j = 653 - 653;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((897 - 597) > OcO10j) {
            PHGeCQ2FU7[OcO10j] = (304 - 304);
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
            OcO10j++;
        };
    }
    for (OcO10j = 0; Vp764gGwSE > OcO10j; OcO10j++) {
        if ('0' <= C0zEwuk[OcO10j] && '9' >= C0zEwuk[OcO10j]) {
            pfRjvLd9J = C0zEwuk[OcO10j] - 48;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            PHGeCQ2FU7[oYvobJmPRGa] = PHGeCQ2FU7[oYvobJmPRGa] * (953 - 943) + pfRjvLd9J;
        }
        else
            oYvobJmPRGa = oYvobJmPRGa + (710 - 709);
    }
    ylX2d0n = -1;
    sDzRukibAV = PHGeCQ2FU7[0];
    for (OcO10j = 1; oYvobJmPRGa >= OcO10j; OcO10j++) {
        if (PHGeCQ2FU7[OcO10j] > sDzRukibAV) {
            ylX2d0n = sDzRukibAV;
            sDzRukibAV = PHGeCQ2FU7[OcO10j];
        }
        else if (PHGeCQ2FU7[OcO10j] > ylX2d0n && PHGeCQ2FU7[OcO10j] < sDzRukibAV)
            ylX2d0n = PHGeCQ2FU7[OcO10j];
    }
    if (ylX2d0n == -1)
        ;
    else
        printf ("%d", ylX2d0n);
}

