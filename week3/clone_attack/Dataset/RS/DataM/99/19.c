int main () {
    double  vLa13wREO, FAKWJY, bzKqnsGu8Z, N5phmqd;
    int h8CVRpuF;
    int SeDOG0SA;
    int fL4cYKvZCX1;
    int e;
    int gItBg49;
    int bGUWeftY [100];
    int NaxTwUyo6E;
    h8CVRpuF = 0;
    SeDOG0SA = 0;
    fL4cYKvZCX1 = 0;
    e = 0;
    scanf ("%d", &gItBg49);
    {
        NaxTwUyo6E = 0;
        while (gItBg49 > NaxTwUyo6E) {
            scanf ("%d", &bGUWeftY[NaxTwUyo6E]);
            if (bGUWeftY[NaxTwUyo6E] > 0 && bGUWeftY[NaxTwUyo6E] < 19) {
                h8CVRpuF = h8CVRpuF + 1;
            }
            else {
                if (bGUWeftY[NaxTwUyo6E] > 18 && bGUWeftY[NaxTwUyo6E] < 36) {
                    SeDOG0SA = SeDOG0SA +1;
                }
                else {
                    if (bGUWeftY[NaxTwUyo6E] > 35 && bGUWeftY[NaxTwUyo6E] < 61) {
                        fL4cYKvZCX1 = fL4cYKvZCX1 + 1;
                    }
                    else {
                        e = e + 1;
                    };
                };
            }
            NaxTwUyo6E++;
        };
    }
    vLa13wREO = (double ) h8CVRpuF / gItBg49 * 100;
    FAKWJY = (double ) SeDOG0SA / gItBg49 * 100;
    bzKqnsGu8Z = (double ) fL4cYKvZCX1 / gItBg49 * 100;
    N5phmqd = (double ) e / gItBg49 * 100;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%", vLa13wREO, FAKWJY, bzKqnsGu8Z, N5phmqd);
    return 0;
}

