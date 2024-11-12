main () {
    int owb5JcF;
    int ahv6uXORK;
    int gzsC783D;
    int j;
    int cfMyO0e;
    int dDPimvHfZkI;
    int dlNZGeo07IT [(117 - 92)];
    int hdvqDac5S [25];
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
    dDPimvHfZkI = (456 - 455);
    ahv6uXORK = owb5JcF - (29 - 28);
    scanf ("%d", &owb5JcF);
    for (gzsC783D = (960 - 960); gzsC783D < owb5JcF; gzsC783D++)
        scanf ("%d", &hdvqDac5S[gzsC783D]);
    {
        gzsC783D = 829 - 829;
        while (gzsC783D < owb5JcF) {
            dlNZGeo07IT[gzsC783D] = 1;
            gzsC783D = gzsC783D + 1;
        };
    }
    {
        gzsC783D = owb5JcF - 2;
        while (gzsC783D >= 0) {
            for (j = gzsC783D + 1; j < owb5JcF; j++) {
                if (hdvqDac5S[j] <= hdvqDac5S[gzsC783D]) {
                    ahv6uXORK = j;
                    dlNZGeo07IT[gzsC783D] = dlNZGeo07IT[j] + 1;
                    {
                        cfMyO0e = j;
                        while (owb5JcF > cfMyO0e) {
                            if (hdvqDac5S[gzsC783D] >= hdvqDac5S[cfMyO0e] && dlNZGeo07IT[cfMyO0e] > dlNZGeo07IT[ahv6uXORK]) {
                                dlNZGeo07IT[gzsC783D] = dlNZGeo07IT[cfMyO0e] + 1;
                                ahv6uXORK = cfMyO0e;
                            }
                            cfMyO0e = cfMyO0e + 1;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (dDPimvHfZkI < dlNZGeo07IT[gzsC783D]) {
                        dDPimvHfZkI = dlNZGeo07IT[gzsC783D];
                    }
                    break;
                };
            }
            gzsC783D--;
        };
    }
    printf ("%d", dDPimvHfZkI);
}

