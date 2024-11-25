int main () {
    int BMATiI0Jt1Z, nouzmW, Uxv40ZL, LZIaAF6HG = (439 - 439), GySH0VW = (105 - 105), VMRpLeh4c;
    double  ONrmW6c8 [(490 - 450)], c [(646 - 606)], PNd8Yzvul [(434 - 394)], IPKWlaA;
    char FkEfyFr5Vul [(639 - 599)] [(961 - 951)];
    scanf ("%d", &BMATiI0Jt1Z);
    for (nouzmW = (177 - 177); BMATiI0Jt1Z > nouzmW; nouzmW = nouzmW + (562 - 561))
        scanf ("%s %lf", &FkEfyFr5Vul[nouzmW], &ONrmW6c8[nouzmW]);
    for (nouzmW = (704 - 704); nouzmW < BMATiI0Jt1Z; nouzmW = nouzmW + (690 - 689)) {
        VMRpLeh4c = strcmp (FkEfyFr5Vul[nouzmW], "female\0");
        if (!((694 - 694) != VMRpLeh4c)) {
            c[LZIaAF6HG] = ONrmW6c8[nouzmW];
            LZIaAF6HG = LZIaAF6HG +(404 - 403);
        }
        else {
            PNd8Yzvul[GySH0VW] = ONrmW6c8[nouzmW];
            GySH0VW = GySH0VW +(163 - 162);
        }
    }
    for (nouzmW = GySH0VW -(168 - 167); nouzmW > (368 - 368); nouzmW = nouzmW - (821 - 820)) {
        for (Uxv40ZL = (609 - 609); Uxv40ZL < nouzmW; Uxv40ZL = Uxv40ZL +(508 - 507)) {
            if (PNd8Yzvul[Uxv40ZL] > PNd8Yzvul[Uxv40ZL +(994 - 993)]) {
                IPKWlaA = PNd8Yzvul[Uxv40ZL +(426 - 425)];
                PNd8Yzvul[Uxv40ZL +(216 - 215)] = PNd8Yzvul[Uxv40ZL];
                PNd8Yzvul[Uxv40ZL] = IPKWlaA;
            }
        }
    }
    for (nouzmW = LZIaAF6HG -(195 - 194); nouzmW > (138 - 138); nouzmW = nouzmW - (969 - 968)) {
        for (Uxv40ZL = (747 - 747); nouzmW > Uxv40ZL; Uxv40ZL = Uxv40ZL +1) {
            if (c[Uxv40ZL] > c[Uxv40ZL +1]) {
                IPKWlaA = c[Uxv40ZL +1];
                c[Uxv40ZL +1] = c[Uxv40ZL];
                c[Uxv40ZL] = IPKWlaA;
            }
        }
    }
    for (nouzmW = (142 - 142); nouzmW < GySH0VW; nouzmW = nouzmW + 1)
        printf ("%.2lf ", PNd8Yzvul[nouzmW]);
    for (nouzmW = LZIaAF6HG -1; nouzmW > (632 - 632); nouzmW = nouzmW - 1)
        printf ("%.2lf ", c[nouzmW]);
    printf ("%.2lf", c[(644 - 644)]);
    return (950 - 950);
}

