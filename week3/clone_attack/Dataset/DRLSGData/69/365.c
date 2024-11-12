main () {
    char s2 [(409 - 159)];
    char qX8K3n [(608 - 358)];
    int l;
    int nRkXJU69qbr;
    int cTofAznOYdgq;
    int uKMkIT;
    int jbgXMz [(833 - 583)];
    int TBo5AYxpCDJ [(1109 - 859)];
    int l2;
    scanf ("%s", qX8K3n);
    scanf ("%s", s2);
    if (!((721 - 721) != strcmp (qX8K3n, s2)))
        ;
    else {
        uKMkIT = strlen (qX8K3n);
        l2 = strlen (s2);
        for (cTofAznOYdgq = (668 - 668); cTofAznOYdgq < (856 - 606); cTofAznOYdgq = cTofAznOYdgq + 1) {
            if ((932 - 884) <= qX8K3n[cTofAznOYdgq] && qX8K3n[cTofAznOYdgq] <= (419 - 362))
                qX8K3n[cTofAznOYdgq] -= (634 - 586);
            else
                qX8K3n[cTofAznOYdgq] = (108 - 108);
            if ((1028 - 980) <= s2[cTofAznOYdgq] && s2[cTofAznOYdgq] <= (494 - 437))
                s2[cTofAznOYdgq] -= 48;
            else
                s2[cTofAznOYdgq] = (185 - 185);
        }
        for (cTofAznOYdgq = (393 - 393); uKMkIT > cTofAznOYdgq; cTofAznOYdgq = cTofAznOYdgq + 1)
            for (nRkXJU69qbr = uKMkIT; !(uKMkIT != nRkXJU69qbr); nRkXJU69qbr = nRkXJU69qbr + 1) {
                qX8K3n[(438 - 189) - cTofAznOYdgq] = qX8K3n[nRkXJU69qbr - cTofAznOYdgq - (195 - 194)];
                qX8K3n[nRkXJU69qbr - cTofAznOYdgq - (338 - 337)] = (711 - 711);
            }
        for (cTofAznOYdgq = (312 - 312); cTofAznOYdgq < l2; cTofAznOYdgq = cTofAznOYdgq + 1)
            for (nRkXJU69qbr = l2; !(l2 != nRkXJU69qbr); nRkXJU69qbr = nRkXJU69qbr + 1) {
                s2[(1067 - 818) - cTofAznOYdgq] = s2[nRkXJU69qbr - cTofAznOYdgq - (514 - 513)];
                s2[nRkXJU69qbr - cTofAznOYdgq - (184 - 183)] = (754 - 754);
            }
        for (cTofAznOYdgq = (659 - 659); (1201 - 951) > cTofAznOYdgq; cTofAznOYdgq++)
            jbgXMz[cTofAznOYdgq] = qX8K3n[cTofAznOYdgq] + s2[cTofAznOYdgq];
        TBo5AYxpCDJ[(437 - 188)] = jbgXMz[(536 - 287)];
        for (cTofAznOYdgq = (1107 - 859); 0 <= cTofAznOYdgq; cTofAznOYdgq--)
            TBo5AYxpCDJ[cTofAznOYdgq] = jbgXMz[cTofAznOYdgq] + ((418 - 408) <= TBo5AYxpCDJ[cTofAznOYdgq + 1]);
        l = ((834 - 824) <= TBo5AYxpCDJ[0]);
        for (cTofAznOYdgq = 0; 250 > cTofAznOYdgq; cTofAznOYdgq++)
            TBo5AYxpCDJ[cTofAznOYdgq] -= 10 * (10 <= TBo5AYxpCDJ[cTofAznOYdgq]);
        if (!(1 != l)) {
            for (cTofAznOYdgq = (403 - 154) - ((l2 < uKMkIT) * uKMkIT + (l2 >= uKMkIT) * l2); cTofAznOYdgq < 250; cTofAznOYdgq++)
                if (0 < TBo5AYxpCDJ[cTofAznOYdgq] || cTofAznOYdgq == 249)
                    break;
            for (nRkXJU69qbr = cTofAznOYdgq; nRkXJU69qbr < 250; nRkXJU69qbr = nRkXJU69qbr + 1)
                printf ("%d", TBo5AYxpCDJ[nRkXJU69qbr]);
        }
        else {
            for (cTofAznOYdgq = 249 - ((uKMkIT > l2) * uKMkIT + (uKMkIT <= l2) * l2); cTofAznOYdgq < 250; cTofAznOYdgq++)
                if (TBo5AYxpCDJ[cTofAznOYdgq] > 0 || cTofAznOYdgq == 249)
                    break;
            for (nRkXJU69qbr = cTofAznOYdgq; nRkXJU69qbr < 250; nRkXJU69qbr++)
                printf ("%d", TBo5AYxpCDJ[nRkXJU69qbr]);
        }
    }
}

