int main (int argc, char *argv []) {
    int x9qskALjT7pP, x2, Lv8uFZjQH, Z6aTvh;
    int ulrJhe;
    int m;
    int Ei0j5K1 [100] [100];
    int aVjXri7;
    int viyH1zQ7uL;
    int yTDkCEWunqBc;
    scanf ("%d", &ulrJhe);
    for (aVjXri7 = (314 - 314); aVjXri7 < ulrJhe; aVjXri7 = aVjXri7 + 1) {
        for (viyH1zQ7uL = (678 - 678); viyH1zQ7uL < ulrJhe; viyH1zQ7uL = viyH1zQ7uL + 1) {
            scanf ("%d", &Ei0j5K1[aVjXri7][viyH1zQ7uL]);
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
            };
        };
    }
    for (aVjXri7 = 0; aVjXri7 < ulrJhe; aVjXri7 = aVjXri7 + 1) {
        for (viyH1zQ7uL = 0; viyH1zQ7uL < ulrJhe; viyH1zQ7uL = viyH1zQ7uL + 1) {
            if (Ei0j5K1[aVjXri7][viyH1zQ7uL] == 0 & Ei0j5K1[aVjXri7 + 1][viyH1zQ7uL] == 0 & Ei0j5K1[aVjXri7][viyH1zQ7uL + 1] == 0) {
                Lv8uFZjQH = viyH1zQ7uL;
                x9qskALjT7pP = aVjXri7;
            }
            if (Ei0j5K1[aVjXri7][viyH1zQ7uL] == 0 & Ei0j5K1[aVjXri7 - 1][viyH1zQ7uL] == 0 & Ei0j5K1[aVjXri7][viyH1zQ7uL - 1] == 0) {
                x2 = aVjXri7;
                Z6aTvh = viyH1zQ7uL;
            };
        };
    }
    m = (x2 - x9qskALjT7pP - 1) * (Z6aTvh -Lv8uFZjQH-1);
    printf ("%d", m);
    return 0;
}

