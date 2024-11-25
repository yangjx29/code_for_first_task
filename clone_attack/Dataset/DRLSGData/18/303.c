int KZhb7W0Y (int kHP5h9k1R, int DIjUOiCutX) {
    if (kHP5h9k1R >= DIjUOiCutX) {
        return DIjUOiCutX;
    }
    else {
        return kHP5h9k1R;
    }
}

main () {
    int QojMlaLknW57;
    int miBpclk8T5;
    int D5d2mvDMzYP;
    int xNnsSkTEQI;
    int ZfSul8R;
    int ghsTMQ6Wztfj;
    int Ov8GJZYFe;
    int Xt12mGoeE;
    scanf ("%d", &D5d2mvDMzYP);
    {
        xNnsSkTEQI = 0;
        for (; D5d2mvDMzYP > xNnsSkTEQI;) {
            int kHP5h9k1R [100] [100] = {0};
            int DIjUOiCutX [100] [100] = {0};
            QojMlaLknW57 = 0;
            for (miBpclk8T5 = 0; D5d2mvDMzYP > miBpclk8T5; miBpclk8T5++) {
                for (ZfSul8R = 0; D5d2mvDMzYP > ZfSul8R; ZfSul8R++) {
                    scanf ("%d", &kHP5h9k1R[miBpclk8T5][ZfSul8R]);
                    DIjUOiCutX[miBpclk8T5][ZfSul8R] = kHP5h9k1R[miBpclk8T5][ZfSul8R];
                }
            }
            for (Xt12mGoeE = 0; Xt12mGoeE < D5d2mvDMzYP -1; Xt12mGoeE++) {
                for (miBpclk8T5 = 0; miBpclk8T5 < D5d2mvDMzYP; miBpclk8T5++) {
                    {
                        ZfSul8R = 0;
                        while (D5d2mvDMzYP -1 > ZfSul8R) {
                            kHP5h9k1R[miBpclk8T5][ZfSul8R +1] = KZhb7W0Y (kHP5h9k1R[miBpclk8T5][ZfSul8R], kHP5h9k1R[miBpclk8T5][ZfSul8R +1]);
                            ZfSul8R++;
                        }
                    }
                    ghsTMQ6Wztfj = 0;
                    ghsTMQ6Wztfj = kHP5h9k1R[miBpclk8T5][ZfSul8R];
                    for (ZfSul8R = 0; ZfSul8R < D5d2mvDMzYP; ZfSul8R++) {
                        DIjUOiCutX[miBpclk8T5][ZfSul8R] = DIjUOiCutX[miBpclk8T5][ZfSul8R] - ghsTMQ6Wztfj;
                        kHP5h9k1R[miBpclk8T5][ZfSul8R] = DIjUOiCutX[miBpclk8T5][ZfSul8R];
                    }
                }
                {
                    miBpclk8T5 = 0;
                    while (miBpclk8T5 < D5d2mvDMzYP) {
                        Ov8GJZYFe = 0;
                        {
                            ZfSul8R = 0;
                            for (; D5d2mvDMzYP -1 > ZfSul8R;) {
                                kHP5h9k1R[ZfSul8R +1][miBpclk8T5] = KZhb7W0Y (kHP5h9k1R[ZfSul8R][miBpclk8T5], kHP5h9k1R[ZfSul8R +1][miBpclk8T5]);
                                ZfSul8R++;
                            }
                        }
                        Ov8GJZYFe = kHP5h9k1R[ZfSul8R][miBpclk8T5];
                        {
                            ZfSul8R = 0;
                            for (; ZfSul8R < D5d2mvDMzYP;) {
                                DIjUOiCutX[ZfSul8R][miBpclk8T5] = DIjUOiCutX[ZfSul8R][miBpclk8T5] - Ov8GJZYFe;
                                kHP5h9k1R[ZfSul8R][miBpclk8T5] = DIjUOiCutX[ZfSul8R][miBpclk8T5];
                                ZfSul8R++;
                            }
                        }
                        miBpclk8T5++;
                    }
                }
                QojMlaLknW57 = QojMlaLknW57 +kHP5h9k1R[1][1];
                for (miBpclk8T5 = 0; miBpclk8T5 < D5d2mvDMzYP; miBpclk8T5++) {
                    ZfSul8R = 1;
                    while (ZfSul8R < D5d2mvDMzYP -1) {
                        kHP5h9k1R[ZfSul8R][miBpclk8T5] = kHP5h9k1R[ZfSul8R +1][miBpclk8T5];
                        DIjUOiCutX[ZfSul8R][miBpclk8T5] = kHP5h9k1R[ZfSul8R][miBpclk8T5];
                        ZfSul8R++;
                    }
                }
                {
                    miBpclk8T5 = 0;
                    for (; miBpclk8T5 < D5d2mvDMzYP;) {
                        {
                            ZfSul8R = 1;
                            for (; ZfSul8R < D5d2mvDMzYP -1;) {
                                kHP5h9k1R[miBpclk8T5][ZfSul8R] = kHP5h9k1R[miBpclk8T5][ZfSul8R +1];
                                DIjUOiCutX[miBpclk8T5][ZfSul8R] = kHP5h9k1R[miBpclk8T5][ZfSul8R];
                                ZfSul8R++;
                            }
                        }
                        miBpclk8T5++;
                    }
                }
            }
            printf ("%d\n", QojMlaLknW57);
            xNnsSkTEQI++;
        }
    }
}

