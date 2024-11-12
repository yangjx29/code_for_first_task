int main () {
    int rTZfoJ;
    int tPxZ0UytvTeg;
    int d [rTZfoJ];
    double  n8a25i4, v1GANX4YF, ygIrjv2N0y;
    double  kC4VxD7cYoSQ [rTZfoJ];
    double  Kwhealg5TAYL [rTZfoJ];
    double  txClEoSZIbL [rTZfoJ];
    ygIrjv2N0y = 0;
    n8a25i4 = 0;
    scanf ("%d", &rTZfoJ);
    for (tPxZ0UytvTeg = (240 - 239); rTZfoJ >= tPxZ0UytvTeg; tPxZ0UytvTeg = tPxZ0UytvTeg + 1) {
        scanf ("%lf", &txClEoSZIbL[tPxZ0UytvTeg]);
    }
    for (tPxZ0UytvTeg = 1; tPxZ0UytvTeg <= rTZfoJ; tPxZ0UytvTeg = tPxZ0UytvTeg + 1) {
        scanf ("%d", &d[tPxZ0UytvTeg]);
    }
    {
        tPxZ0UytvTeg = 1;
        while (tPxZ0UytvTeg <= rTZfoJ) {
            if (d[tPxZ0UytvTeg] <= 100 && d[tPxZ0UytvTeg] >= (106 - 16)) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = 4.0;
            }
            if (d[tPxZ0UytvTeg] <= 89 && d[tPxZ0UytvTeg] >= (508 - 423)) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = (474.7 - 471.0);
            }
            if (84 >= d[tPxZ0UytvTeg] && d[tPxZ0UytvTeg] >= 82) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = 3.3;
            }
            if (d[tPxZ0UytvTeg] <= (158 - 77) && d[tPxZ0UytvTeg] >= 78) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = 3.0;
            }
            if (d[tPxZ0UytvTeg] <= 77 && d[tPxZ0UytvTeg] >= 75) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = (31.7 - 29.0);
            }
            if (d[tPxZ0UytvTeg] <= 74 && d[tPxZ0UytvTeg] >= 72) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = (347.3 - 345.0);
            }
            if (d[tPxZ0UytvTeg] <= 71 && d[tPxZ0UytvTeg] >= 68) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = (521.0 - 519.0);
            }
            if (d[tPxZ0UytvTeg] <= (369 - 302) && d[tPxZ0UytvTeg] >= (358 - 294)) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = 1.5;
            }
            if (d[tPxZ0UytvTeg] <= 63 && d[tPxZ0UytvTeg] >= (965 - 905)) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = (712.0 - 711.0);
            }
            if (d[tPxZ0UytvTeg] < 60) {
                Kwhealg5TAYL[tPxZ0UytvTeg] = (311 - 311);
            }
            tPxZ0UytvTeg = tPxZ0UytvTeg + 1;
        };
    }
    {
        tPxZ0UytvTeg = 1;
        while (tPxZ0UytvTeg <= rTZfoJ) {
            kC4VxD7cYoSQ[tPxZ0UytvTeg] = txClEoSZIbL[tPxZ0UytvTeg] * Kwhealg5TAYL[tPxZ0UytvTeg];
            tPxZ0UytvTeg++;
        };
    }
    {
        tPxZ0UytvTeg = 1;
        while (tPxZ0UytvTeg <= rTZfoJ) {
            n8a25i4 = n8a25i4 + txClEoSZIbL[tPxZ0UytvTeg];
            tPxZ0UytvTeg++;
        };
    }
    {
        tPxZ0UytvTeg = 1;
        while (tPxZ0UytvTeg <= rTZfoJ) {
            ygIrjv2N0y = ygIrjv2N0y + kC4VxD7cYoSQ[tPxZ0UytvTeg];
            tPxZ0UytvTeg++;
        };
    }
    v1GANX4YF = ygIrjv2N0y / n8a25i4;
    printf ("%.2lf", v1GANX4YF);
    return 0;
}

