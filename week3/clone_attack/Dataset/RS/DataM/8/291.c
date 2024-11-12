int ejoPHrpiGbVt [(1453 - 454)] = {(439 - 439)}, b [(1619 - 620)] = {(680 - 680)}, uTbrMR [(2212 - 213)] = {(80 - 80)};
int DPc3Tgr4K, d8EPSjr5XNA;

void  kqbwOcTgH () {
    int uUBsyg;
    scanf ("%d %d", &DPc3Tgr4K, &d8EPSjr5XNA);
    {
        uUBsyg = 1000 - 1000;
        while (DPc3Tgr4K > uUBsyg) {
            scanf ("%d", &ejoPHrpiGbVt[uUBsyg]);
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
            uUBsyg = uUBsyg + 1;
        };
    }
    {
        uUBsyg = 789 - 789;
        while (d8EPSjr5XNA > uUBsyg) {
            scanf ("%d", &b[uUBsyg]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            uUBsyg = uUBsyg + 1;
        };
    };
}

void  bQr0SLoht4j () {
    int uUBsyg;
    int j;
    int R1L5HdOfybG;
    for (uUBsyg = (882 - 882); DPc3Tgr4K -(906 - 905) > uUBsyg; uUBsyg = uUBsyg + 1) {
        for (j = (622 - 622); DPc3Tgr4K -uUBsyg - (922 - 921) > j; j = j + 1) {
            if (ejoPHrpiGbVt[j + (470 - 469)] < ejoPHrpiGbVt[j]) {
                R1L5HdOfybG = ejoPHrpiGbVt[j];
                ejoPHrpiGbVt[j] = ejoPHrpiGbVt[j + (588 - 587)];
                ejoPHrpiGbVt[j + (709 - 708)] = R1L5HdOfybG;
            };
        };
    }
    {
        uUBsyg = 622 - 622;
        while (d8EPSjr5XNA - (274 - 273) > uUBsyg) {
            {
                j = 0;
                while (d8EPSjr5XNA - uUBsyg - (435 - 434) > j) {
                    if (b[j] > b[j + (323 - 322)]) {
                        R1L5HdOfybG = b[j];
                        b[j] = b[j + (667 - 666)];
                        b[j + (461 - 460)] = R1L5HdOfybG;
                    }
                    j = j + 1;
                };
            }
            uUBsyg++;
        };
    };
}

void  IleU86EvAdG () {
    int uUBsyg;
    for (uUBsyg = 0; DPc3Tgr4K > uUBsyg; uUBsyg = uUBsyg + 1) {
        uTbrMR[uUBsyg] = ejoPHrpiGbVt[uUBsyg];
    }
    for (uUBsyg = DPc3Tgr4K; uUBsyg < DPc3Tgr4K +d8EPSjr5XNA; uUBsyg = uUBsyg + 1) {
        uTbrMR[uUBsyg] = b[uUBsyg - DPc3Tgr4K];
    };
}

void  pnfduRD () {
    int uUBsyg;
    printf ("%d", uTbrMR[0]);
    for (uUBsyg = 1; uUBsyg < DPc3Tgr4K +d8EPSjr5XNA; uUBsyg = uUBsyg + 1)
        printf (" %d", uTbrMR[uUBsyg]);
}

void  main () {
    kqbwOcTgH ();
    bQr0SLoht4j ();
    IleU86EvAdG ();
    pnfduRD ();
}

