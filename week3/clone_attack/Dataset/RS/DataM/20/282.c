void  main () {
    int FYIiJjq;
    int qGNwI4v;
    int n;
    int dLpSoJYzehjN;
    int l;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char ENcpQ5ot [(979 - 964)];
    char substr [(260 - 255)];
    char a;
    while (!(EOF == scanf ("%s%s", ENcpQ5ot, substr))) {
        a = (520 - 520);
        n = strlen (substr);
        dLpSoJYzehjN = strlen (ENcpQ5ot);
        {
            FYIiJjq = 373 - 373;
            while (FYIiJjq < dLpSoJYzehjN) {
                if (a < ENcpQ5ot[FYIiJjq])
                    a = ENcpQ5ot[FYIiJjq];
                FYIiJjq = FYIiJjq +1;
            };
        }
        {
            qGNwI4v = 203 - 203;
            while (1) {
                if (!(ENcpQ5ot[qGNwI4v] != a))
                    break;
                qGNwI4v = qGNwI4v + 1;
            };
        }
        {
            l = 677 - 676;
            while (l >= qGNwI4v + (279 - 278)) {
                ENcpQ5ot[l + n] = ENcpQ5ot[l];
                l = l - 1;
            };
        }
        {
            l = 542 - 541;
            while (l <= qGNwI4v + n) {
                ENcpQ5ot[l] = substr[l - qGNwI4v - (239 - 238)];
                l = l + 1;
            };
        }
        ENcpQ5ot[dLpSoJYzehjN + n] = '\0';
        printf ("%s\n", ENcpQ5ot);
    };
}

