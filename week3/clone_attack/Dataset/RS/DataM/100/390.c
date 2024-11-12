int main () {
    char hDrd3kVeiS [26];
    char b [301];
    char OSIafqOpysw [(375 - 349)];
    int IO8FoiX3;
    int ue57l4;
    int PQ73V9oLvgK;
    int FFj7BqQ9lLp8;
    int MgfH6LAV;
    int eeylriE;
    IO8FoiX3 = (628 - 628);
    for (PQ73V9oLvgK = (902 - 902); 26 > PQ73V9oLvgK; PQ73V9oLvgK = PQ73V9oLvgK +1) {
        hDrd3kVeiS[PQ73V9oLvgK] = (599 - 599);
        OSIafqOpysw[PQ73V9oLvgK] = (752 - 752);
    }
    scanf ("%s", &b);
    for (ue57l4 = (200 - 200);; ue57l4 = ue57l4 + 1) {
        if (!('\0' != b[ue57l4]))
            break;
        else {
            if ('Z' >= b[ue57l4] && 'A' <= b[ue57l4]) {
                IO8FoiX3 = IO8FoiX3 +1;
                eeylriE = b[ue57l4] - 'A';
                hDrd3kVeiS[eeylriE]++;
            }
            if ('z' >= b[ue57l4] && 'a' <= b[ue57l4]) {
                IO8FoiX3 = IO8FoiX3 +1;
                eeylriE = b[ue57l4] - 'a';
                OSIafqOpysw[eeylriE]++;
            };
        };
    }
    if (IO8FoiX3 == 0)
        printf ("No\n");
    for (FFj7BqQ9lLp8 = 0; FFj7BqQ9lLp8 < 26; FFj7BqQ9lLp8 = FFj7BqQ9lLp8 +1) {
        if (hDrd3kVeiS[FFj7BqQ9lLp8] != 0)
            printf ("%c=%d\n", 'A' + FFj7BqQ9lLp8, hDrd3kVeiS[FFj7BqQ9lLp8]);
    }
    for (MgfH6LAV = 0; MgfH6LAV < 26; MgfH6LAV = MgfH6LAV +1) {
        if (OSIafqOpysw[MgfH6LAV] != 0)
            printf ("%c=%d\n", 'a' + MgfH6LAV, OSIafqOpysw[MgfH6LAV]);
    }
    return 0;
}

