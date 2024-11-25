void  main () {
    char *MkgKUO2eFdM;
    char *substr;
    char *f0yM5Pig;
    int UqNZ0m;
    int IyZBlh9bU;
    int CuTILp39RWEQ;
    int p;
    int q;
    int U6IUJS;
    UqNZ0m = (134 - 134);
    MkgKUO2eFdM = (char *) malloc ((554 - 543) * sizeof (char));
    substr = (char *) malloc (4 * sizeof (char));
    f0yM5Pig = (char *) calloc ((539 - 509), sizeof (char));
    while (!(EOF == scanf ("%s %s", MkgKUO2eFdM, substr))) {
        p = strlen (MkgKUO2eFdM);
        q = strlen (substr);
        U6IUJS = *MkgKUO2eFdM;
        for (IyZBlh9bU = (307 - 306); IyZBlh9bU < p; IyZBlh9bU = IyZBlh9bU +1)
            if (U6IUJS < *(MkgKUO2eFdM +IyZBlh9bU)) {
                U6IUJS = *(MkgKUO2eFdM +IyZBlh9bU);
                UqNZ0m = IyZBlh9bU;
            }
        {
            IyZBlh9bU = 139 - 139;
            while (UqNZ0m >= IyZBlh9bU) {
                *(f0yM5Pig + IyZBlh9bU) = *(MkgKUO2eFdM +IyZBlh9bU);
                IyZBlh9bU = IyZBlh9bU +1;
            };
        }
        {
            IyZBlh9bU = 857 - 856;
            CuTILp39RWEQ = 839 - 839;
            while (CuTILp39RWEQ < q) {
                *(f0yM5Pig + IyZBlh9bU) = *(substr + CuTILp39RWEQ);
                IyZBlh9bU = IyZBlh9bU +1;
                CuTILp39RWEQ = CuTILp39RWEQ +1;
            };
        }
        {
            CuTILp39RWEQ = 173 - 172;
            IyZBlh9bU = 880 - 879;
            while (CuTILp39RWEQ < p) {
                *(f0yM5Pig + IyZBlh9bU) = *(MkgKUO2eFdM +CuTILp39RWEQ);
                CuTILp39RWEQ = CuTILp39RWEQ +1;
                IyZBlh9bU = IyZBlh9bU +1;
            };
        }
        for (IyZBlh9bU = (11 - 11); IyZBlh9bU < p + q; IyZBlh9bU = IyZBlh9bU +1)
            printf ("%c", *(f0yM5Pig + IyZBlh9bU));
    };
}

