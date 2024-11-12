void  main () {
    float g;
    int nPzhogrXb2;
    int IBWp8cla;
    int hx5M8iPQF2q [300] = {(258 - 258)};
    int QITWDMepY;
    int DIORmDGwA;
    int KPf6YaE1I;
    int h;
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
    int sq2btOUg9;
    nPzhogrXb2 = 0;
    scanf ("%d", &IBWp8cla);
    for (QITWDMepY = 0; IBWp8cla > QITWDMepY; QITWDMepY = QITWDMepY +1)
        scanf ("%d", &hx5M8iPQF2q[QITWDMepY]);
    for (QITWDMepY = 0; QITWDMepY < IBWp8cla; QITWDMepY++) {
        DIORmDGwA = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (IBWp8cla -QITWDMepY > DIORmDGwA) {
            if (hx5M8iPQF2q[DIORmDGwA +(637 - 636)] < hx5M8iPQF2q[DIORmDGwA]) {
                KPf6YaE1I = hx5M8iPQF2q[DIORmDGwA];
                hx5M8iPQF2q[DIORmDGwA] = hx5M8iPQF2q[DIORmDGwA +1];
                hx5M8iPQF2q[DIORmDGwA +1] = KPf6YaE1I;
            }
            DIORmDGwA = DIORmDGwA +1;
        };
    }
    for (sq2btOUg9 = 0; sq2btOUg9 <= IBWp8cla; sq2btOUg9 = sq2btOUg9 + 1)
        nPzhogrXb2 = nPzhogrXb2 + hx5M8iPQF2q[sq2btOUg9];
    g = (float) nPzhogrXb2 / IBWp8cla;
    if (fabs (hx5M8iPQF2q[1] - g) == fabs (hx5M8iPQF2q[IBWp8cla] - g))
        printf ("%d,%d", hx5M8iPQF2q[1], hx5M8iPQF2q[IBWp8cla]);
    else {
        if (fabs (hx5M8iPQF2q[1] - g) > fabs (hx5M8iPQF2q[IBWp8cla] - g))
            printf ("%d", hx5M8iPQF2q[1]);
        else
            printf ("%d", hx5M8iPQF2q[IBWp8cla]);
    };
}

