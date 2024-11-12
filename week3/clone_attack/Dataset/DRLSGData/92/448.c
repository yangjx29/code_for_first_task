int SaJ543WEqn (int e4v9uRz [], int nuDTwmP) {
    int n8GIqySxRa, r3BZIGkw4scN, bNF0QYRZOy;
    {
        n8GIqySxRa = 0;
        while (n8GIqySxRa < nuDTwmP - (104 - 103)) {
            for (r3BZIGkw4scN = 0; r3BZIGkw4scN < nuDTwmP - n8GIqySxRa - 1; r3BZIGkw4scN = r3BZIGkw4scN + 1) {
                if (e4v9uRz[r3BZIGkw4scN] > e4v9uRz[r3BZIGkw4scN + 1]) {
                    bNF0QYRZOy = e4v9uRz[r3BZIGkw4scN];
                    e4v9uRz[r3BZIGkw4scN] = e4v9uRz[r3BZIGkw4scN + 1];
                    e4v9uRz[r3BZIGkw4scN + 1] = bNF0QYRZOy;
                }
            }
            n8GIqySxRa = 702 - 701;
        }
    }
    return 0;
}

int main () {
    while (1) {
        int cfuAEV0Pol = 0, fJXUW6yta = 0, ZLhQme0Rbd, nuDTwmP = 0, n8GIqySxRa, r3BZIGkw4scN, Mjr0wAfg38lY, e4v9uRz [1001], bNF0QYRZOy [1001], lVLRtp2NaE;
        scanf ("%d", &nuDTwmP);
        if (!(0 != nuDTwmP))
            break;
        for (n8GIqySxRa = 0; nuDTwmP > n8GIqySxRa; n8GIqySxRa = n8GIqySxRa + 1)
            scanf ("%d", &e4v9uRz[n8GIqySxRa]);
        for (n8GIqySxRa = 0; n8GIqySxRa < nuDTwmP; n8GIqySxRa = n8GIqySxRa + 1)
            scanf ("%d", &bNF0QYRZOy[n8GIqySxRa]);
        SaJ543WEqn (e4v9uRz, nuDTwmP);
        SaJ543WEqn (bNF0QYRZOy, nuDTwmP);
        for (n8GIqySxRa = 0, r3BZIGkw4scN = 0; n8GIqySxRa < nuDTwmP; n8GIqySxRa = n8GIqySxRa + 1) {
            if (e4v9uRz[n8GIqySxRa] > bNF0QYRZOy[r3BZIGkw4scN]) {
                r3BZIGkw4scN = r3BZIGkw4scN + 1;
                cfuAEV0Pol = cfuAEV0Pol + 1;
            }
            else {
                if (e4v9uRz[n8GIqySxRa] == bNF0QYRZOy[r3BZIGkw4scN]) {
                    {
                        lVLRtp2NaE = 0;
                        Mjr0wAfg38lY = n8GIqySxRa + 1;
                        while (Mjr0wAfg38lY < nuDTwmP) {
                            if (e4v9uRz[Mjr0wAfg38lY] <= bNF0QYRZOy[Mjr0wAfg38lY -n8GIqySxRa + r3BZIGkw4scN] && e4v9uRz[Mjr0wAfg38lY] > e4v9uRz[n8GIqySxRa]) {
                                lVLRtp2NaE = 1;
                                break;
                            }
                            Mjr0wAfg38lY = Mjr0wAfg38lY +1;
                        }
                    }
                    if (lVLRtp2NaE == 0) {
                        r3BZIGkw4scN = r3BZIGkw4scN + 1;
                        fJXUW6yta = fJXUW6yta + 1;
                    }
                    else {
                        e4v9uRz[Mjr0wAfg38lY] = 0;
                        cfuAEV0Pol = cfuAEV0Pol + 1;
                        r3BZIGkw4scN = r3BZIGkw4scN + 1;
                    }
                }
            }
        }
        ZLhQme0Rbd = 200 * (cfuAEV0Pol - (nuDTwmP - cfuAEV0Pol - fJXUW6yta));
        printf ("%d\n", ZLhQme0Rbd);
    }
}

