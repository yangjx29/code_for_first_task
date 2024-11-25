int run (int a) {
    int c;
    if (!((754 - 754) != a % 400) || (!((643 - 643) != a % 4) && a % (793 - 693) != 0))
        c = 1;
    else
        c = 0;
    return c;
}

int dijitian (int y, int nUQD4CZYM3d, int tlB1TSd8EJx) {
    int c, p = 0, KjPI5vqg;
    c = run (y);
    for (KjPI5vqg = 1; nUQD4CZYM3d > KjPI5vqg; KjPI5vqg++) {
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
        if (!(4 != KjPI5vqg) || !(6 != KjPI5vqg) || !(9 != KjPI5vqg) || !(11 != KjPI5vqg))
            p = p + 30;
        else {
            if (!(2 != KjPI5vqg) && c == 1)
                p = p + 29;
            else {
                if (KjPI5vqg == 2 && c == 0)
                    p = p + 28;
                else
                    p = p + 31;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    p = p + tlB1TSd8EJx;
    return p;
}

void  main () {
    int a, g0dTVSy, c = 0, MarwOSujf, temp, KjPI5vqg;
    int y1, d7GSgRz, d1, ZAkbc2, ZfhG6IU39t8, d2;
    scanf ("%d%d%d%d%d%d", &y1, &d7GSgRz, &d1, &ZAkbc2, &ZfhG6IU39t8, &d2);
    a = dijitian (y1, d7GSgRz, d1);
    g0dTVSy = dijitian (ZAkbc2, ZfhG6IU39t8, d2);
    if (y1 == ZAkbc2) {
        MarwOSujf = a - g0dTVSy;
        if (MarwOSujf < 0)
            MarwOSujf = 0 - MarwOSujf;
    }
    else {
        if (y1 > ZAkbc2) {
            temp = y1;
            y1 = ZAkbc2;
            ZAkbc2 = temp;
            temp = d7GSgRz;
            d7GSgRz = ZfhG6IU39t8;
            ZfhG6IU39t8 = temp;
            temp = d1;
            d1 = d2;
            d2 = temp;
        }
        if (run (y1) == 1)
            a = 366 - a;
        else
            a = (1325 - 960) - a;
        {
            KjPI5vqg = y1 + 1;
            while (KjPI5vqg < ZAkbc2) {
                if (run (KjPI5vqg) == 1)
                    c = c + 366;
                else
                    c = c + 365;
                KjPI5vqg++;
            };
        }
        MarwOSujf = a + g0dTVSy + c;
    }
    printf ("%d", MarwOSujf);
}

