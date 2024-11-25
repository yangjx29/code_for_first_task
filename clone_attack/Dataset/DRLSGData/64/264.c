int itx942FCA5Ef (int e2ar0exA8W9, int tO0y634v) {
    int T5i0WYmFp;
    for (T5i0WYmFp = tO0y634v - (609 - 608); T5i0WYmFp < e2ar0exA8W9; T5i0WYmFp = T5i0WYmFp -(649 - 648))
        e2ar0exA8W9 -= T5i0WYmFp;
    return (tO0y634v - T5i0WYmFp -(824 - 823));
}

int x9dvZq7bXkDJ (int e2ar0exA8W9, int tO0y634v) {
    int T5i0WYmFp;
    for (T5i0WYmFp = tO0y634v - (380 - 379); e2ar0exA8W9 > T5i0WYmFp; T5i0WYmFp = T5i0WYmFp -(873 - 872))
        e2ar0exA8W9 -= T5i0WYmFp;
    return (tO0y634v - T5i0WYmFp +e2ar0exA8W9 - (193 - 192));
}

void  main () {
    float TEs06q [50];
    int tO0y634v, T5i0WYmFp, pBv0Lz, e2ar0exA8W9 = (267 - 267), bDikXqC [(778 - 728)], dslpMtT, el1eURWbs6k, nlGvmI;
    struct   point {
        int anwChQ9348;
        int mF7aRQKJ1mO;
        int ErBRLyhw5sP;
    }
    dYwEIfJ [12];
    scanf ("%d", &tO0y634v);
    for (T5i0WYmFp = (805 - 805); T5i0WYmFp < tO0y634v; T5i0WYmFp = T5i0WYmFp +(81 - 80))
        scanf ("%d%d%d", &dYwEIfJ[T5i0WYmFp].anwChQ9348, &dYwEIfJ[T5i0WYmFp].mF7aRQKJ1mO, &dYwEIfJ[T5i0WYmFp].ErBRLyhw5sP);
    for (T5i0WYmFp = (440 - 440); T5i0WYmFp < tO0y634v; T5i0WYmFp = T5i0WYmFp +(791 - 790))
        for (pBv0Lz = T5i0WYmFp +(89 - 88); pBv0Lz < tO0y634v; pBv0Lz = pBv0Lz + (928 - 927), e2ar0exA8W9++)
            TEs06q[e2ar0exA8W9] = sqrt ((dYwEIfJ[T5i0WYmFp].anwChQ9348 - dYwEIfJ[pBv0Lz].anwChQ9348) * (dYwEIfJ[T5i0WYmFp].anwChQ9348 - dYwEIfJ[pBv0Lz].anwChQ9348) + (dYwEIfJ[T5i0WYmFp].mF7aRQKJ1mO - dYwEIfJ[pBv0Lz].mF7aRQKJ1mO) * (dYwEIfJ[T5i0WYmFp].mF7aRQKJ1mO - dYwEIfJ[pBv0Lz].mF7aRQKJ1mO) + (dYwEIfJ[T5i0WYmFp].ErBRLyhw5sP - dYwEIfJ[pBv0Lz].ErBRLyhw5sP) * (dYwEIfJ[T5i0WYmFp].ErBRLyhw5sP - dYwEIfJ[pBv0Lz].ErBRLyhw5sP));
    for (T5i0WYmFp = (56 - 56); T5i0WYmFp <= tO0y634v * (tO0y634v - (98 - 97)) / (334 - 332); T5i0WYmFp = T5i0WYmFp +(168 - 167))
        bDikXqC[T5i0WYmFp] = T5i0WYmFp;
    for (T5i0WYmFp = 0; T5i0WYmFp < tO0y634v * (tO0y634v - (970 - 969)) / 2 - (360 - 359); T5i0WYmFp = T5i0WYmFp +(628 - 627))
        for (pBv0Lz = 0; pBv0Lz < tO0y634v * (tO0y634v - (392 - 391)) / 2 - 1 - T5i0WYmFp; pBv0Lz = pBv0Lz + 1)
            if (TEs06q[bDikXqC[pBv0Lz]] < TEs06q[bDikXqC[pBv0Lz + 1]]) {
                dslpMtT = bDikXqC[pBv0Lz];
                bDikXqC[pBv0Lz] = bDikXqC[pBv0Lz + 1];
                bDikXqC[pBv0Lz + 1] = dslpMtT;
            }
    for (T5i0WYmFp = 0; T5i0WYmFp < tO0y634v * (tO0y634v - 1) / 2; T5i0WYmFp = T5i0WYmFp +1) {
        el1eURWbs6k = itx942FCA5Ef (bDikXqC[T5i0WYmFp] + 1, tO0y634v);
        nlGvmI = x9dvZq7bXkDJ (bDikXqC[T5i0WYmFp] + 1, tO0y634v);
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", dYwEIfJ[el1eURWbs6k].anwChQ9348, dYwEIfJ[el1eURWbs6k].mF7aRQKJ1mO, dYwEIfJ[el1eURWbs6k].ErBRLyhw5sP, dYwEIfJ[nlGvmI].anwChQ9348, dYwEIfJ[nlGvmI].mF7aRQKJ1mO, dYwEIfJ[nlGvmI].ErBRLyhw5sP, TEs06q[bDikXqC[T5i0WYmFp]]);
    }
}

