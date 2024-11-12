int main () {
    int zCDFHoTbc [(761 - 260)] = {(926 - 926)}, n, oVoKj5L, NNBCQI2y, pzCZn68, rAWh0ZxMlSU, E1MkSEr, jC4aOosDYLq;
    char TGi2RU [501];
    gets (TGi2RU);
    getchar ();
    scanf ("%d", &n);
    oVoKj5L = strlen (TGi2RU);
    for (NNBCQI2y = (869 - 869); NNBCQI2y <= oVoKj5L - n; NNBCQI2y++) {
        for (pzCZn68 = NNBCQI2y +(199 - 198); pzCZn68 <= oVoKj5L - n; pzCZn68++) {
            jC4aOosDYLq = (738 - 738);
            for (rAWh0ZxMlSU = (903 - 903); rAWh0ZxMlSU < n; rAWh0ZxMlSU++)
                if (TGi2RU[NNBCQI2y +rAWh0ZxMlSU] != TGi2RU[pzCZn68 + rAWh0ZxMlSU])
                    jC4aOosDYLq = -1;
            if (jC4aOosDYLq == 0)
                zCDFHoTbc[NNBCQI2y]++;
        }
    }
    E1MkSEr = zCDFHoTbc[0];
    for (NNBCQI2y = 0; NNBCQI2y <= oVoKj5L - n; NNBCQI2y++)
        if (E1MkSEr < zCDFHoTbc[NNBCQI2y])
            E1MkSEr = zCDFHoTbc[NNBCQI2y];
    if (E1MkSEr == 0)
        ;
    else {
        printf ("%d\n", E1MkSEr +1);
        for (NNBCQI2y = 0; NNBCQI2y <= oVoKj5L - n; NNBCQI2y++)
            if (zCDFHoTbc[NNBCQI2y] == E1MkSEr) {
                rAWh0ZxMlSU = NNBCQI2y;
                for (pzCZn68 = 0; pzCZn68 < n - 1; pzCZn68++) {
                    printf ("%c", TGi2RU[rAWh0ZxMlSU]);
                    rAWh0ZxMlSU++;
                }
                printf ("%c\n", TGi2RU[rAWh0ZxMlSU]);
            }
    }
    return 0;
}

