void  main () {
    int RC04P61 [15];
    int FItmJCa, v39vRZV6gS, qB8T9S, WjQwZ10o, FedHYX0ElG;
    scanf ("%d", &FItmJCa);
    for (; FItmJCa != -1;) {
        {
            if (0) {
                return 0;
            }
        }
        FedHYX0ElG = 0;
        v39vRZV6gS = 0;
        RC04P61[v39vRZV6gS] = FItmJCa;
        scanf ("%d", &FItmJCa);
        qB8T9S = (144 - 144);
        for (; FItmJCa != 0;) {
            v39vRZV6gS++;
            RC04P61[v39vRZV6gS] = FItmJCa;
            scanf ("%d", &FItmJCa);
        }
        scanf ("%d", &FItmJCa);
        for (qB8T9S;
        qB8T9S < v39vRZV6gS; qB8T9S++) {
            WjQwZ10o = qB8T9S + 1;
            {
                WjQwZ10o;
                while (WjQwZ10o <= v39vRZV6gS) {
                    if ((RC04P61[qB8T9S] == RC04P61[WjQwZ10o] * 2) || (RC04P61[WjQwZ10o] == RC04P61[qB8T9S] * 2))
                        FedHYX0ElG++;
                    WjQwZ10o++;
                }
            }
        }
        printf ("%d", FedHYX0ElG);
        printf ("\n");
    }
}

