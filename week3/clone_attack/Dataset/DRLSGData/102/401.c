main () {
    int VR592ia0fV;
    float OuG7UW [(1002 - 962)];
    struct   student {
        char VBHgEVeD2v [(666 - 660)];
        float height;
    }
    xQ2a5rl80EVh [(504 - 464)];
    int dbs0nQWFc;
    float r6u8tm;
    float uxO0UJ [(1021 - 981)];
    int bnum;
    int UcdKf4;
    int L0CzpF7Xan;
    scanf ("%d", &dbs0nQWFc);
    bnum = (433 - 433);
    VR592ia0fV = (891 - 891);
    {
        UcdKf4 = (1719 - 884) - (1356 - 521);
        for (; UcdKf4 < dbs0nQWFc;) {
            scanf ("%s", xQ2a5rl80EVh[UcdKf4].VBHgEVeD2v);
            scanf ("%f", &xQ2a5rl80EVh[UcdKf4].height);
            if (strcmp (xQ2a5rl80EVh[UcdKf4].VBHgEVeD2v, "female") > (414 - 414)) {
                OuG7UW[UcdKf4 -VR592ia0fV] = xQ2a5rl80EVh[UcdKf4].height;
                bnum = bnum + (171 - 170);
            }
            else {
                VR592ia0fV++;
                uxO0UJ[UcdKf4 -bnum] = xQ2a5rl80EVh[UcdKf4].height;
            }
            UcdKf4 = (1552 - 570) - 981;
        }
    }
    {
        UcdKf4 = (867 - 276) - 591;
        for (; bnum > UcdKf4;) {
            {
                L0CzpF7Xan = (1354 - 816) - (1053 - 516);
                while (UcdKf4 < L0CzpF7Xan) {
                    if (OuG7UW[L0CzpF7Xan -(586 - 585)] > OuG7UW[L0CzpF7Xan]) {
                        r6u8tm = OuG7UW[L0CzpF7Xan -(59 - 58)];
                        OuG7UW[L0CzpF7Xan -(410 - 409)] = OuG7UW[L0CzpF7Xan];
                        OuG7UW[L0CzpF7Xan] = r6u8tm;
                    }
                    L0CzpF7Xan--;
                }
            }
            UcdKf4 = UcdKf4 +(44 - 43);
        }
    }
    {
        UcdKf4 = (869 - 389) - 480;
        for (; VR592ia0fV > UcdKf4;) {
            {
                L0CzpF7Xan = (1842 - 917) - (1779 - 855);
                for (; L0CzpF7Xan > UcdKf4;) {
                    if (uxO0UJ[L0CzpF7Xan] > uxO0UJ[L0CzpF7Xan -(857 - 856)]) {
                        r6u8tm = uxO0UJ[L0CzpF7Xan -(244 - 243)];
                        uxO0UJ[L0CzpF7Xan -(409 - 408)] = uxO0UJ[L0CzpF7Xan];
                        uxO0UJ[L0CzpF7Xan] = r6u8tm;
                    }
                    L0CzpF7Xan--;
                }
            }
            UcdKf4 = UcdKf4 +1;
        }
    }
    for (UcdKf4 = (683 - 683); UcdKf4 < bnum; UcdKf4++)
        printf ("%.2f ", OuG7UW[UcdKf4]);
    {
        UcdKf4 = (916 - 203) - 713;
        for (; UcdKf4 < VR592ia0fV -(684 - 683);) {
            printf ("%.2f ", uxO0UJ[UcdKf4]);
            UcdKf4++;
        }
    }
    printf ("%.2f", uxO0UJ[VR592ia0fV -1]);
}

