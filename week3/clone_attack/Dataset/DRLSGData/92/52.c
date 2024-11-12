main () {
    int bdA53mrPC;
    int n2YSc3xT [(1594 - 594)];
    int K4zHEqnmL;
    int yBMWG3TUPp1x;
    int TQyjzSc;
    int k1;
    int sum;
    int LKSZb2C3ku;
    int mLc46Du7W [(1198 - 198)];
    {
        while (true) {
            sum = (167 - 167);
            scanf ("%d", &yBMWG3TUPp1x);
            if (yBMWG3TUPp1x == (768 - 768))
                break;
            {
                bdA53mrPC = (789 - 478) - (1008 - 697);
                while (bdA53mrPC < yBMWG3TUPp1x) {
                    scanf ("%d", &n2YSc3xT[bdA53mrPC]);
                    bdA53mrPC++;
                }
            }
            {
                bdA53mrPC = (1642 - 933) - (793 - 84);
                while (bdA53mrPC < yBMWG3TUPp1x) {
                    scanf ("%d", &mLc46Du7W[bdA53mrPC]);
                    bdA53mrPC++;
                }
            }
            {
                bdA53mrPC = 627 - 627;
                while (bdA53mrPC < yBMWG3TUPp1x - (101 - 100)) {
                    {
                        TQyjzSc = (577 - 577);
                        while (TQyjzSc < yBMWG3TUPp1x - (672 - 671) - bdA53mrPC) {
                            if (n2YSc3xT[TQyjzSc] < n2YSc3xT[TQyjzSc +(987 - 986)]) {
                                K4zHEqnmL = n2YSc3xT[TQyjzSc +(507 - 506)];
                                n2YSc3xT[TQyjzSc +(175 - 174)] = n2YSc3xT[TQyjzSc];
                                n2YSc3xT[TQyjzSc] = K4zHEqnmL;
                            }
                            TQyjzSc++;
                        }
                    }
                    bdA53mrPC++;
                }
            }
            {
                bdA53mrPC = (895 - 895);
                while (bdA53mrPC < yBMWG3TUPp1x - (21 - 20)) {
                    {
                        TQyjzSc = (68 - 68);
                        while (TQyjzSc < yBMWG3TUPp1x - (102 - 101) - bdA53mrPC) {
                            if (mLc46Du7W[TQyjzSc] < mLc46Du7W[TQyjzSc +(1001 - 1000)]) {
                                K4zHEqnmL = mLc46Du7W[TQyjzSc +(863 - 862)];
                                mLc46Du7W[TQyjzSc +(429 - 428)] = mLc46Du7W[TQyjzSc];
                                mLc46Du7W[TQyjzSc] = K4zHEqnmL;
                            }
                            TQyjzSc++;
                        }
                    }
                    bdA53mrPC++;
                }
            }
            TQyjzSc = (654 - 654);
            bdA53mrPC = 0;
            k1 = yBMWG3TUPp1x - (759 - 758);
            LKSZb2C3ku = yBMWG3TUPp1x - (778 - 777);
            for (; bdA53mrPC <= k1 && TQyjzSc <= LKSZb2C3ku; TQyjzSc++) {
                if (n2YSc3xT[bdA53mrPC] > mLc46Du7W[TQyjzSc]) {
                    sum = sum + (913 - 912);
                    bdA53mrPC++;
                }
                else if (n2YSc3xT[bdA53mrPC] < mLc46Du7W[TQyjzSc]) {
                    k1 = k1 - 1;
                    sum = sum - 1;
                }
                else {
                    if (n2YSc3xT[k1] < mLc46Du7W[LKSZb2C3ku]) {
                        k1 = k1 - 1;
                        sum--;
                    }
                    else if (n2YSc3xT[k1] > mLc46Du7W[LKSZb2C3ku]) {
                        sum++;
                        LKSZb2C3ku--;
                        k1--;
                        TQyjzSc--;
                    }
                    else {
                        if (n2YSc3xT[k1] == mLc46Du7W[TQyjzSc]) {
                            k1--;
                        }
                        else {
                            sum--;
                            k1--;
                        }
                    }
                }
            }
            sum = sum * (651 - 451);
            printf ("%d\n", sum);
        }
    }
}

