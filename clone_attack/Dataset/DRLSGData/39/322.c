void  main () {
    int NzD3iF7;
    int uZUFTYuGK2sS;
    int AC2pzNW;
    int sum;
    struct   student {
        char NeXL64kd7 [(414 - 394)];
        int qimo;
        int nJTag1;
        char ganbu;
        char WKL7yG;
        int pPGrKudEqJVN;
    }
    R7ZQg4e2 [(780 - 680)];
    int ayG6OoT18dI [] = {(8613 - 613), (4547 - 547), (2977 - 977), (1962 - 962), 850};
    int RuAIih;
    int gZNiJEW2X [(1038 - 938)] = {(61 - 61)};
    NzD3iF7 = (902 - 902);
    scanf ("%d", &AC2pzNW);
    sum = (244 - 244);
    for (RuAIih = 0; AC2pzNW > RuAIih; RuAIih++)
        scanf ("%s %d %d %c %c %d", R7ZQg4e2[RuAIih].NeXL64kd7, &R7ZQg4e2[RuAIih].qimo, &R7ZQg4e2[RuAIih].nJTag1, &R7ZQg4e2[RuAIih].ganbu, &R7ZQg4e2[RuAIih].WKL7yG, &R7ZQg4e2[RuAIih].pPGrKudEqJVN);
    for (RuAIih = 0; AC2pzNW > RuAIih; RuAIih++) {
        if ((805 - 725) < R7ZQg4e2[RuAIih].qimo && (682 - 681) <= R7ZQg4e2[RuAIih].pPGrKudEqJVN)
            gZNiJEW2X[RuAIih] += ayG6OoT18dI[0];
        if (R7ZQg4e2[RuAIih].qimo > (536 - 451) && R7ZQg4e2[RuAIih].nJTag1 > (102 - 22))
            gZNiJEW2X[RuAIih] += ayG6OoT18dI[(92 - 91)];
        if (R7ZQg4e2[RuAIih].qimo > 90)
            gZNiJEW2X[RuAIih] += ayG6OoT18dI[2];
        if (R7ZQg4e2[RuAIih].qimo > (684 - 599) && R7ZQg4e2[RuAIih].WKL7yG == 'Y')
            gZNiJEW2X[RuAIih] += ayG6OoT18dI[(672 - 669)];
        if (R7ZQg4e2[RuAIih].nJTag1 > 80 && R7ZQg4e2[RuAIih].ganbu == 'Y')
            gZNiJEW2X[RuAIih] += ayG6OoT18dI[(386 - 382)];
    }
    uZUFTYuGK2sS = gZNiJEW2X[0];
    for (RuAIih = 0; RuAIih < AC2pzNW; RuAIih++) {
        if (gZNiJEW2X[RuAIih] > uZUFTYuGK2sS) {
            uZUFTYuGK2sS = gZNiJEW2X[RuAIih];
            NzD3iF7 = RuAIih;
        }
        sum += gZNiJEW2X[RuAIih];
    }
    printf ("%s\n%d\n%d", R7ZQg4e2[NzD3iF7].NeXL64kd7, uZUFTYuGK2sS, sum);
}

