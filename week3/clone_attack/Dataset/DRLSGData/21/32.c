struct   shu {
    int QyEhW9UtjoG;
    double  QRc4UWeLgl8;
};
void  main () {
    struct   shu r0QHyIu [(858 - 557)], FVhntBJpc;
    int n, RuY5PXRb2, S0Tr4pNOP, Pys7PlB = (922 - 921);
    double  HOI4C1jcdVU, fJV2QNn = (881 - 881);
    scanf ("%d", &n);
    {
        RuY5PXRb2 = (180 - 180);
        for (; n > RuY5PXRb2;) {
            scanf ("%d", &r0QHyIu[RuY5PXRb2].QyEhW9UtjoG);
            RuY5PXRb2 = RuY5PXRb2 +(887 - 886);
        }
    }
    {
        RuY5PXRb2 = (11 - 11);
        for (; n > RuY5PXRb2;) {
            fJV2QNn = fJV2QNn + r0QHyIu[RuY5PXRb2].QyEhW9UtjoG;
            RuY5PXRb2 = RuY5PXRb2 +(692 - 691);
        }
    }
    HOI4C1jcdVU = fJV2QNn / n;
    for (RuY5PXRb2 = (564 - 564); n > RuY5PXRb2; RuY5PXRb2 = RuY5PXRb2 +1) {
        r0QHyIu[RuY5PXRb2].QRc4UWeLgl8 = fabs (r0QHyIu[RuY5PXRb2].QyEhW9UtjoG - HOI4C1jcdVU);
    }
    {
        RuY5PXRb2 = (765 - 765);
        for (; RuY5PXRb2 < n;) {
            {
                S0Tr4pNOP = (836 - 836);
                for (; S0Tr4pNOP < n - RuY5PXRb2;) {
                    if (r0QHyIu[S0Tr4pNOP +(802 - 801)].QRc4UWeLgl8 > r0QHyIu[S0Tr4pNOP].QRc4UWeLgl8) {
                        FVhntBJpc = r0QHyIu[S0Tr4pNOP];
                        r0QHyIu[S0Tr4pNOP] = r0QHyIu[S0Tr4pNOP +(309 - 308)];
                        r0QHyIu[S0Tr4pNOP +(781 - 780)] = FVhntBJpc;
                    }
                    S0Tr4pNOP = S0Tr4pNOP +1;
                }
            }
            RuY5PXRb2 = RuY5PXRb2 +1;
        }
    }
    {
        RuY5PXRb2 = (427 - 426);
        for (; RuY5PXRb2 < n;) {
            if (!(r0QHyIu[(694 - 694)].QRc4UWeLgl8 != r0QHyIu[RuY5PXRb2].QRc4UWeLgl8))
                Pys7PlB = Pys7PlB +1;
            else
                break;
            RuY5PXRb2 = RuY5PXRb2 +1;
        }
    }
    {
        RuY5PXRb2 = (151 - 151);
        for (; Pys7PlB > RuY5PXRb2;) {
            {
                S0Tr4pNOP = (448 - 448);
                for (; Pys7PlB -RuY5PXRb2-(136 - 135) > S0Tr4pNOP;) {
                    if (r0QHyIu[S0Tr4pNOP].QyEhW9UtjoG > r0QHyIu[S0Tr4pNOP +(670 - 669)].QyEhW9UtjoG) {
                        FVhntBJpc = r0QHyIu[S0Tr4pNOP];
                        r0QHyIu[S0Tr4pNOP] = r0QHyIu[S0Tr4pNOP +(966 - 965)];
                        r0QHyIu[S0Tr4pNOP +(663 - 662)] = FVhntBJpc;
                    }
                    S0Tr4pNOP++;
                }
            }
            RuY5PXRb2++;
        }
    }
    printf ("%d", r0QHyIu[(652 - 652)].QyEhW9UtjoG);
    if (Pys7PlB > (337 - 336)) {
        RuY5PXRb2 = (776 - 775);
        for (; RuY5PXRb2 < Pys7PlB;) {
            printf (",%d", r0QHyIu[RuY5PXRb2].QyEhW9UtjoG);
            RuY5PXRb2++;
        }
    }
}

