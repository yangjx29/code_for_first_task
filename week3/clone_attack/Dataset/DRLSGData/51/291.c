void  main () {
    char aSVpQdM3 [(1316 - 815)] = {'\0'};
    unsigned  long  int nOoyvnmAz, xKGplTyASiaz, x810P2ti, geJW9Zka, b [(633 - 133)] = {(811 - 811)}, a [(589 - 88)] = {(218 - 218)}, c = (356 - 356), max = (777 - 777), RvuxgKoI [500] = {(339 - 339)}, t = (509 - 509), g = (568 - 568), z = (96 - 96);
    scanf ("%d", &nOoyvnmAz);
    scanf ("%s", aSVpQdM3);
    geJW9Zka = strlen (aSVpQdM3);
    {
        x810P2ti = (200 - 200);
        while (geJW9Zka - nOoyvnmAz >= x810P2ti) {
            {
                xKGplTyASiaz = (737 - 737);
                for (; nOoyvnmAz > xKGplTyASiaz;) {
                    a[x810P2ti] = a[x810P2ti] * 100 + aSVpQdM3[xKGplTyASiaz + x810P2ti] - (718 - 686);
                    xKGplTyASiaz = xKGplTyASiaz + (122 - 121);
                }
            }
            x810P2ti = x810P2ti + (638 - 637);
        }
    }
    {
        x810P2ti = (161 - 161);
        while (x810P2ti < geJW9Zka - nOoyvnmAz + (306 - 305)) {
            {
                xKGplTyASiaz = (679 - 679);
                while (geJW9Zka - nOoyvnmAz + (70 - 69) > xKGplTyASiaz) {
                    if (!(a[xKGplTyASiaz] != a[x810P2ti])) {
                        b[x810P2ti]++;
                    }
                    xKGplTyASiaz++;
                }
            }
            x810P2ti = x810P2ti + (862 - 861);
        }
    }
    {
        x810P2ti = (761 - 761);
        while (x810P2ti < geJW9Zka - nOoyvnmAz + (537 - 536)) {
            if ((579 - 578) < b[x810P2ti])
                c = 1;
            x810P2ti++;
        }
    }
    if (!(0 != c))
        ;
    else {
        {
            g = 0;
            while (g < geJW9Zka - nOoyvnmAz + 1) {
                if (b[g] > max)
                    max = b[g];
                g++;
            }
        }
        z = 0;
        for (x810P2ti = 0; geJW9Zka - nOoyvnmAz + 1 > x810P2ti; x810P2ti++) {
            if (!(max != b[x810P2ti])) {
                z = 0;
                {
                    xKGplTyASiaz = 0;
                    while (t > xKGplTyASiaz && x810P2ti != RvuxgKoI[xKGplTyASiaz]) {
                        if (!(a[RvuxgKoI[xKGplTyASiaz]] != a[x810P2ti]))
                            z = 1;
                        xKGplTyASiaz++;
                    }
                }
                if (z == 0) {
                    RvuxgKoI[t] = x810P2ti;
                    t++;
                }
            }
        }
        printf ("%d\n", max);
        {
            xKGplTyASiaz = 0;
            while (xKGplTyASiaz < t) {
                x810P2ti = 0;
                while (x810P2ti < nOoyvnmAz) {
                    printf ("%c", aSVpQdM3[x810P2ti + RvuxgKoI[xKGplTyASiaz]]);
                    x810P2ti++;
                }
                xKGplTyASiaz++;
            }
        }
    }
}

