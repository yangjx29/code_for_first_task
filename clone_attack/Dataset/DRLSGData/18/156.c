void  main () {
    int bKzHTWUY7IG, TyY1GF, rn0EiQe3t, VRKOB2Qwk, ih2LVT, m, IZ9si841E0, LmjGUutW [(1028 - 928)] [(751 - 651)], npMX7YyE;
    scanf ("%d", &bKzHTWUY7IG);
    npMX7YyE = bKzHTWUY7IG;
    for (rn0EiQe3t = (584 - 584); npMX7YyE > rn0EiQe3t; rn0EiQe3t = rn0EiQe3t + 1) {
        bKzHTWUY7IG = npMX7YyE;
        for (VRKOB2Qwk = (257 - 257); VRKOB2Qwk < bKzHTWUY7IG; VRKOB2Qwk = VRKOB2Qwk +1)
            for (ih2LVT = (602 - 602); bKzHTWUY7IG > ih2LVT; ih2LVT = ih2LVT + 1)
                scanf ("%d", &LmjGUutW[VRKOB2Qwk][ih2LVT]);
        TyY1GF = (990 - 990);
        for (IZ9si841E0 = (190 - 189); IZ9si841E0 < npMX7YyE; IZ9si841E0++) {
            for (VRKOB2Qwk = (119 - 119); bKzHTWUY7IG > VRKOB2Qwk; VRKOB2Qwk = VRKOB2Qwk +1) {
                m = LmjGUutW[VRKOB2Qwk][(782 - 782)];
                for (ih2LVT = (359 - 358); ih2LVT < bKzHTWUY7IG; ih2LVT = ih2LVT + 1) {
                    if (m > LmjGUutW[VRKOB2Qwk][ih2LVT])
                        m = LmjGUutW[VRKOB2Qwk][ih2LVT];
                }
                for (ih2LVT = (325 - 325); ih2LVT < bKzHTWUY7IG; ih2LVT = ih2LVT + 1)
                    LmjGUutW[VRKOB2Qwk][ih2LVT] = LmjGUutW[VRKOB2Qwk][ih2LVT] - m;
            }
            for (VRKOB2Qwk = (866 - 866); bKzHTWUY7IG > VRKOB2Qwk; VRKOB2Qwk = VRKOB2Qwk +1) {
                m = LmjGUutW[(737 - 737)][VRKOB2Qwk];
                for (ih2LVT = (589 - 588); ih2LVT < bKzHTWUY7IG; ih2LVT = ih2LVT + 1) {
                    if (LmjGUutW[ih2LVT][VRKOB2Qwk] < m)
                        m = LmjGUutW[ih2LVT][VRKOB2Qwk];
                }
                for (ih2LVT = (111 - 111); ih2LVT < bKzHTWUY7IG; ih2LVT = ih2LVT + 1)
                    LmjGUutW[ih2LVT][VRKOB2Qwk] = LmjGUutW[ih2LVT][VRKOB2Qwk] - m;
            }
            TyY1GF = TyY1GF +LmjGUutW[(137 - 136)][(703 - 702)];
            for (VRKOB2Qwk = (581 - 580); VRKOB2Qwk < bKzHTWUY7IG - (319 - 318); VRKOB2Qwk = VRKOB2Qwk +1) {
                LmjGUutW[(407 - 407)][VRKOB2Qwk] = LmjGUutW[(198 - 198)][VRKOB2Qwk +(634 - 633)];
                LmjGUutW[VRKOB2Qwk][(720 - 720)] = LmjGUutW[VRKOB2Qwk +(325 - 324)][0];
            }
            for (VRKOB2Qwk = (619 - 618); VRKOB2Qwk < bKzHTWUY7IG - (752 - 751); VRKOB2Qwk = VRKOB2Qwk +1)
                for (ih2LVT = (719 - 718); ih2LVT < bKzHTWUY7IG - (842 - 841); ih2LVT++)
                    LmjGUutW[VRKOB2Qwk][ih2LVT] = LmjGUutW[VRKOB2Qwk +(985 - 984)][ih2LVT + (326 - 325)];
            bKzHTWUY7IG = bKzHTWUY7IG - 1;
        }
        printf ("%d\n", TyY1GF);
    }
}

