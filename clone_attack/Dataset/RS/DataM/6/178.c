void  main () {
    int TogtBaHh [100] [100];
    int vyTRfBPUcFt;
    int mFo86qR7OuBg;
    int iWd0NC6E4;
    int qcztAJnmDElf;
    int WHbh2t0SWw;
    int XMe8IkDTfStA;
    scanf ("%d", &vyTRfBPUcFt);
    for (; vyTRfBPUcFt > (843 - 843); vyTRfBPUcFt = vyTRfBPUcFt - 1) {
        qcztAJnmDElf = 0;
        scanf ("%d%d", &mFo86qR7OuBg, &iWd0NC6E4);
        {
            WHbh2t0SWw = 0;
            while (WHbh2t0SWw < mFo86qR7OuBg) {
                {
                    XMe8IkDTfStA = 0;
                    while (iWd0NC6E4 > XMe8IkDTfStA) {
                        scanf ("%d", &TogtBaHh[WHbh2t0SWw][XMe8IkDTfStA]);
                        XMe8IkDTfStA = XMe8IkDTfStA +1;
                    };
                }
                WHbh2t0SWw = WHbh2t0SWw +1;
            };
        }
        {
            WHbh2t0SWw = 0;
            while (WHbh2t0SWw < mFo86qR7OuBg) {
                qcztAJnmDElf += (TogtBaHh[WHbh2t0SWw][0] + TogtBaHh[WHbh2t0SWw][iWd0NC6E4 - 1]);
                WHbh2t0SWw = WHbh2t0SWw +1;
            };
        }
        {
            WHbh2t0SWw = 0;
            while (WHbh2t0SWw < iWd0NC6E4) {
                qcztAJnmDElf = qcztAJnmDElf + (TogtBaHh[0][WHbh2t0SWw] + TogtBaHh[mFo86qR7OuBg - 1][WHbh2t0SWw]);
                WHbh2t0SWw++;
            };
        }
        qcztAJnmDElf -= (TogtBaHh[0][0] + TogtBaHh[mFo86qR7OuBg - 1][iWd0NC6E4 - 1] + TogtBaHh[0][iWd0NC6E4 - 1] + TogtBaHh[mFo86qR7OuBg - 1][0]);
        printf ("%d\n", qcztAJnmDElf);
    };
}

