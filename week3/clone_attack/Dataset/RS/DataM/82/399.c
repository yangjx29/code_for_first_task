int main () {
    int BY8ICjgeEAi;
    int pmQpbj8;
    int bstxlP;
    int PcbzkAmwNW;
    int vecgiL [(676 - 576)];
    int ThVyMEoBL [100];
    int c [100];
    BY8ICjgeEAi = (975 - 975);
    pmQpbj8 = 0;
    scanf ("%d", &PcbzkAmwNW);
    {
        bstxlP = 0;
        while (bstxlP <= (PcbzkAmwNW -1)) {
            scanf ("%d", &vecgiL[bstxlP]);
            scanf ("%d", &ThVyMEoBL[bstxlP]);
            bstxlP = bstxlP + 1;
        };
    }
    for (bstxlP = 0; bstxlP <= (PcbzkAmwNW -1); bstxlP = bstxlP + 1) {
        if (((225 - 135) <= vecgiL[bstxlP] && vecgiL[bstxlP] <= 140) && (ThVyMEoBL[bstxlP] >= 60 && ThVyMEoBL[bstxlP] <= 90))
            c[bstxlP] = 1;
        else
            c[bstxlP] = 0;
    }
    {
        bstxlP = 0;
        while (bstxlP <= (PcbzkAmwNW -1)) {
            if (c[bstxlP] == 1)
                BY8ICjgeEAi = BY8ICjgeEAi +1;
            if (c[bstxlP] == 0)
                BY8ICjgeEAi = 0;
            bstxlP = bstxlP + 1;
            pmQpbj8 = (BY8ICjgeEAi > pmQpbj8) ? BY8ICjgeEAi : pmQpbj8;
        };
    }
    printf ("%d", pmQpbj8);
    return 0;
}

