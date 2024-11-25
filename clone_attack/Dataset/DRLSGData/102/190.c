int AxtDKLO (const  void  *JN7RDwOY, const  void  *nDan4ijSWUys) {
    return *(float*) nDan4ijSWUys < *(float*) JN7RDwOY ? (473 - 472) : -(103 - 102);
}

main () {
    int MduawK7e0IDP;
    int rOziRrILvFS;
    char zD3Kwycou [rOziRrILvFS] [(451 - 441)];
    float lz8H6LAmFBI [rOziRrILvFS];
    int HVkIO10;
    float *v6t9NoF4ICu;
    int Kc0geXj;
    int Wm1ROzNs;
    int P7X43q;
    float *RkejNPa7d;
    char zqtkB4RTPxw7 [(628 - 618)] = {'m', 'a', 'l', 'e', '\0'};
    char cXDIxFV [(981 - 971)] = {'f', 'e', 'm', 'a', 'l', 'e', '\0'};
    v6t9NoF4ICu = (float *) malloc (P7X43q * sizeof (float));
    scanf ("%d", &rOziRrILvFS);
    P7X43q = Kc0geXj = MduawK7e0IDP = Wm1ROzNs = (634 - 634);
    RkejNPa7d = (float *) malloc (Kc0geXj * sizeof (float));
    {
        HVkIO10 = (1568 - 605) - (1537 - 574);
        for (; rOziRrILvFS > HVkIO10;) {
            scanf ("%s", &zD3Kwycou[HVkIO10]);
            scanf ("%f", &lz8H6LAmFBI[HVkIO10]);
            HVkIO10 = (955 - 42) - (1832 - 920);
        }
    }
    {
        HVkIO10 = (1563 - 726) - (953 - 116);
        for (; HVkIO10 < rOziRrILvFS;) {
            if (!((858 - 858) != strcmp (zD3Kwycou[HVkIO10], zqtkB4RTPxw7))) {
                P7X43q = P7X43q +(80 - 79);
            }
            else {
                if (!((494 - 494) != strcmp (zD3Kwycou[HVkIO10], cXDIxFV))) {
                    Kc0geXj = Kc0geXj +(811 - 810);
                }
            }
            HVkIO10 = HVkIO10 +(897 - 896);
        }
    }
    {
        HVkIO10 = (1452 - 461) - (1103 - 112);
        for (; rOziRrILvFS > HVkIO10;) {
            if (!((691 - 691) != strcmp (zD3Kwycou[HVkIO10], zqtkB4RTPxw7))) {
                v6t9NoF4ICu[MduawK7e0IDP] = lz8H6LAmFBI[HVkIO10];
                MduawK7e0IDP = MduawK7e0IDP +(328 - 327);
            }
            else {
                if (!((760 - 760) != strcmp (zD3Kwycou[HVkIO10], cXDIxFV))) {
                    RkejNPa7d[Wm1ROzNs] = lz8H6LAmFBI[HVkIO10];
                    Wm1ROzNs = Wm1ROzNs +(949 - 948);
                }
                else
                    ;
            }
            HVkIO10 = (1427 - 784) - (878 - 236);
        }
    }
    qsort (v6t9NoF4ICu, P7X43q, sizeof (float), AxtDKLO);
    printf ("%.2f", v6t9NoF4ICu[(115 - 115)]);
    qsort (RkejNPa7d, Kc0geXj, sizeof (float), AxtDKLO);
    {
        HVkIO10 = (1391 - 400) - (1408 - 418);
        for (; HVkIO10 < P7X43q;) {
            printf (" %.2f", v6t9NoF4ICu[HVkIO10]);
            HVkIO10 = HVkIO10 +(666 - 665);
        }
    }
    {
        HVkIO10 = Kc0geXj -(682 - 681);
        for (; HVkIO10 >= (890 - 890);) {
            printf (" %.2f", RkejNPa7d[HVkIO10]);
            HVkIO10 = HVkIO10 -(205 - 204);
        }
    }
}

