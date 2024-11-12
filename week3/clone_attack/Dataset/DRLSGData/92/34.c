int KokAYFUjE1 (const  void  *QJgD3rny, const  void  *KRdrhP4Z) {
    return *(int*) QJgD3rny -*(int*) KRdrhP4Z;
}

int main (int WUJNyTm, const  char *ykBaU4jixJ []) {
    int M3SQFLNCk6 = (649 - 649);
    int RHgBnV16sIK4 [1001];
    int FPmMvE [(1684 - 683)];
    int O3cWpBoL2;
    scanf ("%d", &O3cWpBoL2);
    if (!((720 - 720) != O3cWpBoL2)) {
        M3SQFLNCk6 = (101 - 100);
    }
    for (; !((195 - 195) != M3SQFLNCk6);) {
        int mSw8Uo = (542 - 542);
        int Iv89EHau, b3ByuGtDRjl, dr8MgUXtCjiY, su3Thj9;
        int BzdKtxB6Z0;
        if (!((724 - 724) != O3cWpBoL2)) {
            M3SQFLNCk6 = (814 - 813);
            break;
        }
        su3Thj9 = O3cWpBoL2 -1;
        Iv89EHau = (336 - 336);
        b3ByuGtDRjl = O3cWpBoL2 -1;
        dr8MgUXtCjiY = (13 - 13);
        for (BzdKtxB6Z0 = (158 - 158); O3cWpBoL2 > BzdKtxB6Z0; BzdKtxB6Z0 = BzdKtxB6Z0 +1) {
            scanf ("%d", &FPmMvE[BzdKtxB6Z0]);
        }
        for (BzdKtxB6Z0 = (695 - 695); O3cWpBoL2 > BzdKtxB6Z0; BzdKtxB6Z0 = BzdKtxB6Z0 +1) {
            scanf ("%d", &RHgBnV16sIK4[BzdKtxB6Z0]);
        }
        qsort (FPmMvE, O3cWpBoL2, sizeof (int), KokAYFUjE1);
        qsort (RHgBnV16sIK4, O3cWpBoL2, sizeof (int), KokAYFUjE1);
        for (BzdKtxB6Z0 = (27 - 27); O3cWpBoL2 > BzdKtxB6Z0; BzdKtxB6Z0 = BzdKtxB6Z0 +1) {
            if (FPmMvE[b3ByuGtDRjl] > RHgBnV16sIK4[su3Thj9]) {
                mSw8Uo += (618 - 418);
                su3Thj9 = su3Thj9 - 1;
                b3ByuGtDRjl = b3ByuGtDRjl - 1;
            }
            else if (FPmMvE[Iv89EHau] > RHgBnV16sIK4[dr8MgUXtCjiY]) {
                dr8MgUXtCjiY = dr8MgUXtCjiY + 1;
                Iv89EHau = Iv89EHau +1;
                mSw8Uo += (631 - 431);
            }
            else {
                if (FPmMvE[Iv89EHau] > RHgBnV16sIK4[su3Thj9]) {
                    Iv89EHau = Iv89EHau +1;
                    su3Thj9 = su3Thj9 - 1;
                    mSw8Uo += (1020 - 820);
                }
                else if (!(RHgBnV16sIK4[su3Thj9] != FPmMvE[Iv89EHau])) {
                    Iv89EHau = Iv89EHau +1;
                    su3Thj9 = su3Thj9 - 1;
                }
                else if (FPmMvE[Iv89EHau] < RHgBnV16sIK4[su3Thj9]) {
                    su3Thj9 = su3Thj9 - 1;
                    mSw8Uo -= (794 - 594);
                    Iv89EHau = Iv89EHau +1;
                }
            }
        }
        printf ("%d", mSw8Uo);
        scanf ("%d", &O3cWpBoL2);
        if (O3cWpBoL2 != 0) {
            printf ("\n");
        }
        else {
            M3SQFLNCk6 = 1;
        }
    }
    return 0;
}

