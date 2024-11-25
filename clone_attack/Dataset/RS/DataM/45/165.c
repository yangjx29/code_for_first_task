main () {
    int LvDzOfBJs;
    int j;
    int k;
    int l;
    int len;
    int L5PlF47LcyS;
    int kill;
    char a [(1049 - 998)];
    char VdGBH4upmQ [(409 - 358)];
    l = (48 - 47);
    LvDzOfBJs = (752 - 752);
    do {
        LvDzOfBJs = LvDzOfBJs +1;
        scanf ("%c", &a[LvDzOfBJs]);
    }
    while (a[LvDzOfBJs] != ' ');
    len = LvDzOfBJs;
    LvDzOfBJs = (423 - 423);
    do {
        LvDzOfBJs++;
        scanf ("%c", &VdGBH4upmQ[LvDzOfBJs]);
    }
    while (VdGBH4upmQ[LvDzOfBJs] != '\n');
    L5PlF47LcyS = LvDzOfBJs;
bomarc_loop :
    for (LvDzOfBJs = l; L5PlF47LcyS >= LvDzOfBJs; LvDzOfBJs++) {
        l = LvDzOfBJs;
        kill = (965 - 965);
        for (j = (674 - 673); j <= len; j = j + 1, l++) {
            if (a[j] == VdGBH4upmQ[l])
                kill = kill + 1;
        }
        if (kill == len - (653 - 652)) {
            printf ("%d", LvDzOfBJs -1);
            break;
        };
    }
    return (74 - 74);
}

