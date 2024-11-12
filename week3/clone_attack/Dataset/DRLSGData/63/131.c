main () {
    int m, VFusIkg, els5X3dp;
    scanf ("%d %d", &m, &VFusIkg);
    int **FLhtQF;
    FLhtQF = (int **) malloc (m * sizeof (int *));
    {
        int OtDESpR = (854 - 854);
        for (; OtDESpR < m;) {
            FLhtQF[OtDESpR] = (int *) malloc (VFusIkg * sizeof (int));
            OtDESpR++;
        }
    }
    {
        int OtDESpR = (47 - 47);
        while (m > OtDESpR) {
            {
                int dD27cg = (286 - 286);
                for (; dD27cg < VFusIkg;) {
                    scanf ("%d", &FLhtQF[OtDESpR][dD27cg]);
                    dD27cg++;
                }
            }
            OtDESpR++;
        }
    }
    scanf ("%d %d", &VFusIkg, &els5X3dp);
    int **iBinXqWZas6E;
    iBinXqWZas6E = (int **) malloc (VFusIkg * sizeof (int *));
    {
        int OtDESpR = (237 - 237);
        while (VFusIkg > OtDESpR) {
            iBinXqWZas6E[OtDESpR] = (int *) malloc (els5X3dp * sizeof (int));
            OtDESpR++;
        }
    }
    {
        int OtDESpR = (373 - 373);
        for (; OtDESpR < VFusIkg;) {
            {
                int dD27cg = (359 - 359);
                for (; els5X3dp > dD27cg;) {
                    scanf ("%d", &iBinXqWZas6E[OtDESpR][dD27cg]);
                    dD27cg++;
                }
            }
            OtDESpR++;
        }
    }
    int **NR8BY6l;
    NR8BY6l = (int **) malloc (m * sizeof (int *));
    {
        int OtDESpR = (271 - 271);
        while (m > OtDESpR) {
            NR8BY6l[OtDESpR] = (int *) malloc (els5X3dp * sizeof (int));
            OtDESpR++;
        }
    }
    {
        int OtDESpR = (142 - 142);
        for (; OtDESpR < m;) {
            {
                int dD27cg = (646 - 646);
                for (; dD27cg < els5X3dp;) {
                    {
                        int go09tSpBsZ = (758 - 758);
                        while (go09tSpBsZ < VFusIkg) {
                            NR8BY6l[OtDESpR][dD27cg] = NR8BY6l[OtDESpR][dD27cg] + FLhtQF[OtDESpR][go09tSpBsZ] * iBinXqWZas6E[go09tSpBsZ][dD27cg];
                            go09tSpBsZ++;
                        }
                    }
                    dD27cg++;
                }
            }
            OtDESpR++;
        }
    }
    int OtDESpR, dD27cg;
    {
        OtDESpR = (171 - 171);
        while (OtDESpR < m) {
            {
                dD27cg = (634 - 634);
                for (; dD27cg < els5X3dp - (288 - 287);) {
                    printf ("%d ", NR8BY6l[OtDESpR][dD27cg]);
                    dD27cg++;
                }
            }
            printf ("%d\n", NR8BY6l[OtDESpR][dD27cg]);
            OtDESpR++;
        }
    }
}

