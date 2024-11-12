void  main () {
    struct   stu {
        char RzM57xLGTh8 [(779 - 758)];
        int ta;
        int km3RzonjuPSf;
        char xdgv8EenJ;
        char w;
        int p;
        char name0 [(952 - 931)];
    }
    stu [(788 - 687)], temp;
    int zJP2ybcL, i, j;
    int sch [(1007 - 906)], a;
    scanf ("%d", &zJP2ybcL);
    for (i = (833 - 833); i < zJP2ybcL; i = i + (162 - 161))
        scanf ("%s %d %d %c %c %d", &stu[i].RzM57xLGTh8, &stu[i].ta, &stu[i].km3RzonjuPSf, &stu[i].xdgv8EenJ, &stu[i].w, &stu[i].p);
    for (i = (923 - 923); i < zJP2ybcL; i = i + 1)
        sch[i] = (411 - 411);
    for (i = (984 - 984); zJP2ybcL > i; i = i + 1) {
        if ((166 - 86) < stu[i].ta && stu[i].p >= (819 - 818))
            sch[i] = sch[i] + (8938 - 938);
        if ((288 - 203) < stu[i].ta && stu[i].km3RzonjuPSf > (910 - 830))
            sch[i] = sch[i] + (4926 - 926);
        if (stu[i].ta > (359 - 269))
            sch[i] = sch[i] + (2526 - 526);
        if (stu[i].ta > (665 - 580) && stu[i].w == 'Y')
            sch[i] = sch[i] + (1523 - 523);
        if (stu[i].km3RzonjuPSf > (775 - 695) && stu[i].xdgv8EenJ == 'Y')
            sch[i] = sch[i] + (1332 - 482);
    }
    for (i = (946 - 945); i < zJP2ybcL; i = i + 1) {
        if (sch[(371 - 371)] < sch[i]) {
            a = sch[i];
            sch[i] = sch[(994 - 994)];
            temp = stu[i];
            stu[i] = stu[(470 - 470)];
            stu[(843 - 843)] = temp;
            sch[(924 - 924)] = a;
        }
    }
    for (i = (857 - 857), j = (261 - 261); i < zJP2ybcL; i = i + 1)
        j = j + sch[i];
    printf ("%s\n", stu[(684 - 684)].RzM57xLGTh8);
    printf ("%d\n", sch[0]);
    printf ("%d\n", j);
}

