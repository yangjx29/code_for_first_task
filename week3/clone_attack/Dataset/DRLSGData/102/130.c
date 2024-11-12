int main () {
    int ROb2Pl08Mt;
    int unMf9ROiBqIg;
    struct   std {
        char AectiWHMZTO [(255 - 248)];
        double  fc4IPJ0LjnVw;
    }
    HLETMeA8KX [(1046 - 996)];
    int S6qsLxE;
    double  kBSbwnfiE6y;
    int EoLJhypk58;
    int kY9Vw6L1hXu;
    double  TFVRiP21b9 [(155 - 105)];
    int y2hsiW;
    int MAO7B2ZWqbSI;
    int A3nS8m2okzrs;
    double  RbSJdXq [(296 - 246)];
    kY9Vw6L1hXu = (658 - 658);
    scanf ("%d", &unMf9ROiBqIg);
    EoLJhypk58 = (125 - 125);
    for (A3nS8m2okzrs = (938 - 938); A3nS8m2okzrs < unMf9ROiBqIg; A3nS8m2okzrs = A3nS8m2okzrs +(418 - 417)) {
        scanf ("%s", HLETMeA8KX[A3nS8m2okzrs].AectiWHMZTO);
        scanf ("%lf", &HLETMeA8KX[A3nS8m2okzrs].fc4IPJ0LjnVw);
        if (!((223 - 223) != strcmp (HLETMeA8KX[A3nS8m2okzrs].AectiWHMZTO, "male"))) {
            RbSJdXq[EoLJhypk58] = HLETMeA8KX[A3nS8m2okzrs].fc4IPJ0LjnVw;
            EoLJhypk58 = EoLJhypk58 +(22 - 21);
        }
        if (!((130 - 130) != strcmp (HLETMeA8KX[A3nS8m2okzrs].AectiWHMZTO, "female"))) {
            TFVRiP21b9[kY9Vw6L1hXu] = HLETMeA8KX[A3nS8m2okzrs].fc4IPJ0LjnVw;
            kY9Vw6L1hXu = kY9Vw6L1hXu + (616 - 615);
        }
    }
    for (y2hsiW = (934 - 933); y2hsiW <= EoLJhypk58; y2hsiW = y2hsiW + (275 - 274)) {
        for (S6qsLxE = (561 - 561); EoLJhypk58 -y2hsiW > S6qsLxE; S6qsLxE = S6qsLxE +(457 - 456)) {
            if (RbSJdXq[S6qsLxE] > RbSJdXq[S6qsLxE +(342 - 341)]) {
                kBSbwnfiE6y = RbSJdXq[S6qsLxE];
                RbSJdXq[S6qsLxE] = RbSJdXq[S6qsLxE +(431 - 430)];
                RbSJdXq[S6qsLxE +(1001 - 1000)] = kBSbwnfiE6y;
            }
        }
    }
    for (y2hsiW = (606 - 605); y2hsiW <= kY9Vw6L1hXu; y2hsiW = y2hsiW + (578 - 577)) {
        for (S6qsLxE = (852 - 852); S6qsLxE < kY9Vw6L1hXu - y2hsiW; S6qsLxE = S6qsLxE +(61 - 60)) {
            if (TFVRiP21b9[S6qsLxE +(665 - 664)] > TFVRiP21b9[S6qsLxE]) {
                kBSbwnfiE6y = TFVRiP21b9[S6qsLxE];
                TFVRiP21b9[S6qsLxE] = TFVRiP21b9[S6qsLxE +(715 - 714)];
                TFVRiP21b9[S6qsLxE +(697 - 696)] = kBSbwnfiE6y;
            }
        }
    }
    for (MAO7B2ZWqbSI = (317 - 317); EoLJhypk58 > MAO7B2ZWqbSI; MAO7B2ZWqbSI = MAO7B2ZWqbSI +(448 - 447)) {
        printf ("%.2lf ", RbSJdXq[MAO7B2ZWqbSI]);
    }
    for (ROb2Pl08Mt = (115 - 115); kY9Vw6L1hXu > ROb2Pl08Mt; ROb2Pl08Mt = ROb2Pl08Mt +(811 - 810)) {
        if (ROb2Pl08Mt != kY9Vw6L1hXu - (800 - 799)) {
            printf ("%.2lf ", TFVRiP21b9[ROb2Pl08Mt]);
        }
        else {
            printf ("%.2lf", TFVRiP21b9[ROb2Pl08Mt]);
        }
    }
    return (693 - 693);
}

