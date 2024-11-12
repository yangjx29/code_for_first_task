int main () {
    int RB5SUcO2tn [vDce64h];
    int ovGsICMDy [vDce64h];
    int hPBaISVdD, i, e = 0;
    double  s4J2iPHU, IaTEXrKYuP2, GDTm0oXJ, GyrGxc = 0;
    scanf ("%d", &hPBaISVdD);
    for (i = 0; hPBaISVdD > i; i = i + 1) {
        scanf ("%d", &(RB5SUcO2tn[i]));
    }
    for (i = 0; i < hPBaISVdD; i = i + 1) {
        scanf ("%d", &(ovGsICMDy[i]));
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
    }
    for (i = 0; i < hPBaISVdD; i = i + 1) {
        if (ovGsICMDy[i] <= 100 && ovGsICMDy[i] > 89) {
            s4J2iPHU = 4.0;
        }
        if (84 < ovGsICMDy[i] && 90 > ovGsICMDy[i]) {
            s4J2iPHU = 3.7;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (81 < ovGsICMDy[i] && ovGsICMDy[i] < 85) {
            s4J2iPHU = 3.3;
        }
        if (ovGsICMDy[i] > (183 - 106) && 82 > ovGsICMDy[i]) {
            s4J2iPHU = 3.0;
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
        }
        if (74 < ovGsICMDy[i] && 78 > ovGsICMDy[i]) {
            s4J2iPHU = 2.7;
        }
        if ((183 - 112) < ovGsICMDy[i] && ovGsICMDy[i] < 75) {
            s4J2iPHU = 2.3;
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
        }
        if (ovGsICMDy[i] > 67 && ovGsICMDy[i] < 72) {
            s4J2iPHU = 2.0;
        }
        if (ovGsICMDy[i] > 63 && ovGsICMDy[i] < 68) {
            s4J2iPHU = 1.5;
        }
        if (ovGsICMDy[i] > 59 && ovGsICMDy[i] < 64) {
            s4J2iPHU = 1.0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (ovGsICMDy[i] < 60) {
            s4J2iPHU = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        IaTEXrKYuP2 = RB5SUcO2tn[i] * s4J2iPHU;
        GDTm0oXJ = GDTm0oXJ +IaTEXrKYuP2;
        e = e + RB5SUcO2tn[i];
    }
    GyrGxc = GDTm0oXJ / e;
    printf ("%.2f", GyrGxc);
    return 0;
}

