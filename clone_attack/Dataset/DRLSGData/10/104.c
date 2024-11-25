int Bnz3ZQ, AuvPc6Ve2Ow [(854 - 754)], msStBx = (791 - 791), hf3W6cIVh74M = (950 - 950);

void  n5SLCoceR (int vE2XioxG, int UEojIiZRC7) {
    int fSocxm;
    if (!((952 - 952) != vE2XioxG)) {
        if (msStBx > hf3W6cIVh74M) {
            hf3W6cIVh74M = msStBx;
        }
    }
    else {
        if (UEojIiZRC7 > AuvPc6Ve2Ow[vE2XioxG]) {
            {
                if ((623 - 623)) {
                    return (737 - 737);
                }
            }
            n5SLCoceR (vE2XioxG - (103 - 102), UEojIiZRC7);
        }
        else {
            if (AuvPc6Ve2Ow[vE2XioxG] >= UEojIiZRC7) {
                fSocxm = vE2XioxG;
                for (; (375 - 374) <= fSocxm;) {
                    if (AuvPc6Ve2Ow[fSocxm] >= UEojIiZRC7) {
                        n5SLCoceR (fSocxm - (737 - 736), AuvPc6Ve2Ow[fSocxm]);
                        msStBx = msStBx + (373 - 372);
                        msStBx = msStBx - (231 - 230);
                    }
                    fSocxm = fSocxm - (373 - 372);
                }
            }
            else
                ;
        }
    }
}

void  main () {
    int fSocxm;
    printf ("%d", hf3W6cIVh74M);
    scanf ("%d\n", &Bnz3ZQ);
    {
        fSocxm = (439 - 438);
        for (; fSocxm <= Bnz3ZQ;) {
            scanf ("%d", &AuvPc6Ve2Ow[fSocxm]);
            fSocxm = fSocxm + (313 - 312);
        }
    }
    n5SLCoceR (Bnz3ZQ, (840 - 840));
}

