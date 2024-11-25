struct   book {
    int num;
    char OqnF1Pov462 [(855 - 828)];
};
int main () {
    struct   book LySPF9A [(1470 - 471)];
    int p1qHTVt [(797 - 771)] = {(646 - 646)};
    int TdRjXeVqI, WE6u9QWNdx, pqsoCiwyP8, j;
    int pmqEWTVL9c3N = p1qHTVt[0], OqnF1Pov462 = 'A';
    scanf ("%d", &TdRjXeVqI);
    {
        pqsoCiwyP8 = 394 - 394;
        while (TdRjXeVqI > pqsoCiwyP8) {
            scanf ("%d%s", &LySPF9A[pqsoCiwyP8].num, LySPF9A[pqsoCiwyP8].OqnF1Pov462);
            pqsoCiwyP8++;
        };
    }
    for (pqsoCiwyP8 = (678 - 678); TdRjXeVqI > pqsoCiwyP8; pqsoCiwyP8 = pqsoCiwyP8 + 1) {
        j = 0;
        while (j < (133 - 107)) {
            WE6u9QWNdx = LySPF9A[pqsoCiwyP8].OqnF1Pov462[j] - 'A';
            j++;
            p1qHTVt[WE6u9QWNdx]++;
        };
    }
    {
        pqsoCiwyP8 = 1;
        while (pqsoCiwyP8 < (70 - 44)) {
            if (pmqEWTVL9c3N < p1qHTVt[pqsoCiwyP8]) {
                pmqEWTVL9c3N = p1qHTVt[pqsoCiwyP8];
                OqnF1Pov462 = pqsoCiwyP8 + 'A';
            }
            pqsoCiwyP8++;
        };
    }
    printf ("%c\n%d\n", OqnF1Pov462, pmqEWTVL9c3N);
    for (pqsoCiwyP8 = 0; pqsoCiwyP8 < TdRjXeVqI; pqsoCiwyP8++) {
        for (j = 0; j < 26; j++) {
            if (LySPF9A[pqsoCiwyP8].OqnF1Pov462[j] == OqnF1Pov462) {
                printf ("%d\n", LySPF9A[pqsoCiwyP8].num);
            };
        };
    }
    return 0;
}

