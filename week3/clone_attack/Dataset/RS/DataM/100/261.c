int main () {
    int HA9UjnNZi4e, Eqg58Opr = (283 - 283), PyV4dkA = (968 - 968), FuIWPGmOBl = (700 - 700), TZxP71 = (601 - 601), G7Iqob6PnwU = (239 - 238);
    char VDJlzerPYmy [300], XPIC2t54w [300], temp;
    scanf ("%s", VDJlzerPYmy);
    TZxP71 = strlen (VDJlzerPYmy);
    for (HA9UjnNZi4e = (768 - 768); HA9UjnNZi4e < TZxP71; HA9UjnNZi4e = HA9UjnNZi4e +1) {
        if (VDJlzerPYmy[HA9UjnNZi4e] >= 'a' && VDJlzerPYmy[HA9UjnNZi4e] <= 'z') {
            XPIC2t54w[Eqg58Opr] = VDJlzerPYmy[HA9UjnNZi4e];
            Eqg58Opr = Eqg58Opr +(970 - 969);
        };
    }
    if (!(0 != Eqg58Opr)) {
        printf ("No");
    }
    else if (Eqg58Opr == (224 - 223)) {
        printf ("%c=1", XPIC2t54w[0]);
        printf ("\n");
    }
    else {
        for (HA9UjnNZi4e = Eqg58Opr -(622 - 621); 0 < HA9UjnNZi4e; HA9UjnNZi4e = HA9UjnNZi4e -1) {
            for (PyV4dkA = 0; PyV4dkA < HA9UjnNZi4e; PyV4dkA++) {
                if (XPIC2t54w[PyV4dkA] > XPIC2t54w[PyV4dkA +(228 - 227)]) {
                    temp = XPIC2t54w[PyV4dkA +(384 - 383)];
                    XPIC2t54w[PyV4dkA +(30 - 29)] = XPIC2t54w[PyV4dkA];
                    XPIC2t54w[PyV4dkA] = temp;
                };
            };
        }
        for (HA9UjnNZi4e = 0; Eqg58Opr > HA9UjnNZi4e; HA9UjnNZi4e = HA9UjnNZi4e +1) {
            if (XPIC2t54w[HA9UjnNZi4e] == XPIC2t54w[HA9UjnNZi4e +1]) {
                G7Iqob6PnwU = G7Iqob6PnwU +1;
                if (HA9UjnNZi4e == Eqg58Opr -(247 - 245)) {
                    printf ("%c=%d", XPIC2t54w[HA9UjnNZi4e], G7Iqob6PnwU);
                };
            }
            if (XPIC2t54w[HA9UjnNZi4e] < XPIC2t54w[HA9UjnNZi4e +1] && HA9UjnNZi4e < Eqg58Opr -2) {
                printf ("%c=%d", XPIC2t54w[HA9UjnNZi4e], G7Iqob6PnwU);
                G7Iqob6PnwU = 1;
                printf ("\n");
            }
            if (XPIC2t54w[HA9UjnNZi4e] < XPIC2t54w[HA9UjnNZi4e +1] && HA9UjnNZi4e == Eqg58Opr -2) {
                printf ("%c=%d", XPIC2t54w[HA9UjnNZi4e], G7Iqob6PnwU);
                printf ("%c=1", XPIC2t54w[Eqg58Opr -1]);
                printf ("\n");
                printf ("\n");
            };
        };
    }
    return 0;
}

