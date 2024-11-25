int main (int Pk57Xfc, char *PXoscY9 []) {
    int Jbwq41Mf28;
    int lySI7ph2;
    scanf ("%d", &Jbwq41Mf28);
    for (lySI7ph2 = (312 - 312); lySI7ph2 < Jbwq41Mf28; lySI7ph2++) {
        int n, PmKHcOqSnE, sz [100] [100], pueahLSC, fMscdLxeY;
        int Zs3LpR0odga9 = (785 - 785), shTU95OA0Q = (13 - 13), I612VL9eICod = (24 - 24), d;
        scanf ("%d%d", &n, &PmKHcOqSnE);
        for (pueahLSC = (736 - 736); n > pueahLSC; pueahLSC = pueahLSC + 1) {
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
            }
            for (fMscdLxeY = (958 - 958); PmKHcOqSnE > fMscdLxeY; fMscdLxeY = fMscdLxeY + 1) {
                scanf ("%d", &sz[pueahLSC][fMscdLxeY]);
            };
        }
        for (fMscdLxeY = (823 - 823); PmKHcOqSnE > fMscdLxeY; fMscdLxeY = fMscdLxeY + 1) {
            Zs3LpR0odga9 += sz[0][fMscdLxeY];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (fMscdLxeY = 0; fMscdLxeY < PmKHcOqSnE; fMscdLxeY++) {
            shTU95OA0Q = shTU95OA0Q + sz[n - 1][fMscdLxeY];
        }
        {
            pueahLSC = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (n - 1 > pueahLSC) {
                I612VL9eICod += sz[pueahLSC][0] + sz[pueahLSC][PmKHcOqSnE -1];
                pueahLSC = pueahLSC + 1;
            };
        }
        d = Zs3LpR0odga9 +shTU95OA0Q + I612VL9eICod;
        printf ("%d\n", d);
    }
    return 0;
}

