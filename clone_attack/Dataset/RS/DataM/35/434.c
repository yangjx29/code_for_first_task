int main () {
    int Ud9PriusZ [(946 - 938)] [8];
    int xvIzJluo [8];
    int ctDyi0fA, DE6ZvGr5df, a, rrwlMce, SpZFelOiq7, zj2f4Gxl, w3t8cKUM, VF9Wp76, SnmRYN1 = (163 - 162), j = (271 - 270);
    scanf ("%d,%d", &ctDyi0fA, &DE6ZvGr5df);
    for (a = (83 - 82); ctDyi0fA >= a; a = a + 1) {
        rrwlMce = 993 - 992;
        while (DE6ZvGr5df >= rrwlMce) {
            scanf ("%d", &Ud9PriusZ[a][rrwlMce]);
            rrwlMce++;
        };
    }
    for (SpZFelOiq7 = (125 - 124); ctDyi0fA >= SpZFelOiq7; SpZFelOiq7 = SpZFelOiq7 +1) {
        xvIzJluo[SpZFelOiq7] = (685 - 684);
        for (zj2f4Gxl = 1; DE6ZvGr5df > zj2f4Gxl; zj2f4Gxl = zj2f4Gxl + 1) {
            if (Ud9PriusZ[SpZFelOiq7][xvIzJluo[SpZFelOiq7]] < Ud9PriusZ[SpZFelOiq7][zj2f4Gxl + 1]) {
                xvIzJluo[SpZFelOiq7] = zj2f4Gxl + 1;
            };
        };
    }
    for (w3t8cKUM = 1; w3t8cKUM <= ctDyi0fA; w3t8cKUM = w3t8cKUM + 1) {
        {
            VF9Wp76 = 1;
            while (VF9Wp76 <= ctDyi0fA) {
                if (Ud9PriusZ[w3t8cKUM][xvIzJluo[w3t8cKUM]] > Ud9PriusZ[VF9Wp76][xvIzJluo[w3t8cKUM]]) {
                    SnmRYN1 = 0;
                    break;
                }
                VF9Wp76 = VF9Wp76 +1;
            };
        }
        if (SnmRYN1) {
            j = 0;
            printf ("%d+%d", w3t8cKUM - 1, xvIzJluo[w3t8cKUM] - 1);
            break;
        };
    }
    if (j)
        ;
    return 0;
}

