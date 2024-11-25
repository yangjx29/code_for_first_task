void  main () {
    struct   ts {
        int jiVFegqZlnCL;
        char PuvVTqPxns [30];
        struct   ts *XYXcIgrt;
    };
    struct   ts *p1, *pCN6W1w, *IfKiyqaFXL;
    int U1BWvTPVzqbS, CrTAb8XpBw, T7Pnyrvo, r6pldc9JK, xurKC5WwA, odV8n63iatxW, cSuG0X26m, nJR7ujGI2Xlx [100] = {0};
    char UwbA0fp9l;
    scanf ("%d", &xurKC5WwA);
    p1 = pCN6W1w = IfKiyqaFXL = (struct   ts *) malloc (sizeof (struct   ts));
    scanf ("%d %s", &p1->jiVFegqZlnCL, p1->PuvVTqPxns);
    {
        U1BWvTPVzqbS = 1;
        while (U1BWvTPVzqbS < xurKC5WwA) {
            U1BWvTPVzqbS++;
            p1 = (struct   ts *) malloc (sizeof (struct   ts));
            scanf ("%d %s", &p1->jiVFegqZlnCL, p1->PuvVTqPxns);
            pCN6W1w->XYXcIgrt = p1;
            pCN6W1w = p1;
        };
    }
    p1->XYXcIgrt = 0;
    for (U1BWvTPVzqbS = 'A'; 'Z' >= U1BWvTPVzqbS; U1BWvTPVzqbS = U1BWvTPVzqbS +1) {
        p1 = IfKiyqaFXL;
        for (T7Pnyrvo = 0; xurKC5WwA > T7Pnyrvo; T7Pnyrvo++) {
            for (CrTAb8XpBw = 0; p1->PuvVTqPxns[CrTAb8XpBw] != '\0'; CrTAb8XpBw = CrTAb8XpBw +1) {
                if (p1->PuvVTqPxns[CrTAb8XpBw] == U1BWvTPVzqbS)
                    nJR7ujGI2Xlx[U1BWvTPVzqbS]++;
            }
            p1 = p1->XYXcIgrt;
        };
    }
    odV8n63iatxW = 0;
    for (U1BWvTPVzqbS = 'A'; U1BWvTPVzqbS <= 'Z'; U1BWvTPVzqbS = U1BWvTPVzqbS +1) {
        odV8n63iatxW = odV8n63iatxW > nJR7ujGI2Xlx[U1BWvTPVzqbS] ? odV8n63iatxW : nJR7ujGI2Xlx[U1BWvTPVzqbS];
    }
    for (U1BWvTPVzqbS = 'A'; U1BWvTPVzqbS <= 'Z'; U1BWvTPVzqbS = U1BWvTPVzqbS +1) {
        if (nJR7ujGI2Xlx[U1BWvTPVzqbS] == odV8n63iatxW)
            UwbA0fp9l = U1BWvTPVzqbS;
    }
    printf ("%c\n%d\n", UwbA0fp9l, odV8n63iatxW);
    p1 = IfKiyqaFXL;
    for (U1BWvTPVzqbS = 0; U1BWvTPVzqbS < xurKC5WwA; U1BWvTPVzqbS++) {
        for (CrTAb8XpBw = 0; p1->PuvVTqPxns[CrTAb8XpBw] != '\0'; CrTAb8XpBw = CrTAb8XpBw +1) {
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
            if (p1->PuvVTqPxns[CrTAb8XpBw] == UwbA0fp9l) {
                printf ("%d\n", p1->jiVFegqZlnCL);
            };
        }
        p1 = p1->XYXcIgrt;
    };
}

