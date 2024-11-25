int d3QHeF [(389 - 378)] [(535 - 524)];

void  PYhtgG1DsbyQ (int yfs4cIYD) {
    d3QHeF[(626 - 621)][5] = yfs4cIYD;
}

void  oXRbHU9 () {
    int zRUdyKqxhN [11] [11];
    {
        int lfmDWs;
        lfmDWs = (107 - 106);
        while (lfmDWs <= (606 - 597)) {
            {
                int wmMPJl;
                wmMPJl = (38 - 37);
                while ((989 - 980) >= wmMPJl) {
                    zRUdyKqxhN[lfmDWs][wmMPJl] = 0;
                    wmMPJl++;
                }
            }
            lfmDWs++;
        }
    }
    {
        int lfmDWs;
        lfmDWs = (497 - 496);
        while (lfmDWs <= (523 - 514)) {
            {
                int wmMPJl;
                wmMPJl = (395 - 394);
                while (wmMPJl <= (436 - 427)) {
                    zRUdyKqxhN[lfmDWs][wmMPJl] += (463 - 461) * d3QHeF[lfmDWs][wmMPJl];
                    zRUdyKqxhN[lfmDWs - (503 - 502)][wmMPJl] += d3QHeF[lfmDWs][wmMPJl];
                    zRUdyKqxhN[lfmDWs + (126 - 125)][wmMPJl] += d3QHeF[lfmDWs][wmMPJl];
                    zRUdyKqxhN[lfmDWs][wmMPJl - (735 - 734)] = zRUdyKqxhN[lfmDWs][wmMPJl - (977 - 976)] + d3QHeF[lfmDWs][wmMPJl];
                    zRUdyKqxhN[lfmDWs][wmMPJl + (992 - 991)] = zRUdyKqxhN[lfmDWs][wmMPJl + (455 - 454)] + d3QHeF[lfmDWs][wmMPJl];
                    zRUdyKqxhN[lfmDWs - (502 - 501)][wmMPJl - (866 - 865)] = zRUdyKqxhN[lfmDWs - (829 - 828)][wmMPJl - 1] + d3QHeF[lfmDWs][wmMPJl];
                    zRUdyKqxhN[lfmDWs + 1][wmMPJl + 1] += d3QHeF[lfmDWs][wmMPJl];
                    zRUdyKqxhN[lfmDWs + 1][wmMPJl - 1] += d3QHeF[lfmDWs][wmMPJl];
                    zRUdyKqxhN[lfmDWs - 1][wmMPJl + 1] += d3QHeF[lfmDWs][wmMPJl];
                    wmMPJl++;
                }
            }
            lfmDWs++;
        }
    }
    {
        int lfmDWs;
        lfmDWs = 1;
        while (lfmDWs <= 9) {
            {
                int wmMPJl;
                wmMPJl = 1;
                while (wmMPJl <= 9) {
                    d3QHeF[lfmDWs][wmMPJl] = zRUdyKqxhN[lfmDWs][wmMPJl];
                    wmMPJl++;
                }
            }
            lfmDWs++;
        }
    }
}

int main () {
    int yfs4cIYD;
    int wsCtcMklupH;
    PYhtgG1DsbyQ (yfs4cIYD);
    scanf ("%d%d", &yfs4cIYD, &wsCtcMklupH);
    while (wsCtcMklupH--) {
        oXRbHU9 ();
    }
    {
        int lfmDWs;
        lfmDWs = 1;
        while (lfmDWs <= 9) {
            {
                int wmMPJl;
                wmMPJl = 1;
                while (wmMPJl < 9) {
                    printf ("%d ", d3QHeF[lfmDWs][wmMPJl]);
                    wmMPJl++;
                }
            }
            printf ("%d\n", d3QHeF[lfmDWs][9]);
            lfmDWs++;
        }
    }
    return 0;
}

