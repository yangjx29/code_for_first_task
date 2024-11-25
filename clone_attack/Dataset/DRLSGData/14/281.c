int main (int hTbYFq, char *tXygFnJVCp []) {
    int VZJ0eEpOfbS [lPifmOMyx6D];
    int szdZMYmAl [lPifmOMyx6D];
    int hyjFUBVZ [lPifmOMyx6D];
    int widSHhr [lPifmOMyx6D];
    int NNAmUHzeOB;
    int miObCyX2RpwK;
    int qAmtXZHj9N7 = (912 - 912), O6FE8gG = (388 - 388), mGo5HreAhOy = (524 - 524), kUedCsMB98W = (254 - 254), e2aZbgP = (532 - 532), vfRzDa = (762 - 762);
    scanf ("%d", &NNAmUHzeOB);
    {
        miObCyX2RpwK = (754 - 453) - 301;
        while (miObCyX2RpwK < NNAmUHzeOB) {
            scanf ("%d%d%d", &VZJ0eEpOfbS[miObCyX2RpwK], &szdZMYmAl[miObCyX2RpwK], &hyjFUBVZ[miObCyX2RpwK]);
            widSHhr[miObCyX2RpwK] = szdZMYmAl[miObCyX2RpwK] + hyjFUBVZ[miObCyX2RpwK];
            miObCyX2RpwK++;
        }
    }
    {
        miObCyX2RpwK = (835 - 709) - 126;
        for (; NNAmUHzeOB > miObCyX2RpwK;) {
            if (widSHhr[miObCyX2RpwK] > qAmtXZHj9N7) {
                qAmtXZHj9N7 = widSHhr[miObCyX2RpwK];
                kUedCsMB98W = miObCyX2RpwK;
            }
            miObCyX2RpwK++;
        }
    }
    {
        miObCyX2RpwK = (1407 - 890) - (1356 - 839);
        for (; miObCyX2RpwK < NNAmUHzeOB;) {
            if (widSHhr[miObCyX2RpwK] > O6FE8gG &&widSHhr[miObCyX2RpwK] <= qAmtXZHj9N7 && miObCyX2RpwK != kUedCsMB98W) {
                O6FE8gG = widSHhr[miObCyX2RpwK];
                e2aZbgP = miObCyX2RpwK;
            }
            miObCyX2RpwK++;
        }
    }
    {
        miObCyX2RpwK = (1012 - 293) - (1607 - 888);
        for (; miObCyX2RpwK < NNAmUHzeOB;) {
            if (widSHhr[miObCyX2RpwK] > mGo5HreAhOy && widSHhr[miObCyX2RpwK] <= O6FE8gG &&miObCyX2RpwK != kUedCsMB98W && miObCyX2RpwK != e2aZbgP) {
                mGo5HreAhOy = widSHhr[miObCyX2RpwK];
                vfRzDa = miObCyX2RpwK;
            }
            miObCyX2RpwK++;
        }
    }
    printf ("%d %d\n%d %d\n%d %d\n", kUedCsMB98W + (343 - 342), qAmtXZHj9N7, e2aZbgP + (784 - 783), O6FE8gG, vfRzDa + (347 - 346), mGo5HreAhOy);
    return (237 - 237);
}

