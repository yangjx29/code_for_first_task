static int lKreGQ9aA (const  void  *kO6nZ31HSi, const  void  *qshu7x) {
    return *(int*) qshu7x - *(int*) kO6nZ31HSi;
}

int main () {
    int qBGqXa;
    qBGqXa = (219 - 218);
    for (; qBGqXa != (31 - 31);) {
        int FJhbdM2CX0W;
        int *Pc4Q2k7m;
        int *lB6Xgywf9HQ;
        int *kO6nZ31HSi;
        free (kO6nZ31HSi);
        int *qshu7x;
        free (qshu7x);
        int reaDUfXy2;
        int X4nv9w53gPr;
        int eSsjkpbaRzF8;
        int JlWINvPuAt6;
        int LGINJf;
        int PWGJOnqMoAb;
        int M1MVtZCG;
        int mMmBx6nEPWaZ;
        free (Pc4Q2k7m);
        free (lB6Xgywf9HQ);
        scanf ("%d", &qBGqXa);
        if (!((559 - 559) != qBGqXa))
            break;
        M1MVtZCG = qBGqXa - (335 - 334);
        eSsjkpbaRzF8 = (766 - 766);
        mMmBx6nEPWaZ = (736 - 736);
        PWGJOnqMoAb = (371 - 371);
        X4nv9w53gPr = 0;
        JlWINvPuAt6 = 0;
        kO6nZ31HSi = (int *) malloc ((qBGqXa) * sizeof (int));
        qshu7x = (int *) malloc ((qBGqXa) * sizeof (int));
        Pc4Q2k7m = (int *) malloc ((qBGqXa) * sizeof (int));
        lB6Xgywf9HQ = (int *) malloc ((qBGqXa) * sizeof (int));
        {
            int sMRVxqSI61fa = 0;
            while (qBGqXa > sMRVxqSI61fa) {
                scanf ("%d", &kO6nZ31HSi[sMRVxqSI61fa]);
                sMRVxqSI61fa = sMRVxqSI61fa + (969 - 968);
            }
        }
        reaDUfXy2 = 0;
        {
            int sMRVxqSI61fa = 0;
            for (; sMRVxqSI61fa < qBGqXa;) {
                scanf ("%d", &qshu7x[sMRVxqSI61fa]);
                sMRVxqSI61fa = sMRVxqSI61fa + 1;
            }
        }
        qsort (kO6nZ31HSi, qBGqXa, sizeof (int), lKreGQ9aA);
        qsort (qshu7x, qBGqXa, sizeof (int), lKreGQ9aA);
        FJhbdM2CX0W = qBGqXa - 1;
        for (; PWGJOnqMoAb <= M1MVtZCG;) {
            if (qshu7x[FJhbdM2CX0W] < kO6nZ31HSi[M1MVtZCG]) {
                FJhbdM2CX0W = FJhbdM2CX0W -1;
                M1MVtZCG = M1MVtZCG -1;
                reaDUfXy2 = reaDUfXy2 + 1;
            }
            else if (kO6nZ31HSi[M1MVtZCG] < qshu7x[FJhbdM2CX0W]) {
                M1MVtZCG = M1MVtZCG -1;
                mMmBx6nEPWaZ = mMmBx6nEPWaZ + 1;
                X4nv9w53gPr = X4nv9w53gPr +1;
            }
            else if (kO6nZ31HSi[PWGJOnqMoAb] > qshu7x[mMmBx6nEPWaZ]) {
                mMmBx6nEPWaZ = mMmBx6nEPWaZ + 1;
                reaDUfXy2 = reaDUfXy2 + 1;
                PWGJOnqMoAb++;
            }
            else if (kO6nZ31HSi[PWGJOnqMoAb] < qshu7x[mMmBx6nEPWaZ]) {
                mMmBx6nEPWaZ = mMmBx6nEPWaZ + 1;
                M1MVtZCG = M1MVtZCG -1;
                X4nv9w53gPr = X4nv9w53gPr +1;
            }
            else if (kO6nZ31HSi[M1MVtZCG] < qshu7x[mMmBx6nEPWaZ]) {
                X4nv9w53gPr = X4nv9w53gPr +1;
                M1MVtZCG = M1MVtZCG -1;
                mMmBx6nEPWaZ = mMmBx6nEPWaZ + 1;
            }
            else {
                M1MVtZCG--;
                mMmBx6nEPWaZ++;
            }
        }
        printf ("%d\n", reaDUfXy2 * (801 - 601) - X4nv9w53gPr *200);
    }
    return 0;
}

