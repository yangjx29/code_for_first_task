void  main () {
    int AV4oJnLIiYu, MAzwO7nt0qC, ulnFM0xj4e = 0, j = 0, GbFysY0 [(1570 - 570)], s2 [(1291 - 291)], PTFEsAH9a, vVw4r25bxA, min, J10mC4X, Ahgj2RP [(1806 - 806)];
    char c;
    do {
        ulnFM0xj4e = ulnFM0xj4e + (752 - 751);
        scanf ("%d%c", &GbFysY0[ulnFM0xj4e], &c);
    }
    while (c == ',');
    AV4oJnLIiYu = ulnFM0xj4e;
    do {
        j = j + (164 - 163);
        scanf ("%d%c", &s2[j], &c);
    }
    while (c == ',');
    MAzwO7nt0qC = j;
    min = GbFysY0[ulnFM0xj4e];
    for (ulnFM0xj4e = (216 - 215); AV4oJnLIiYu >= ulnFM0xj4e; ulnFM0xj4e++) {
        if (min > GbFysY0[ulnFM0xj4e])
            min = GbFysY0[ulnFM0xj4e];
    }
    vVw4r25bxA = s2[ulnFM0xj4e];
    for (j = (731 - 730); j <= MAzwO7nt0qC; j = j + 1) {
        if (s2[j] > vVw4r25bxA)
            vVw4r25bxA = s2[j];
    }
    for (PTFEsAH9a = min; PTFEsAH9a <= vVw4r25bxA; PTFEsAH9a = PTFEsAH9a +1) {
        Ahgj2RP[PTFEsAH9a] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        {
            ulnFM0xj4e = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (ulnFM0xj4e <= AV4oJnLIiYu) {
                if (PTFEsAH9a >= GbFysY0[ulnFM0xj4e] && PTFEsAH9a < s2[ulnFM0xj4e])
                    Ahgj2RP[PTFEsAH9a] = Ahgj2RP[PTFEsAH9a] + 1;
                ulnFM0xj4e = ulnFM0xj4e + 1;
            };
        };
    }
    J10mC4X = Ahgj2RP[min];
    for (PTFEsAH9a = min; PTFEsAH9a <= vVw4r25bxA; PTFEsAH9a++) {
        if (Ahgj2RP[PTFEsAH9a] > J10mC4X)
            J10mC4X = Ahgj2RP[PTFEsAH9a];
    }
    printf ("%d %d", AV4oJnLIiYu, J10mC4X);
}

