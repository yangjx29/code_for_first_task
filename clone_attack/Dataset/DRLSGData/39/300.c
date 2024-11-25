int main () {
    struct   student {
        char sjMHN7LwVs [(492 - 472)];
        int bXfJ2c1gFT;
        int czRiy5pEMH;
        char u8i2bTaAQN;
        char QsKdPUlMGt;
        int l758cReEXrn9;
    }
    QNIU3EaXp [100];
    int K9gIuzJ;
    int zU8HSI;
    int NMbSx3W;
    int MwCpr3kt [100] = {0};
    int fEd1nkSL;
    NMbSx3W = 0;
    scanf ("%d", &fEd1nkSL);
    for (K9gIuzJ = 0; fEd1nkSL > K9gIuzJ; K9gIuzJ++)
        scanf ("%s %d%d %c %c %d", QNIU3EaXp[K9gIuzJ].sjMHN7LwVs, &QNIU3EaXp[K9gIuzJ].bXfJ2c1gFT, &QNIU3EaXp[K9gIuzJ].czRiy5pEMH, &QNIU3EaXp[K9gIuzJ].u8i2bTaAQN, &QNIU3EaXp[K9gIuzJ].QsKdPUlMGt, &QNIU3EaXp[K9gIuzJ].l758cReEXrn9);
    for (K9gIuzJ = 0; K9gIuzJ < fEd1nkSL; K9gIuzJ++) {
        if (QNIU3EaXp[K9gIuzJ].bXfJ2c1gFT > (820 - 740) && QNIU3EaXp[K9gIuzJ].l758cReEXrn9 >= (603 - 602))
            MwCpr3kt[K9gIuzJ] = MwCpr3kt[K9gIuzJ] + (8121 - 121);
        if ((941 - 856) < QNIU3EaXp[K9gIuzJ].bXfJ2c1gFT && 80 < QNIU3EaXp[K9gIuzJ].czRiy5pEMH)
            MwCpr3kt[K9gIuzJ] = MwCpr3kt[K9gIuzJ] + 4000;
        if (QNIU3EaXp[K9gIuzJ].bXfJ2c1gFT > (447 - 357))
            MwCpr3kt[K9gIuzJ] = MwCpr3kt[K9gIuzJ] + (2052 - 52);
        if (QNIU3EaXp[K9gIuzJ].bXfJ2c1gFT > 85 && QNIU3EaXp[K9gIuzJ].QsKdPUlMGt == 'Y')
            MwCpr3kt[K9gIuzJ] = MwCpr3kt[K9gIuzJ] + (1799 - 799);
        if (QNIU3EaXp[K9gIuzJ].czRiy5pEMH > 80 && QNIU3EaXp[K9gIuzJ].u8i2bTaAQN == 'Y')
            MwCpr3kt[K9gIuzJ] = MwCpr3kt[K9gIuzJ] + 850;
    }
    zU8HSI = MwCpr3kt[0];
    for (K9gIuzJ = 1; K9gIuzJ < fEd1nkSL; K9gIuzJ++) {
        if (MwCpr3kt[K9gIuzJ] > MwCpr3kt[NMbSx3W]) {
            NMbSx3W = K9gIuzJ;
        }
        zU8HSI = zU8HSI + MwCpr3kt[K9gIuzJ];
    }
    printf ("%s\n%d\n%d\n", QNIU3EaXp[NMbSx3W].sjMHN7LwVs, MwCpr3kt[NMbSx3W], zU8HSI);
    return 0;
}

