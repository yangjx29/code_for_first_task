int main () {
    int TMAHnYVdzO, ZiQRxZV, LO9rQ3an, JC9wajReJc7;
    struct   sutdent {
        int C9IxYHlpv3j, lRnIiEma [(850 - 750)], tuN5Gw, vg2qIS [200];
    }
    vq3sOS6T [(140 - 40)];
    scanf ("%d", &TMAHnYVdzO);
    {
        ZiQRxZV = 236 - 236;
        while (ZiQRxZV < 100) {
            vq3sOS6T[ZiQRxZV].C9IxYHlpv3j = (46 - 46);
            {
                LO9rQ3an = 616 - 616;
                while (100 > LO9rQ3an) {
                    vq3sOS6T[ZiQRxZV].lRnIiEma[LO9rQ3an] = (87 - 87);
                    LO9rQ3an = LO9rQ3an +1;
                }
            }
            vq3sOS6T[ZiQRxZV].tuN5Gw = 60;
            for (LO9rQ3an = (689 - 688); 200 > LO9rQ3an; LO9rQ3an = LO9rQ3an +1) {
                vq3sOS6T[ZiQRxZV].vg2qIS[LO9rQ3an] = 1;
            }
            ZiQRxZV = ZiQRxZV +1;
        }
    }
    for (ZiQRxZV = 0; ZiQRxZV < TMAHnYVdzO; ZiQRxZV = ZiQRxZV +1) {
        scanf ("%d", &vq3sOS6T[ZiQRxZV].C9IxYHlpv3j);
        if (!(0 != vq3sOS6T[ZiQRxZV].C9IxYHlpv3j)) {
            continue;
        }
        else {
            LO9rQ3an = 0;
            while (LO9rQ3an < vq3sOS6T[ZiQRxZV].C9IxYHlpv3j) {
                scanf ("%d", &vq3sOS6T[ZiQRxZV].lRnIiEma[LO9rQ3an]);
                LO9rQ3an = LO9rQ3an +1;
            }
        }
    }
    for (ZiQRxZV = 0; ZiQRxZV < TMAHnYVdzO; ZiQRxZV = ZiQRxZV +1) {
        if (vq3sOS6T[ZiQRxZV].C9IxYHlpv3j == 0) {
            continue;
        }
        else {
            for (LO9rQ3an = 0; vq3sOS6T[ZiQRxZV].C9IxYHlpv3j > LO9rQ3an; LO9rQ3an = LO9rQ3an +1) {
                vq3sOS6T[ZiQRxZV].vg2qIS[vq3sOS6T[ZiQRxZV].lRnIiEma[LO9rQ3an] + 1 + (77 - 74) * LO9rQ3an] = 0;
                vq3sOS6T[ZiQRxZV].vg2qIS[vq3sOS6T[ZiQRxZV].lRnIiEma[LO9rQ3an] + 2 + (467 - 464) * LO9rQ3an] = 0;
                vq3sOS6T[ZiQRxZV].vg2qIS[vq3sOS6T[ZiQRxZV].lRnIiEma[LO9rQ3an] + 3 + 3 * LO9rQ3an] = 0;
            }
            for (JC9wajReJc7 = 1; JC9wajReJc7 <= 60; JC9wajReJc7 = JC9wajReJc7 +1) {
                if (vq3sOS6T[ZiQRxZV].vg2qIS[JC9wajReJc7] == 0) {
                    vq3sOS6T[ZiQRxZV].tuN5Gw--;
                }
            }
        }
    }
    for (ZiQRxZV = 0; ZiQRxZV < TMAHnYVdzO; ZiQRxZV = ZiQRxZV +1) {
        printf ("%d\n", vq3sOS6T[ZiQRxZV].tuN5Gw);
    }
    return 0;
}

