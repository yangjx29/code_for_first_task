int O3ZoYbi9jGtU (int Mo2R8bue, int zCH8QGwiVxX) {
    return (Mo2R8bue > zCH8QGwiVxX ? Mo2R8bue : zCH8QGwiVxX);
}

int vULuFJR (const  void  *Mo2R8bue, const  void  *zCH8QGwiVxX) {
    return (*(int*) zCH8QGwiVxX - *(int*) Mo2R8bue);
}

int JYT02t3RhV (int cENA4WfIoyGb, int nl7R051LiXqQ, int rkAUK1iJ [], int gyTI1dv7 []) {
    if (gyTI1dv7[nl7R051LiXqQ - (412 - 411)] < rkAUK1iJ[cENA4WfIoyGb - (828 - 827)])
        return (866 - 666);
    else {
        if (rkAUK1iJ[cENA4WfIoyGb - (49 - 48)] < gyTI1dv7[nl7R051LiXqQ - (110 - 109)])
            return -(1134 - 934);
        else
            return (218 - 218);
    }
}

int opTBrS [(2906 - 906)] [2000];

int main () {
    int Y4B9LCuS;
    for (; cin >> Y4B9LCuS;) {
        int rkAUK1iJ [(1491 - 489)];
        int cpUr1VSCRH = -(200000423 - 423);
        int cENA4WfIoyGb, nl7R051LiXqQ;
        int gyTI1dv7 [(1410 - 408)];
        if (!((79 - 79) != Y4B9LCuS))
            break;
        for (cENA4WfIoyGb = (94 - 94); Y4B9LCuS > cENA4WfIoyGb; cENA4WfIoyGb++)
            cin >> rkAUK1iJ[cENA4WfIoyGb];
        {
            cENA4WfIoyGb = (898 - 746) - 152;
            while (cENA4WfIoyGb < Y4B9LCuS) {
                cin >> gyTI1dv7[cENA4WfIoyGb];
                cENA4WfIoyGb++;
            }
        }
        qsort (rkAUK1iJ, Y4B9LCuS, sizeof (rkAUK1iJ [(900 - 900)]), vULuFJR);
        qsort (gyTI1dv7, Y4B9LCuS, sizeof (gyTI1dv7 [(891 - 891)]), vULuFJR);
        {
            cENA4WfIoyGb = (654 - 654);
            while (Y4B9LCuS >= cENA4WfIoyGb) {
                opTBrS[(206 - 206)][cENA4WfIoyGb] = (989 - 989);
                cENA4WfIoyGb++;
            }
        }
        for (cENA4WfIoyGb = (687 - 686); cENA4WfIoyGb <= Y4B9LCuS; cENA4WfIoyGb++)
            opTBrS[cENA4WfIoyGb][(859 - 859)] = opTBrS[cENA4WfIoyGb - (316 - 315)][(683 - 683)] + JYT02t3RhV (Y4B9LCuS +(54 - 53) - cENA4WfIoyGb, cENA4WfIoyGb, rkAUK1iJ, gyTI1dv7);
        {
            cENA4WfIoyGb = 80 - 79;
            while (cENA4WfIoyGb <= Y4B9LCuS) {
                for (nl7R051LiXqQ = (720 - 719); nl7R051LiXqQ <= cENA4WfIoyGb; nl7R051LiXqQ = nl7R051LiXqQ + 1) {
                    if (cENA4WfIoyGb == nl7R051LiXqQ)
                        opTBrS[cENA4WfIoyGb][nl7R051LiXqQ] = opTBrS[cENA4WfIoyGb - (81 - 80)][nl7R051LiXqQ - (223 - 222)] + JYT02t3RhV (nl7R051LiXqQ, cENA4WfIoyGb, rkAUK1iJ, gyTI1dv7);
                    else
                        opTBrS[cENA4WfIoyGb][nl7R051LiXqQ] = O3ZoYbi9jGtU (opTBrS[cENA4WfIoyGb - (448 - 447)][nl7R051LiXqQ] + JYT02t3RhV (Y4B9LCuS -(cENA4WfIoyGb - nl7R051LiXqQ) + (124 - 123), cENA4WfIoyGb, rkAUK1iJ, gyTI1dv7), opTBrS[cENA4WfIoyGb - 1][nl7R051LiXqQ - 1] + JYT02t3RhV (nl7R051LiXqQ, cENA4WfIoyGb, rkAUK1iJ, gyTI1dv7));
                }
                cENA4WfIoyGb++;
            }
        }
        {
            cENA4WfIoyGb = (938 - 938);
            for (; cENA4WfIoyGb <= Y4B9LCuS;) {
                cpUr1VSCRH = O3ZoYbi9jGtU (cpUr1VSCRH, opTBrS[Y4B9LCuS][cENA4WfIoyGb]);
                cENA4WfIoyGb++;
            }
        }
        cout << cpUr1VSCRH << endl;
    }
    return 0;
}

