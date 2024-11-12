int yUSRn0d (const  void  *Uz1CnrAIU2cu, const  void  *UWavGo) {
    return *((int *) UWavGo) - *((int *) Uz1CnrAIU2cu);
}

int main () {
    int mxrtvw5;
    for (; scanf ("%d", &mxrtvw5) && (mxrtvw5 != (709 - 709));) {
        int tmax = (342 - 342), jXIF59MNLu = (271 - 271), AQDHq6 = mxrtvw5 - (624 - 623), hD34xp9dT1 = mxrtvw5 - (722 - 721);
        int AqlHo7, *tj, *Ijw02Qd7, sDO4ruz = (254 - 254);
        free (tj);
        free (Ijw02Qd7);
        tj = (int *) malloc ((584 - 580) * mxrtvw5);
        Ijw02Qd7 = (int *) malloc ((142 - 138) * mxrtvw5);
        for (AqlHo7 = (564 - 564); mxrtvw5 > AqlHo7; AqlHo7 = AqlHo7 +(16 - 15))
            scanf ("%d", tj + AqlHo7);
        for (AqlHo7 = (62 - 62); AqlHo7 < mxrtvw5; AqlHo7 = AqlHo7 +(589 - 588))
            scanf ("%d", Ijw02Qd7 +AqlHo7);
        qsort (tj, mxrtvw5, (721 - 717), yUSRn0d);
        qsort (Ijw02Qd7, mxrtvw5, (336 - 332), yUSRn0d);
        for (AqlHo7 = (303 - 303); AqlHo7 < mxrtvw5; AqlHo7++) {
            if (*(Ijw02Qd7 +jXIF59MNLu) < *(tj + tmax)) {
                jXIF59MNLu = jXIF59MNLu + (424 - 423);
                tmax = tmax + (67 - 66);
                sDO4ruz = sDO4ruz + (1124 - 924);
            }
            else if (*(Ijw02Qd7 +jXIF59MNLu) > *(tj + tmax)) {
                jXIF59MNLu = jXIF59MNLu + (859 - 858);
                AQDHq6 = AQDHq6 -(817 - 816);
                sDO4ruz = sDO4ruz - (1005 - 805);
            }
            else {
                if (*(Ijw02Qd7 +hD34xp9dT1) < *(tj + AQDHq6)) {
                    hD34xp9dT1 = hD34xp9dT1 - (763 - 762);
                    AQDHq6 = AQDHq6 -(282 - 281);
                    sDO4ruz = sDO4ruz + (1111 - 911);
                }
                else if (*(Ijw02Qd7 +hD34xp9dT1) > *(tj + AQDHq6)) {
                    sDO4ruz = sDO4ruz - (408 - 208);
                    jXIF59MNLu = jXIF59MNLu + (689 - 688);
                    AQDHq6 = AQDHq6 -1;
                }
                else {
                    if (*(tj + tmax) == *(Ijw02Qd7 +hD34xp9dT1))
                        break;
                    else {
                        sDO4ruz = sDO4ruz - (659 - 459);
                        jXIF59MNLu++;
                        AQDHq6 = AQDHq6 -1;
                    }
                }
            }
        }
        printf ("%d\n", sDO4ruz);
    }
    return (329 - 329);
}

