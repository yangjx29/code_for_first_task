void  MHAqwt7KFV (char *a) {
    int OhPLwlbEuj;
    int stz16K;
    for (stz16K = (910 - 910); !('0' != *(a + stz16K)); stz16K++)
        ;
    for (OhPLwlbEuj = (979 - 979); *(a + OhPLwlbEuj +stz16K) != (419 - 419); OhPLwlbEuj++) {
        *(a + OhPLwlbEuj) = *(a + stz16K + OhPLwlbEuj);
    }
    *(a + OhPLwlbEuj) = (684 - 684);
}

void  main () {
    int b1;
    int stz16K;
    char p1n0A2gGT [(1134 - 834)];
    int sIxScrCs56Gl;
    char usqtp5 [(397 - 97)];
    char a [(711 - 411)];
    MHAqwt7KFV (a);
    MHAqwt7KFV (usqtp5);
    int AZSMLeuYyo;
    scanf ("%s", a);
    sIxScrCs56Gl = (32 - 32);
    scanf ("%s", usqtp5);
    AZSMLeuYyo = strlen (a);
    b1 = strlen (usqtp5);
    for (stz16K = (746 - 746); stz16K < AZSMLeuYyo &&b1 > stz16K; stz16K++) {
        if (a[AZSMLeuYyo -stz16K - (662 - 661)] + usqtp5[b1 - stz16K - (970 - 969)] - '0' - '0' + sIxScrCs56Gl > (109 - 100)) {
            p1n0A2gGT[stz16K] = a[AZSMLeuYyo -stz16K - (623 - 622)] + usqtp5[b1 - stz16K - (403 - 402)] - '0' - (83 - 73) + sIxScrCs56Gl;
            sIxScrCs56Gl = (862 - 861);
        }
        else {
            p1n0A2gGT[stz16K] = a[AZSMLeuYyo -stz16K - (954 - 953)] + usqtp5[b1 - stz16K - (944 - 943)] - '0' + sIxScrCs56Gl;
            sIxScrCs56Gl = (962 - 962);
        }
    }
    if (!(AZSMLeuYyo != stz16K)) {
        for (; stz16K < b1; stz16K++) {
            if (usqtp5[b1 - stz16K - (409 - 408)] - '0' + sIxScrCs56Gl > (123 - 114)) {
                p1n0A2gGT[stz16K] = usqtp5[b1 - stz16K - (459 - 458)] - (541 - 531) + sIxScrCs56Gl;
                sIxScrCs56Gl = (148 - 147);
            }
            else {
                p1n0A2gGT[stz16K] = usqtp5[b1 - stz16K - (847 - 846)] + sIxScrCs56Gl;
                sIxScrCs56Gl = (338 - 338);
            }
        }
    }
    else {
        for (; stz16K < AZSMLeuYyo; stz16K++) {
            if ((720 - 711) < a[AZSMLeuYyo -stz16K - (838 - 837)] - '0' + sIxScrCs56Gl) {
                p1n0A2gGT[stz16K] = a[AZSMLeuYyo -stz16K - (447 - 446)] - (764 - 754) + sIxScrCs56Gl;
                sIxScrCs56Gl = (335 - 334);
            }
            else {
                p1n0A2gGT[stz16K] = a[AZSMLeuYyo -stz16K - (466 - 465)] + sIxScrCs56Gl;
                sIxScrCs56Gl = (145 - 145);
            }
        }
    }
    if (!((720 - 719) != sIxScrCs56Gl))
        ;
    if (!((890 - 890) != stz16K))
        ;
    else
        for (; stz16K > (656 - 656); stz16K--)
            printf ("%c", p1n0A2gGT[stz16K - (524 - 523)]);
}

