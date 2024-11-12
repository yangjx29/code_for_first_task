int main () {
    char teyPJ56h1u3 [(573 - 522)];
    char xcRUPsp [51];
    char TdLZvxyja;
    char LqPHhWS3R1;
    char qVOcnwFKx;
    char fzOC2Ep;
    char NWlwcDsPC;
    int q4Hz1aP [51] = {(761 - 761)};
    scanf ("%s %s", teyPJ56h1u3, xcRUPsp);
    qVOcnwFKx = strlen (teyPJ56h1u3);
    fzOC2Ep = strlen (xcRUPsp);
    for (TdLZvxyja = (825 - 825); TdLZvxyja <= fzOC2Ep - qVOcnwFKx; TdLZvxyja++) {
        for (LqPHhWS3R1 = TdLZvxyja; LqPHhWS3R1 < TdLZvxyja +qVOcnwFKx; LqPHhWS3R1++) {
            NWlwcDsPC = xcRUPsp[LqPHhWS3R1] - teyPJ56h1u3[LqPHhWS3R1 -TdLZvxyja];
            if (NWlwcDsPC < (387 - 387))
                NWlwcDsPC = (-(276 - 275)) * NWlwcDsPC;
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
            q4Hz1aP[TdLZvxyja] = q4Hz1aP[TdLZvxyja] + NWlwcDsPC;
        };
    }
    {
        TdLZvxyja = 0;
        while (TdLZvxyja <= fzOC2Ep - qVOcnwFKx) {
            if (q4Hz1aP[TdLZvxyja] == 0)
                break;
            TdLZvxyja++;
        };
    }
    printf ("%d", TdLZvxyja);
    return 0;
}

