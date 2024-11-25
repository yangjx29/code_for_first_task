void  main () {
    char gdoV6E [1000] [10];
    char e1m6kQ [1000] [3];
    char max;
    char s [1000] [100];
    int dsmMEfHY;
    int OADXkcaEdgW;
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
    int k;
    int kE9InCdgi;
    int q;
    int rYMOwtprjhqz;
    int e;
    dsmMEfHY = 0;
    while (scanf ("%s %s", gdoV6E[dsmMEfHY], e1m6kQ[dsmMEfHY]) != EOF) {
        max = gdoV6E[dsmMEfHY][0];
        for (OADXkcaEdgW = 1; OADXkcaEdgW <= 10; OADXkcaEdgW = OADXkcaEdgW +1) {
            if (gdoV6E[dsmMEfHY][OADXkcaEdgW] > max)
                max = gdoV6E[dsmMEfHY][OADXkcaEdgW];
        }
        for (k = 0; k <= 10; k++) {
            if (gdoV6E[dsmMEfHY][k] == max) {
                for (kE9InCdgi = 0; kE9InCdgi <= k; kE9InCdgi = kE9InCdgi + 1) {
                    s[dsmMEfHY][kE9InCdgi] = gdoV6E[dsmMEfHY][kE9InCdgi];
                }
                for (q = 0; kE9InCdgi <= k + strlen (e1m6kQ[dsmMEfHY]); kE9InCdgi++, q++) {
                    s[dsmMEfHY][kE9InCdgi] = e1m6kQ[dsmMEfHY][q];
                }
                for (rYMOwtprjhqz = k + 1; kE9InCdgi <= strlen (e1m6kQ[dsmMEfHY]) + strlen (gdoV6E[dsmMEfHY]); kE9InCdgi++, rYMOwtprjhqz++) {
                    s[dsmMEfHY][kE9InCdgi] = gdoV6E[dsmMEfHY][rYMOwtprjhqz];
                }
                printf ("%s\n", s[dsmMEfHY]);
                break;
            };
        }
        dsmMEfHY++;
    };
}

