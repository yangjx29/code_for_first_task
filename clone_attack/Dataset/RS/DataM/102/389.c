int main () {
    char wYdeIqAZ [(274 - 268)];
    double  h1 [(507 - 467)];
    double  h2 [40];
    double  z17pWIQi2b;
    double  ex;
    int rUZtVMRN, hcydtgTZX, Q59U6Z, ktlQp6Dz, PtySk6XQqO;
    Q59U6Z = (935 - 935);
    hcydtgTZX = (155 - 155);
    scanf ("%d", &rUZtVMRN);
    for (ktlQp6Dz = (690 - 690); ktlQp6Dz < rUZtVMRN; ktlQp6Dz++) {
        scanf ("\n%s %lf", wYdeIqAZ, &z17pWIQi2b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (wYdeIqAZ[(635 - 635)] == 'm') {
            h1[hcydtgTZX] = z17pWIQi2b;
            hcydtgTZX++;
        }
        if (wYdeIqAZ[0] == 'f') {
            h2[Q59U6Z] = z17pWIQi2b;
            Q59U6Z = Q59U6Z +1;
        };
    }
    for (ktlQp6Dz = 0; ktlQp6Dz < hcydtgTZX; ktlQp6Dz++) {
        for (PtySk6XQqO = 0; PtySk6XQqO < hcydtgTZX - (75 - 74); PtySk6XQqO++) {
            if (h1[PtySk6XQqO] > h1[PtySk6XQqO +(922 - 921)]) {
                ex = h1[PtySk6XQqO +(42 - 41)];
                h1[PtySk6XQqO +(289 - 288)] = h1[PtySk6XQqO];
                h1[PtySk6XQqO] = ex;
            };
        };
    }
    printf ("%.2lf", h1[0]);
    for (ktlQp6Dz = 0; ktlQp6Dz < Q59U6Z; ktlQp6Dz++) {
        PtySk6XQqO = 0;
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
        while (PtySk6XQqO < Q59U6Z -1) {
            if (h2[PtySk6XQqO] < h2[PtySk6XQqO +1]) {
                ex = h2[PtySk6XQqO +1];
                h2[PtySk6XQqO +1] = h2[PtySk6XQqO];
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
                h2[PtySk6XQqO] = ex;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            PtySk6XQqO++;
        };
    }
    for (ktlQp6Dz = 1; ktlQp6Dz < hcydtgTZX; ktlQp6Dz++) {
        printf (" %.2lf", h1[ktlQp6Dz]);
    }
    {
        ktlQp6Dz = 0;
        while (ktlQp6Dz < Q59U6Z) {
            printf (" %.2lf", h2[ktlQp6Dz]);
            ktlQp6Dz++;
        };
    }
    return 0;
}

