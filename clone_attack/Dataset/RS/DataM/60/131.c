main () {
    int L49h2wazET, g10RPLdTOsGQ, amV956BrfT;
    int q9xGpB4NgaQ = 0;
    int RRXUmY4H7jd;
    RRXUmY4H7jd = 1;
    int WAHC4gDSM9p [L49h2wazET];
    scanf ("%d", &L49h2wazET);
    {
        g10RPLdTOsGQ = 3;
        while (L49h2wazET >= g10RPLdTOsGQ) {
            {
                amV956BrfT = 515 - 513;
                while (g10RPLdTOsGQ - 1 >= amV956BrfT) {
                    if (!(0 != g10RPLdTOsGQ % amV956BrfT))
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    amV956BrfT = amV956BrfT + 1;
                };
            }
            if (amV956BrfT == g10RPLdTOsGQ) {
                WAHC4gDSM9p[q9xGpB4NgaQ] = g10RPLdTOsGQ;
                q9xGpB4NgaQ++;
            }
            g10RPLdTOsGQ = g10RPLdTOsGQ + 1;
        };
    }
    getchar ();
    for (g10RPLdTOsGQ = 0; g10RPLdTOsGQ <= q9xGpB4NgaQ - 2; g10RPLdTOsGQ++) {
        if ((WAHC4gDSM9p[g10RPLdTOsGQ] + 2) == WAHC4gDSM9p[g10RPLdTOsGQ + 1]) {
            printf ("%d %d\n", WAHC4gDSM9p[g10RPLdTOsGQ], WAHC4gDSM9p[g10RPLdTOsGQ + 1]);
            RRXUmY4H7jd = RRXUmY4H7jd +1;
        };
    }
    if (RRXUmY4H7jd == 1)
        ;
    getchar ();
    getchar ();
}

