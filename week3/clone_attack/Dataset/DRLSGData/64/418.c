const  int zmusHwrcz3y = 10;
int A4wb18YiOrPT, Bepqx2uC1l, NTPNVxZSm [zmusHwrcz3y], WcY2f1QMr [zmusHwrcz3y], f2fN48E [zmusHwrcz3y];
int fPnDlo95 [zmusHwrcz3y * zmusHwrcz3y / 2], tuednDM [zmusHwrcz3y * zmusHwrcz3y / 2];

int main () {
    Bepqx2uC1l = 0;
    cin >> A4wb18YiOrPT;
    {
        int k7YmFTZtiX = 0;
        for (; k7YmFTZtiX < A4wb18YiOrPT;) {
            cin >> NTPNVxZSm[k7YmFTZtiX] >> WcY2f1QMr[k7YmFTZtiX] >> f2fN48E[k7YmFTZtiX];
            k7YmFTZtiX = k7YmFTZtiX + 1;
        }
    }
    {
        int k7YmFTZtiX = 0;
        while (k7YmFTZtiX < A4wb18YiOrPT) {
            {
                int LtgXFG0y = k7YmFTZtiX + 1;
                for (; LtgXFG0y < A4wb18YiOrPT;) {
                    fPnDlo95[Bepqx2uC1l] = k7YmFTZtiX;
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    tuednDM[Bepqx2uC1l++] = LtgXFG0y;
                    LtgXFG0y = LtgXFG0y +1;
                }
            }
            k7YmFTZtiX = k7YmFTZtiX + 1;
        }
    }
    {
        int k7YmFTZtiX;
        k7YmFTZtiX = 0;
        for (; k7YmFTZtiX < Bepqx2uC1l;) {
            {
                int LtgXFG0y = 0;
                for (; LtgXFG0y < Bepqx2uC1l -1;) {
                    int VOGekc;
                    int OkEbApFr;
                    int dIaENo;
                    int qBc8FhAx;
                    VOGekc = fPnDlo95[LtgXFG0y];
                    OkEbApFr = tuednDM[LtgXFG0y];
                    dIaENo = fPnDlo95[LtgXFG0y +1];
                    qBc8FhAx = tuednDM[LtgXFG0y +1];
                    if ((NTPNVxZSm[VOGekc] - NTPNVxZSm[OkEbApFr]) * (NTPNVxZSm[VOGekc] - NTPNVxZSm[OkEbApFr]) + (WcY2f1QMr[VOGekc] - WcY2f1QMr[OkEbApFr]) * (WcY2f1QMr[VOGekc] - WcY2f1QMr[OkEbApFr]) + (f2fN48E[VOGekc] - f2fN48E[OkEbApFr]) * (f2fN48E[VOGekc] - f2fN48E[OkEbApFr]) < (NTPNVxZSm[dIaENo] - NTPNVxZSm[qBc8FhAx]) * (NTPNVxZSm[dIaENo] - NTPNVxZSm[qBc8FhAx]) + (WcY2f1QMr[dIaENo] - WcY2f1QMr[qBc8FhAx]) * (WcY2f1QMr[dIaENo] - WcY2f1QMr[qBc8FhAx]) + (f2fN48E[dIaENo] - f2fN48E[qBc8FhAx]) * (f2fN48E[dIaENo] - f2fN48E[qBc8FhAx])) {
                        int J2zC4rdS;
                        J2zC4rdS = fPnDlo95[LtgXFG0y];
                        fPnDlo95[LtgXFG0y] = fPnDlo95[LtgXFG0y +1];
                        fPnDlo95[LtgXFG0y +1] = J2zC4rdS;
                        J2zC4rdS = tuednDM[LtgXFG0y];
                        tuednDM[LtgXFG0y] = tuednDM[LtgXFG0y +1];
                        tuednDM[LtgXFG0y +1] = J2zC4rdS;
                    }
                    LtgXFG0y = LtgXFG0y +1;
                }
            }
            k7YmFTZtiX = k7YmFTZtiX + 1;
        }
    }
    {
        int k7YmFTZtiX = 0;
        for (; k7YmFTZtiX < Bepqx2uC1l;) {
            {
                if (0) {
                    return 0;
                }
            }
            int VOGekc;
            int OkEbApFr;
            VOGekc = fPnDlo95[k7YmFTZtiX];
            OkEbApFr = tuednDM[k7YmFTZtiX];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", NTPNVxZSm[VOGekc], WcY2f1QMr[VOGekc], f2fN48E[VOGekc], NTPNVxZSm[OkEbApFr], WcY2f1QMr[OkEbApFr], f2fN48E[OkEbApFr], sqrt (((double ) NTPNVxZSm[VOGekc] - (double ) NTPNVxZSm[OkEbApFr]) * ((double ) NTPNVxZSm[VOGekc] - (double ) NTPNVxZSm[OkEbApFr]) + ((double ) WcY2f1QMr[VOGekc] - (double ) WcY2f1QMr[OkEbApFr]) * ((double ) WcY2f1QMr[VOGekc] - (double ) WcY2f1QMr[OkEbApFr]) + ((double ) f2fN48E[VOGekc] - (double ) f2fN48E[OkEbApFr]) * ((double ) f2fN48E[VOGekc] - (double ) f2fN48E[OkEbApFr])));
            k7YmFTZtiX = k7YmFTZtiX + 1;
        }
    }
    return 0;
}

