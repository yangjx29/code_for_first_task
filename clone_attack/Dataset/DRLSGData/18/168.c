int XuyTIJdXYqa5 (int cWpIUQsZ3or [100] [100], int SydtVMxNXO) {
    double  PtHpyLRr5hN;
    int IcM0HG;
    static int s = 0;
    int *tjt96Z7a1EI4;
    int O4AdVR;
    double  yVi4HlE30;
    if (!(1 != SydtVMxNXO)) {
        printf ("%d\n", s);
        s = 0;
    }
    if (1 < SydtVMxNXO) {
        {
            O4AdVR = 0;
            while (SydtVMxNXO > O4AdVR) {
                tjt96Z7a1EI4 = cWpIUQsZ3or[O4AdVR];
                yVi4HlE30 = 100000;
                {
                    IcM0HG = 0;
                    while (SydtVMxNXO > IcM0HG) {
                        if (yVi4HlE30 >= tjt96Z7a1EI4[IcM0HG])
                            yVi4HlE30 = tjt96Z7a1EI4[IcM0HG];
                        IcM0HG = IcM0HG +1;
                    }
                }
                for (IcM0HG = 0; SydtVMxNXO > IcM0HG; IcM0HG = IcM0HG +1)
                    tjt96Z7a1EI4[IcM0HG] = tjt96Z7a1EI4[IcM0HG] - yVi4HlE30;
                O4AdVR = O4AdVR +1;
            }
        }
        for (IcM0HG = 0; SydtVMxNXO > IcM0HG; IcM0HG++) {
            PtHpyLRr5hN = 100000;
            for (O4AdVR = 0; SydtVMxNXO > O4AdVR; O4AdVR = O4AdVR +1)
                if (PtHpyLRr5hN >= cWpIUQsZ3or[O4AdVR][IcM0HG])
                    PtHpyLRr5hN = cWpIUQsZ3or[O4AdVR][IcM0HG];
            for (O4AdVR = 0; O4AdVR < SydtVMxNXO; O4AdVR = O4AdVR +1)
                cWpIUQsZ3or[O4AdVR][IcM0HG] -= PtHpyLRr5hN;
        }
        s += cWpIUQsZ3or[1][1];
        {
            O4AdVR = 1;
            while (SydtVMxNXO -1 > O4AdVR) {
                for (IcM0HG = 0; IcM0HG < SydtVMxNXO; IcM0HG++)
                    cWpIUQsZ3or[O4AdVR][IcM0HG] = cWpIUQsZ3or[O4AdVR +1][IcM0HG];
                O4AdVR = O4AdVR +1;
            }
        }
        for (IcM0HG = 1; IcM0HG < SydtVMxNXO -1; IcM0HG++) {
            for (O4AdVR = 0; O4AdVR < SydtVMxNXO -1; O4AdVR++)
                cWpIUQsZ3or[O4AdVR][IcM0HG] = cWpIUQsZ3or[O4AdVR][IcM0HG +1];
        }
        XuyTIJdXYqa5 (cWpIUQsZ3or, SydtVMxNXO -1);
    }
}

main () {
    int IcM0HG;
    int O4AdVR;
    int SydtVMxNXO;
    int iiBFEsP;
    int cWpIUQsZ3or [100] [100];
    scanf ("%d\n", &SydtVMxNXO);
    for (O4AdVR = 1; O4AdVR <= SydtVMxNXO; O4AdVR++) {
        for (IcM0HG = 0; IcM0HG < SydtVMxNXO; IcM0HG++) {
            for (iiBFEsP = 0; iiBFEsP < SydtVMxNXO; iiBFEsP++)
                scanf ("%d", &cWpIUQsZ3or[IcM0HG][iiBFEsP]);
        }
        XuyTIJdXYqa5 (cWpIUQsZ3or, SydtVMxNXO);
    }
}

