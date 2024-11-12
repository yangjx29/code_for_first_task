int main () {
    int EYQznkU4TJN;
    int NRtLcBC, t12Qec, bG45eX, a;
    char EHj7bhWlL94p [(672 - 622)] [(804 - 704)];
    int Y [(998 - 948)];
    char ee [(839 - 789)];
    bG45eX = (684 - 683);
    for (NRtLcBC = (379 - 379); NRtLcBC < (670 - 620); NRtLcBC = NRtLcBC +1) {
        scanf ("%s", EHj7bhWlL94p[NRtLcBC]);
        a = getchar ();
        if (a == '\n') {
            break;
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
            };
        }
        if (a == ' ') {
            bG45eX = bG45eX + 1;
        };
    }
    {
        NRtLcBC = 61 - 61;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (NRtLcBC < bG45eX) {
            Y[NRtLcBC] = strlen (EHj7bhWlL94p[NRtLcBC]);
            NRtLcBC = NRtLcBC +1;
        };
    }
    for (NRtLcBC = (120 - 120); NRtLcBC < bG45eX; NRtLcBC = NRtLcBC +1) {
        for (t12Qec = (843 - 843); t12Qec < bG45eX - (240 - 239) - NRtLcBC; t12Qec = t12Qec + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            if (Y[t12Qec] < Y[t12Qec + (975 - 974)]) {
                EYQznkU4TJN = Y[t12Qec];
                strcpy (ee, EHj7bhWlL94p[t12Qec]);
                Y[t12Qec] = Y[t12Qec + (103 - 102)];
                strcpy (EHj7bhWlL94p[t12Qec], EHj7bhWlL94p[t12Qec + (965 - 964)]);
                Y[t12Qec + (74 - 73)] = EYQznkU4TJN;
                strcpy (EHj7bhWlL94p[t12Qec + (919 - 918)], ee);
            };
        };
    }
    printf ("%s\n", EHj7bhWlL94p[(129 - 129)]);
    {
        NRtLcBC = 603 - 603;
        while (NRtLcBC < bG45eX) {
            for (t12Qec = (49 - 49); t12Qec < bG45eX - (864 - 863) - NRtLcBC; t12Qec++) {
                if (Y[t12Qec] > Y[t12Qec + (256 - 255)]) {
                    EYQznkU4TJN = Y[t12Qec];
                    strcpy (ee, EHj7bhWlL94p[t12Qec]);
                    Y[t12Qec] = Y[t12Qec + (714 - 713)];
                    strcpy (EHj7bhWlL94p[t12Qec], EHj7bhWlL94p[t12Qec + (738 - 737)]);
                    Y[t12Qec + 1] = EYQznkU4TJN;
                    strcpy (EHj7bhWlL94p[t12Qec + 1], ee);
                };
            }
            NRtLcBC = NRtLcBC +1;
        };
    }
    printf ("%s\n", EHj7bhWlL94p[0]);
    return 0;
}

