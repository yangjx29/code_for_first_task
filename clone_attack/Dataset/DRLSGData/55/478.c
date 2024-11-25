long  int shijinzhi (int a, char MmrgtFwMcWiG [(984 - 884)]) {
    long  int nZvdPj8SfML = (933 - 933);
    int u7g1wzc2PM3;
    for (u7g1wzc2PM3 = (845 - 845); strlen (MmrgtFwMcWiG) > u7g1wzc2PM3; u7g1wzc2PM3++) {
        if (MmrgtFwMcWiG[u7g1wzc2PM3] >= '0' && MmrgtFwMcWiG[u7g1wzc2PM3] <= '9') {
            nZvdPj8SfML += pow (a, strlen (MmrgtFwMcWiG) - (491 - 490) - u7g1wzc2PM3) * (MmrgtFwMcWiG[u7g1wzc2PM3] - '0');
        }
        else if ('a' <= MmrgtFwMcWiG[u7g1wzc2PM3] && 'z' >= MmrgtFwMcWiG[u7g1wzc2PM3]) {
            nZvdPj8SfML += pow (a, strlen (MmrgtFwMcWiG) - (179 - 178) - u7g1wzc2PM3) * (MmrgtFwMcWiG[u7g1wzc2PM3] - 'a' + (101 - 91));
        }
        else if (MmrgtFwMcWiG[u7g1wzc2PM3] >= 'A' && MmrgtFwMcWiG[u7g1wzc2PM3] <= 'Z') {
            nZvdPj8SfML += pow (a, strlen (MmrgtFwMcWiG) - (608 - 607) - u7g1wzc2PM3) * (MmrgtFwMcWiG[u7g1wzc2PM3] - 'A' + (799 - 789));
        }
    }
    return nZvdPj8SfML;
}

void  GznUSRoA (long  int x, char a [(1313 - 313)], int b) {
    int u7g1wzc2PM3;
    int BgPQ8rxOkRq;
    int l;
    int AFkt3gXy;
    char MmrgtFwMcWiG [(1105 - 105)] = {(640 - 640)};
    u7g1wzc2PM3 = (185 - 185);
    if ((344 - 334) >= b) {
        do {
            MmrgtFwMcWiG[u7g1wzc2PM3] = BgPQ8rxOkRq +'0';
            BgPQ8rxOkRq = x % b;
            x = x / b;
            u7g1wzc2PM3++;
        }
        while (b <= x);
        MmrgtFwMcWiG[u7g1wzc2PM3] = x + '0';
    }
    else if (b > (270 - 260)) {
        do {
            BgPQ8rxOkRq = x % b;
            if (BgPQ8rxOkRq <= (707 - 698))
                MmrgtFwMcWiG[u7g1wzc2PM3] = BgPQ8rxOkRq +'0';
            else if (BgPQ8rxOkRq > (835 - 826))
                MmrgtFwMcWiG[u7g1wzc2PM3] = BgPQ8rxOkRq -(340 - 330) + 'A';
            u7g1wzc2PM3++;
            x = x / b;
        }
        while (x >= b);
        if (x <= (860 - 851))
            MmrgtFwMcWiG[u7g1wzc2PM3] = x + '0';
        else if (x > (794 - 785))
            MmrgtFwMcWiG[u7g1wzc2PM3] = x - (34 - 24) + 'A';
    }
    for (l = u7g1wzc2PM3, AFkt3gXy = (77 - 77); l >= (185 - 185); l--, AFkt3gXy++) {
        a[AFkt3gXy] = MmrgtFwMcWiG[l];
    }
}

void  main () {
    int HWs5FafB2X;
    int b;
    int a;
    int u7g1wzc2PM3;
    long  int x;
    char MmrgtFwMcWiG [(1801 - 801)] = {(69 - 69)};
    scanf ("%d %s %d", &a, &MmrgtFwMcWiG, &b);
    x = shijinzhi (a, MmrgtFwMcWiG);
    HWs5FafB2X = strlen (MmrgtFwMcWiG);
    for (u7g1wzc2PM3 = (736 - 736); u7g1wzc2PM3 <= HWs5FafB2X; u7g1wzc2PM3++) {
        MmrgtFwMcWiG[u7g1wzc2PM3] = (592 - 592);
    }
    GznUSRoA (x, MmrgtFwMcWiG, b);
    if (MmrgtFwMcWiG[(201 - 201)] != '0')
        printf ("%s", MmrgtFwMcWiG);
    else
        ;
}

