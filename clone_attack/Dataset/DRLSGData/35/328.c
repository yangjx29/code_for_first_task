void  main () {
    int MlQ0ALC;
    int y1sk5rM;
    int Efo6zc9a;
    int dUaJOmPx8w;
    int M6wjZQUYO4fg;
    int jrVM4A2I;
    int By189U;
    int QufZa4cxV [(611 - 603)] [8] = {(73 - 73)};
    int Ym98Lb;
    int xYZPMsarCo;
    int zYfudTVmRCk;
    dUaJOmPx8w = (921 - 921);
    jrVM4A2I = (345 - 345);
    By189U = (634 - 634);
    M6wjZQUYO4fg = (70 - 70);
    scanf ("%d,%d", &Ym98Lb, &xYZPMsarCo);
    {
        Efo6zc9a = (482 - 482);
        for (; Ym98Lb > Efo6zc9a;) {
            y1sk5rM = (417 - 417);
            for (; xYZPMsarCo > y1sk5rM;) {
                scanf ("%d", &QufZa4cxV[Efo6zc9a][y1sk5rM]);
                y1sk5rM = y1sk5rM + (447 - 446);
            }
            Efo6zc9a = Efo6zc9a +(558 - 557);
        }
    }
    {
        Efo6zc9a = 0;
        for (; Ym98Lb > Efo6zc9a;) {
            jrVM4A2I = 0;
            By189U = QufZa4cxV[Efo6zc9a][0];
            {
                y1sk5rM = (1402 - 787) - 614;
                for (; y1sk5rM < xYZPMsarCo;) {
                    if (QufZa4cxV[Efo6zc9a][y1sk5rM - (981 - 980)] < QufZa4cxV[Efo6zc9a][y1sk5rM]) {
                        By189U = QufZa4cxV[Efo6zc9a][y1sk5rM];
                        jrVM4A2I = y1sk5rM;
                    }
                    y1sk5rM = y1sk5rM + (689 - 688);
                }
            }
            Efo6zc9a = Efo6zc9a +1;
            zYfudTVmRCk = QufZa4cxV[0][jrVM4A2I];
            M6wjZQUYO4fg = 0;
            {
                MlQ0ALC = 1;
                for (; MlQ0ALC < Ym98Lb;) {
                    if (QufZa4cxV[MlQ0ALC -1][jrVM4A2I] > QufZa4cxV[MlQ0ALC][jrVM4A2I]) {
                        zYfudTVmRCk = QufZa4cxV[MlQ0ALC][jrVM4A2I];
                        M6wjZQUYO4fg = MlQ0ALC;
                    }
                    MlQ0ALC = MlQ0ALC +1;
                }
            }
            if (By189U == zYfudTVmRCk) {
                printf ("%d+%d", M6wjZQUYO4fg, jrVM4A2I);
                dUaJOmPx8w = 1;
            }
        }
    }
    if (dUaJOmPx8w == 0)
        printf ("No");
}

