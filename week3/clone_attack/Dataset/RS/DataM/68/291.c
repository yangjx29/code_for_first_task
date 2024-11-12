int main () {
    int C5zBWitNRCQG;
    int eesn46F;
    int bqo9deA;
    int O50vjnhyZGO;
    int w;
    int J1J5a8b2F;
    int vpnUfQt0m7Hh;
    int y;
    int DaPcj4x1R;
    int midqR6x9rcEJ;
    int t;
    C5zBWitNRCQG = (178 - 178);
    eesn46F = 3;
    bqo9deA = (383 - 381);
    O50vjnhyZGO = 0;
    w = 3;
    J1J5a8b2F = 3;
    vpnUfQt0m7Hh = 0;
    y = 0;
    DaPcj4x1R = 1;
    int NGTK13D6S5Ch [midqR6x9rcEJ];
    int jgSsZn [t];
    scanf ("%d", &midqR6x9rcEJ);
    t = (midqR6x9rcEJ - (882 - 876)) / 2;
    for (w = 3; w <= (midqR6x9rcEJ - 3); w = w + 1) {
        for (J1J5a8b2F = 2; J1J5a8b2F <= sqrt (w); J1J5a8b2F = J1J5a8b2F +1) {
            if (!(0 != w % J1J5a8b2F)) {
                break;
            };
        }
        if (J1J5a8b2F > sqrt (w)) {
            NGTK13D6S5Ch[O50vjnhyZGO] = w;
            O50vjnhyZGO = O50vjnhyZGO +1;
        };
    }
    {
        C5zBWitNRCQG = 0;
        while (C5zBWitNRCQG < t) {
            jgSsZn[C5zBWitNRCQG] = 6 + 2 * (C5zBWitNRCQG +1);
            C5zBWitNRCQG = C5zBWitNRCQG +1;
        };
    }
    for (vpnUfQt0m7Hh = 0; vpnUfQt0m7Hh < t; vpnUfQt0m7Hh = vpnUfQt0m7Hh + 1) {
        y = 0;
        {
            y = 0;
            while (1) {
                DaPcj4x1R = 1;
                for (DaPcj4x1R = 1;; DaPcj4x1R = DaPcj4x1R +1) {
                    if (jgSsZn[vpnUfQt0m7Hh] == NGTK13D6S5Ch[y] + NGTK13D6S5Ch[DaPcj4x1R]) {
                        printf ("%d=%d+%d\n", jgSsZn[vpnUfQt0m7Hh], NGTK13D6S5Ch[y], NGTK13D6S5Ch[DaPcj4x1R]);
                        break;
                    }
                    if (NGTK13D6S5Ch[DaPcj4x1R] > (3 + jgSsZn[vpnUfQt0m7Hh])) {
                        break;
                    };
                }
                if (jgSsZn[vpnUfQt0m7Hh] == NGTK13D6S5Ch[y] + NGTK13D6S5Ch[DaPcj4x1R]) {
                    break;
                }
                y = y + 1;
            };
        };
    }
    printf ("6=3+3\n");
    return 0;
}

