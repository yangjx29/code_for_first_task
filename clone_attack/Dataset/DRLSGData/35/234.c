void  main () {
    int skNuDmyw [8];
    int cDZehLp [(864 - 856)] [(471 - 463)];
    int SBWeHAvl;
    int kITZ1d;
    int nXaAy2JGK;
    int nkXhocOF;
    scanf ("%d,%d", &SBWeHAvl, &kITZ1d);
    {
        nXaAy2JGK = (520 - 520);
        while (nXaAy2JGK < SBWeHAvl) {
            {
                nkXhocOF = (897 - 897);
                for (; nkXhocOF < kITZ1d;) {
                    scanf ("%d", &cDZehLp[nXaAy2JGK][nkXhocOF]);
                    nkXhocOF++;
                }
            }
            nXaAy2JGK++;
        }
    }
    {
        nXaAy2JGK = (271 - 271);
        while (SBWeHAvl > nXaAy2JGK) {
            skNuDmyw[nXaAy2JGK] = (324 - 324);
            {
                nkXhocOF = (155 - 154);
                for (; nkXhocOF < kITZ1d;) {
                    if (cDZehLp[nXaAy2JGK][nkXhocOF] > cDZehLp[nXaAy2JGK][skNuDmyw[nXaAy2JGK]])
                        skNuDmyw[nXaAy2JGK] = nkXhocOF;
                    nkXhocOF++;
                }
            }
            nXaAy2JGK++;
        }
    }
    {
        nXaAy2JGK = (907 - 907);
        for (; nXaAy2JGK < SBWeHAvl;) {
            {
                nkXhocOF = 0;
                for (; SBWeHAvl > nkXhocOF;) {
                    if (cDZehLp[nXaAy2JGK][skNuDmyw[nXaAy2JGK]] > cDZehLp[nkXhocOF][skNuDmyw[nXaAy2JGK]])
                        break;
                    nkXhocOF++;
                }
            }
            if (nkXhocOF >= SBWeHAvl) {
                printf ("%d+%d", nXaAy2JGK, skNuDmyw[nXaAy2JGK]);
                return;
            }
            nXaAy2JGK++;
        }
    }
}

