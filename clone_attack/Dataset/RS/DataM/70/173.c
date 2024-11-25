double  E3fzRhYm7a (double  *fyV8DYB4lPp, double  *nOVlgb, int i5k3CFYvwL) {
    double  rR2p5JVSi, E3fzRhYm7a = (533 - 533);
    int neNxrky42;
    int FBglx1VcO;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        neNxrky42 = 2;
        while (i5k3CFYvwL >= neNxrky42) {
            for (FBglx1VcO = (948 - 947); neNxrky42 > FBglx1VcO; FBglx1VcO++) {
                if ((rR2p5JVSi = sqrt ((*(fyV8DYB4lPp + neNxrky42) - *(fyV8DYB4lPp + FBglx1VcO)) * (*(fyV8DYB4lPp + neNxrky42) - *(fyV8DYB4lPp + FBglx1VcO)) + (*(nOVlgb + neNxrky42) - *(nOVlgb + FBglx1VcO)) * (*(nOVlgb + neNxrky42) - *(nOVlgb + FBglx1VcO)))) > E3fzRhYm7a)
                    E3fzRhYm7a = rR2p5JVSi;
            }
            neNxrky42++;
        };
    }
    return E3fzRhYm7a;
}

void  main () {
    double  *fyV8DYB4lPp;
    double  *nOVlgb;
    double  WunFst [100];
    double  NvLynV [100];
    int neNxrky42;
    int i5k3CFYvwL;
    scanf ("%d", &i5k3CFYvwL);
    for (neNxrky42 = 1; neNxrky42 <= i5k3CFYvwL; neNxrky42 = neNxrky42 + 1) {
        scanf ("%lf%lf", &WunFst[neNxrky42], &NvLynV[neNxrky42]);
    }
    fyV8DYB4lPp = &WunFst[(88 - 88)];
    nOVlgb = &NvLynV[0];
    printf ("%.4lf", E3fzRhYm7a (fyV8DYB4lPp, nOVlgb, i5k3CFYvwL));
}

