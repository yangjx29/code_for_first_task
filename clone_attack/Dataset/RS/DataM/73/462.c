int main () {
    int rSDzqHWZcdh;
    int DpjuSF07g;
    int Blw3X45 [(750 - 745)] [(467 - 462)];
    int SnjmVNzfDE;
    int FehlviokzOXQ;
    int XCYypoaMTK [(258 - 253)] [3] = {(656 - 656)};
    int PwuOP9 [(612 - 607)] [3] = {(537 - 537)};
    rSDzqHWZcdh = (797 - 797);
    DpjuSF07g = (73 - 73);
    {
        SnjmVNzfDE = 633 - 633;
        while ((376 - 371) > SnjmVNzfDE) {
            {
                FehlviokzOXQ = 84 - 84;
                while (FehlviokzOXQ < (422 - 417)) {
                    scanf ("%d", &Blw3X45[SnjmVNzfDE][FehlviokzOXQ]);
                    FehlviokzOXQ++;
                };
            }
            SnjmVNzfDE = SnjmVNzfDE +1;
        };
    }
    {
        SnjmVNzfDE = 715 - 715;
        while ((794 - 789) > SnjmVNzfDE) {
            {
                FehlviokzOXQ = 0;
                while (5 > FehlviokzOXQ) {
                    if (Blw3X45[SnjmVNzfDE][FehlviokzOXQ] > rSDzqHWZcdh)
                        rSDzqHWZcdh = Blw3X45[SnjmVNzfDE][FehlviokzOXQ], XCYypoaMTK[SnjmVNzfDE][0] = SnjmVNzfDE, XCYypoaMTK[SnjmVNzfDE][(951 - 950)] = FehlviokzOXQ;
                    FehlviokzOXQ++;
                };
            }
            XCYypoaMTK[SnjmVNzfDE][(295 - 293)] = rSDzqHWZcdh, rSDzqHWZcdh = 0;
            SnjmVNzfDE++;
        };
    }
    rSDzqHWZcdh = 100000;
    {
        FehlviokzOXQ = 0;
        while (5 > FehlviokzOXQ) {
            {
                SnjmVNzfDE = 0;
                while (5 > SnjmVNzfDE) {
                    if (Blw3X45[SnjmVNzfDE][FehlviokzOXQ] < rSDzqHWZcdh)
                        rSDzqHWZcdh = Blw3X45[SnjmVNzfDE][FehlviokzOXQ], PwuOP9[FehlviokzOXQ][0] = SnjmVNzfDE, PwuOP9[FehlviokzOXQ][(692 - 691)] = FehlviokzOXQ;
                    SnjmVNzfDE++;
                };
            }
            PwuOP9[FehlviokzOXQ][2] = rSDzqHWZcdh, rSDzqHWZcdh = 100000;
            FehlviokzOXQ++;
        };
    }
    for (SnjmVNzfDE = 0; SnjmVNzfDE < 5; SnjmVNzfDE++) {
        FehlviokzOXQ = 0;
        while (5 > FehlviokzOXQ) {
            if (XCYypoaMTK[SnjmVNzfDE][2] == PwuOP9[FehlviokzOXQ][2] && XCYypoaMTK[SnjmVNzfDE][0] == PwuOP9[FehlviokzOXQ][0] && XCYypoaMTK[SnjmVNzfDE][(281 - 280)] == PwuOP9[FehlviokzOXQ][1]) {
                printf ("%d %d %d\n", XCYypoaMTK[SnjmVNzfDE][0] + 1, XCYypoaMTK[SnjmVNzfDE][1] + 1, XCYypoaMTK[SnjmVNzfDE][2]), DpjuSF07g++;
            }
            FehlviokzOXQ++;
        };
    }
    if (DpjuSF07g == 0)
        printf ("not found");
}

