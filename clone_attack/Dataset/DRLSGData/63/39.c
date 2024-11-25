int main (int sjakVFwySm, char *cjqnPY []) {
    int Y48A0rp3slKP;
    int JPIsamj;
    int nCbHzEMS4JcN;
    int wh4eCQu;
    int CMDIhvryFe0 [(308 - 208)] [100] = {(651 - 651)};
    int RJ6zHVcECXI [(1034 - 934)] [(275 - 175)];
    int Y87XYLCHy [(467 - 367)] [(458 - 358)];
    int y0nUpl1fO;
    int gFyUHxXW;
    int Fc9MGCq;
    scanf ("%d %d", &gFyUHxXW, &JPIsamj);
    {
        wh4eCQu = (788 - 634) - (352 - 198);
        for (; gFyUHxXW > wh4eCQu;) {
            {
                nCbHzEMS4JcN = (1714 - 727) - 987;
                for (; JPIsamj > nCbHzEMS4JcN;) {
                    scanf ("%d", &Y87XYLCHy[wh4eCQu][nCbHzEMS4JcN]);
                    nCbHzEMS4JcN++;
                }
            }
            wh4eCQu++;
        }
    }
    y0nUpl1fO = (934 - 934);
    scanf ("%d %d", &Y48A0rp3slKP, &Fc9MGCq);
    {
        wh4eCQu = (799 - 584) - (799 - 584);
        for (; wh4eCQu < Y48A0rp3slKP;) {
            {
                nCbHzEMS4JcN = (743 - 142) - (1410 - 809);
                for (; Fc9MGCq > nCbHzEMS4JcN;) {
                    scanf ("%d", &RJ6zHVcECXI[wh4eCQu][nCbHzEMS4JcN]);
                    nCbHzEMS4JcN++;
                }
            }
            wh4eCQu++;
        }
    }
    {
        wh4eCQu = (1165 - 371) - (1371 - 577);
        for (; wh4eCQu < gFyUHxXW;) {
            {
                nCbHzEMS4JcN = (388 - 42) - (1114 - 768);
                while (Fc9MGCq > nCbHzEMS4JcN) {
                    y0nUpl1fO = (894 - 894);
                    for (; y0nUpl1fO < JPIsamj;) {
                        CMDIhvryFe0[wh4eCQu][nCbHzEMS4JcN] += Y87XYLCHy[wh4eCQu][y0nUpl1fO] * RJ6zHVcECXI[y0nUpl1fO][nCbHzEMS4JcN];
                        y0nUpl1fO++;
                    }
                    nCbHzEMS4JcN++;
                }
            }
            wh4eCQu++;
        }
    }
    {
        wh4eCQu = (307 - 307);
        while (wh4eCQu < gFyUHxXW) {
            {
                nCbHzEMS4JcN = (191 - 191);
                while (nCbHzEMS4JcN < Fc9MGCq) {
                    if (nCbHzEMS4JcN == (644 - 644)) {
                        printf ("%d", CMDIhvryFe0[wh4eCQu][nCbHzEMS4JcN]);
                    }
                    else {
                        printf (" %d", CMDIhvryFe0[wh4eCQu][nCbHzEMS4JcN]);
                    }
                    nCbHzEMS4JcN++;
                }
            }
            wh4eCQu++;
        }
    }
    return 0;
}

