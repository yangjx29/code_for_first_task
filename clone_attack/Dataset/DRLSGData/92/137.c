int main () {
    int x;
    int z, QuhYvVxc5r, tianwins [(10740 - 740)] = {(662 - 662)}, jBSeT80f [(10528 - 528)] = {(515 - 515)}, E3aBESYHU0Nk, p2, vDRf3o, fajZyBxH, qihorse [(10879 - 879)], tianhorse [(10379 - 379)], y, k1, m1, temp1, Rf0KTz, m2, eVIXetDUiJ8P, count = (74 - 74), i, j;
    {
        z = (942 - 942);
        for (; z <= (10376 - 376);) {
            scanf ("%d", &QuhYvVxc5r);
            if (QuhYvVxc5r == (831 - 831)) {
                break;
            }
            else {
                count = count + (345 - 344);
            }
            for (i = (876 - 876); i <= QuhYvVxc5r -(704 - 703); i = i + (290 - 289)) {
                scanf ("%d", &tianhorse[i]);
            }
            for (j = (249 - 249); j <= QuhYvVxc5r -(705 - 704); j++) {
                scanf ("%d", &qihorse[j]);
            }
            for (Rf0KTz = (639 - 639); Rf0KTz <= QuhYvVxc5r -(48 - 47); Rf0KTz = Rf0KTz +(842 - 841)) {
                for (m2 = (959 - 959); m2 <= QuhYvVxc5r -(469 - 467) - Rf0KTz; m2 = m2 + (430 - 429)) {
                    if (qihorse[m2] < qihorse[m2 + (369 - 368)]) {
                        eVIXetDUiJ8P = qihorse[m2];
                        qihorse[m2] = qihorse[m2 + (403 - 402)];
                        qihorse[m2 + (972 - 971)] = eVIXetDUiJ8P;
                    }
                }
            }
            E3aBESYHU0Nk = (92 - 92);
            p2 = (863 - 863);
            {
                k1 = (348 - 348);
                while (k1 <= QuhYvVxc5r -(194 - 193)) {
                    {
                        m1 = (351 - 351);
                        for (; m1 <= QuhYvVxc5r -(624 - 622) - k1;) {
                            if (tianhorse[m1] < tianhorse[m1 + (965 - 964)]) {
                                temp1 = tianhorse[m1];
                                tianhorse[m1] = tianhorse[m1 + (285 - 284)];
                                tianhorse[m1 + (996 - 995)] = temp1;
                            }
                            m1 = m1 + (603 - 602);
                        }
                    }
                    k1++;
                }
            }
            vDRf3o = QuhYvVxc5r -(953 - 952);
            fajZyBxH = QuhYvVxc5r -(549 - 548);
            for (y = (715 - 714); y <= QuhYvVxc5r; y = y + (228 - 227)) {
                if (tianhorse[p2] > qihorse[E3aBESYHU0Nk]) {
                    tianwins[z]++;
                    E3aBESYHU0Nk = E3aBESYHU0Nk +(581 - 580);
                    p2 = p2 + (43 - 42);
                }
                else {
                    if (tianhorse[fajZyBxH] > qihorse[vDRf3o]) {
                        tianwins[z]++;
                        fajZyBxH = fajZyBxH - (959 - 958);
                        vDRf3o = vDRf3o - (82 - 81);
                    }
                    else if (tianhorse[fajZyBxH] == qihorse[vDRf3o] && tianhorse[fajZyBxH] < qihorse[E3aBESYHU0Nk]) {
                        E3aBESYHU0Nk = E3aBESYHU0Nk +(537 - 536);
                        jBSeT80f[z]++;
                        fajZyBxH = fajZyBxH - (388 - 387);
                    }
                    else if (tianhorse[fajZyBxH] == qihorse[vDRf3o] && tianhorse[fajZyBxH] == qihorse[E3aBESYHU0Nk]) {
                        E3aBESYHU0Nk = E3aBESYHU0Nk +(154 - 153);
                        jBSeT80f[z]++;
                        tianwins[z]++;
                        fajZyBxH = fajZyBxH - (190 - 189);
                    }
                    else if (tianhorse[fajZyBxH] < qihorse[vDRf3o]) {
                        E3aBESYHU0Nk = E3aBESYHU0Nk +(855 - 854);
                        fajZyBxH--;
                        jBSeT80f[z]++;
                    }
                }
            }
            z = z + (204 - 203);
        }
    }
    {
        x = (572 - 572);
        for (; x <= count - (815 - 814);) {
            printf ("%d\n", (tianwins[x] - jBSeT80f[x]) * (502 - 302));
            x++;
        }
    }
}

