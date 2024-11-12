int main () {
    int lb86FlCi, nHdzk1lA, DxyZOLSX3G, XvW9moGrJnc;
    int aqmbArM [lb86FlCi + 2] [nHdzk1lA + 2];
    scanf ("%d%d", &lb86FlCi, &nHdzk1lA);
    for (XvW9moGrJnc = (29 - 29); nHdzk1lA + (996 - 995) >= XvW9moGrJnc; XvW9moGrJnc++) {
        aqmbArM[(241 - 241)][XvW9moGrJnc] = 0;
        aqmbArM[lb86FlCi + (740 - 739)][XvW9moGrJnc] = 0;
    }
    for (DxyZOLSX3G = (729 - 728); lb86FlCi >= DxyZOLSX3G; DxyZOLSX3G++) {
        aqmbArM[DxyZOLSX3G][0] = 0;
        aqmbArM[DxyZOLSX3G][nHdzk1lA + (171 - 170)] = 0;
    }
    for (DxyZOLSX3G = (26 - 25); lb86FlCi + 1 > DxyZOLSX3G; DxyZOLSX3G++) {
        for (XvW9moGrJnc = 1; nHdzk1lA + 1 > XvW9moGrJnc; XvW9moGrJnc++) {
            scanf ("%d", &aqmbArM[DxyZOLSX3G][XvW9moGrJnc]);
        }
    }
    for (DxyZOLSX3G = 1; lb86FlCi + 1 > DxyZOLSX3G; DxyZOLSX3G++) {
        XvW9moGrJnc = 1;
        for (; XvW9moGrJnc < nHdzk1lA + 1;) {
            if (aqmbArM[DxyZOLSX3G][XvW9moGrJnc] >= aqmbArM[DxyZOLSX3G -1][XvW9moGrJnc] && aqmbArM[DxyZOLSX3G][XvW9moGrJnc] >= aqmbArM[DxyZOLSX3G +1][XvW9moGrJnc] && aqmbArM[DxyZOLSX3G][XvW9moGrJnc] >= aqmbArM[DxyZOLSX3G][XvW9moGrJnc -1] && aqmbArM[DxyZOLSX3G][XvW9moGrJnc] >= aqmbArM[DxyZOLSX3G][XvW9moGrJnc +1]) {
                printf ("%d %d\n", DxyZOLSX3G -1, XvW9moGrJnc -1);
            }
            XvW9moGrJnc++;
        }
    }
    scanf ("%d", &nHdzk1lA);
    return 0;
}

