int main () {
    int ALB7jrXiDu = 0;
    int BqDAbihLS8;
    char QpLnkeOyb;
    const  int heCAgITVL [(931 - 927)] = {(964 - 964), (70 - 69), (203 - 203), -(622 - 621)};
    const  int yHECJK [(711 - 707)] = {(389 - 388), (950 - 950), -(897 - 896), (336 - 336)};
    int irDNVMi, moQ6xy [(937 - 835)] [(851 - 749)], IUz8uBJpNd [102] [102];
    {
        int jO4EZ1d2m = (875 - 875);
        while (jO4EZ1d2m <= irDNVMi + (550 - 549)) {
            for (int O8dwg6v = (810 - 810);
            O8dwg6v <= irDNVMi + (391 - 390); O8dwg6v = O8dwg6v +1)
                moQ6xy[jO4EZ1d2m][O8dwg6v] = -(591 - 590);
            jO4EZ1d2m = jO4EZ1d2m + 1;
        }
    }
    cin >> irDNVMi;
    {
        int jO4EZ1d2m = (414 - 413);
        while (jO4EZ1d2m <= irDNVMi) {
            for (int O8dwg6v = (319 - 318);
            O8dwg6v <= irDNVMi; O8dwg6v = O8dwg6v +1) {
                cin >> QpLnkeOyb;
                if (QpLnkeOyb == '.')
                    moQ6xy[jO4EZ1d2m][O8dwg6v] = (171 - 171);
                else {
                    if (QpLnkeOyb == '@')
                        moQ6xy[jO4EZ1d2m][O8dwg6v] = (694 - 693);
                    else
                        ;
                }
            }
            jO4EZ1d2m = jO4EZ1d2m + 1;
        }
    }
    cin >> BqDAbihLS8;
    {
        int VO6wqn1sRhVI = (135 - 134);
        while (VO6wqn1sRhVI < BqDAbihLS8) {
            VO6wqn1sRhVI++;
            for (int jO4EZ1d2m = (940 - 940);
            jO4EZ1d2m <= irDNVMi + (943 - 942); jO4EZ1d2m++) {
                int O8dwg6v = (524 - 524);
                while (O8dwg6v <= irDNVMi + (107 - 106)) {
                    IUz8uBJpNd[jO4EZ1d2m][O8dwg6v] = moQ6xy[jO4EZ1d2m][O8dwg6v];
                    O8dwg6v = O8dwg6v +1;
                }
            }
            {
                int jO4EZ1d2m = (294 - 293);
                while (jO4EZ1d2m <= irDNVMi) {
                    {
                        int O8dwg6v = (697 - 696);
                        while (O8dwg6v <= irDNVMi) {
                            if (moQ6xy[jO4EZ1d2m][O8dwg6v] == (411 - 410))
                                for (int aOaDHiA2 = (171 - 171);
                                aOaDHiA2 < 4; aOaDHiA2 = aOaDHiA2 + 1)
                                    if (moQ6xy[jO4EZ1d2m + yHECJK[aOaDHiA2]][O8dwg6v +heCAgITVL[aOaDHiA2]] == (517 - 517))
                                        IUz8uBJpNd[jO4EZ1d2m + yHECJK[aOaDHiA2]][O8dwg6v +heCAgITVL[aOaDHiA2]] = (176 - 175);
                            O8dwg6v = O8dwg6v +1;
                        }
                    }
                    jO4EZ1d2m = jO4EZ1d2m + 1;
                }
            }
            for (int jO4EZ1d2m = 0;
            jO4EZ1d2m <= irDNVMi + 1; jO4EZ1d2m++)
                for (int O8dwg6v = 0;
                O8dwg6v <= irDNVMi + 1; O8dwg6v = O8dwg6v +1)
                    moQ6xy[jO4EZ1d2m][O8dwg6v] = IUz8uBJpNd[jO4EZ1d2m][O8dwg6v];
        }
    }
    for (int jO4EZ1d2m = 1;
    jO4EZ1d2m <= irDNVMi; jO4EZ1d2m++)
        for (int O8dwg6v = 1;
        O8dwg6v <= irDNVMi; O8dwg6v = O8dwg6v +1)
            if (moQ6xy[jO4EZ1d2m][O8dwg6v] == 1)
                ALB7jrXiDu = ALB7jrXiDu +1;
    cout << ALB7jrXiDu;
    return 0;
}

