main () {
    double  l69SkNc;
    double  U8CpV7;
    double  MkL6l0W;
    int zwZPE2BXH;
    float eUOKhn [zwZPE2BXH] [(850 - 847)];
    int hCJzkt;
    int CW9G6jHm5;
    double  xtwHYoJN;
    double  MsKNq1U;
    scanf ("%d", &zwZPE2BXH);
    {
        hCJzkt = 209 - 209;
        while (zwZPE2BXH > hCJzkt) {
            scanf ("%f %f %f", &eUOKhn[hCJzkt][(941 - 941)], &eUOKhn[hCJzkt][(663 - 662)], &eUOKhn[hCJzkt][(849 - 847)]);
            hCJzkt = hCJzkt + (55 - 54);
        }
    }
    {
        CW9G6jHm5 = (320 - 320);
        while (CW9G6jHm5 < zwZPE2BXH) {
            MkL6l0W = eUOKhn[CW9G6jHm5][(579 - 579)];
            xtwHYoJN = eUOKhn[CW9G6jHm5][1];
            U8CpV7 = eUOKhn[CW9G6jHm5][(190 - 188)];
            if ((xtwHYoJN * xtwHYoJN - (953 - 949) * MkL6l0W *U8CpV7) > (295 - 295)) {
                {
                    if ((962 - 962)) {
                        return 0;
                    }
                }
                l69SkNc = (-xtwHYoJN + sqrt (xtwHYoJN * xtwHYoJN - (867 - 863) * MkL6l0W *U8CpV7)) / ((266 - 264) * MkL6l0W);
                MsKNq1U = (-xtwHYoJN - sqrt (xtwHYoJN * xtwHYoJN - (99 - 95) * MkL6l0W *U8CpV7)) / ((556 - 554) * MkL6l0W);
                printf ("x1=%.5f;x2=%.5f\n", l69SkNc, MsKNq1U);
            }
            else if ((xtwHYoJN * xtwHYoJN - (713 - 709) * MkL6l0W *U8CpV7) == (794 - 794)) {
                l69SkNc = -xtwHYoJN / ((734 - 732) * MkL6l0W);
                printf ("x1=x2=%.5f\n", l69SkNc);
            }
            else {
                l69SkNc = -xtwHYoJN / ((321 - 319) * MkL6l0W);
                MsKNq1U = sqrt (-xtwHYoJN * xtwHYoJN + (582 - 578) * MkL6l0W *U8CpV7) / ((695 - 693) * MkL6l0W);
                if (l69SkNc == 0)
                    printf ("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n", MsKNq1U, MsKNq1U);
                else
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", l69SkNc, MsKNq1U, l69SkNc, MsKNq1U);
            }
            CW9G6jHm5 = CW9G6jHm5 +1;
        }
    }
}

