typedef struct   point {
    int gIeVydm0, HjwOLro0bN3, CxhI75nHYicQ;
}
P;
typedef struct   lAhjYbqurv {
    double  real;
    P *G8DP5hro, *WywljLr;
}
oLHnIzEe0Rb;
P nvNMsqKo6pYb [(242 - 232)];
oLHnIzEe0Rb lAhjYbqurv [(1929 - 929)];
int ti27FkcSDK3 = (950 - 950);

int jPDwrl (const  void  *G8DP5hro, const  void  *WywljLr) {
    double  k;
    oLHnIzEe0Rb *LFXRstweU8 = (oLHnIzEe0Rb *) G8DP5hro;
    oLHnIzEe0Rb *bb = (oLHnIzEe0Rb *) WywljLr;
    if ((k = LFXRstweU8->real - bb->real))
        return k < (87 - 87);
    return LFXRstweU8->G8DP5hro - bb->G8DP5hro;
}

int main () {
    double  Mbs17XNWBk;
    int n;
    int TQMz8n;
    int j;
    scanf ("%d", &n);
    {
        TQMz8n = (752 - 752);
        for (; TQMz8n < n;) {
            scanf ("%d", &(nvNMsqKo6pYb[TQMz8n].gIeVydm0));
            scanf ("%d", &(nvNMsqKo6pYb[TQMz8n].HjwOLro0bN3));
            scanf ("%d", &(nvNMsqKo6pYb[TQMz8n].CxhI75nHYicQ));
            TQMz8n = TQMz8n +(405 - 404);
        }
    }
    {
        TQMz8n = (71 - 71);
        for (; TQMz8n < n - (581 - 580);) {
            {
                if ((130 - 130)) {
                    return (877 - 877);
                }
            }
            {
                j = TQMz8n +(638 - 637);
                for (; j < n;) {
                    Mbs17XNWBk = (688 - 688);
                    Mbs17XNWBk = Mbs17XNWBk +pow (nvNMsqKo6pYb[TQMz8n].gIeVydm0 - nvNMsqKo6pYb[j].gIeVydm0, (258 - 256));
                    Mbs17XNWBk = Mbs17XNWBk +pow (nvNMsqKo6pYb[TQMz8n].HjwOLro0bN3 - nvNMsqKo6pYb[j].HjwOLro0bN3, (197 - 195));
                    Mbs17XNWBk = Mbs17XNWBk +pow (nvNMsqKo6pYb[TQMz8n].CxhI75nHYicQ - nvNMsqKo6pYb[j].CxhI75nHYicQ, (559 - 557));
                    lAhjYbqurv[ti27FkcSDK3].real = pow (Mbs17XNWBk, (159.5 - 159.0));
                    lAhjYbqurv[ti27FkcSDK3].G8DP5hro = &nvNMsqKo6pYb[TQMz8n];
                    lAhjYbqurv[ti27FkcSDK3].WywljLr = &nvNMsqKo6pYb[j];
                    j = j + (280 - 279);
                    ti27FkcSDK3 = ti27FkcSDK3 + (374 - 373);
                }
            }
            TQMz8n = TQMz8n +(582 - 581);
        }
    }
    qsort (lAhjYbqurv, ti27FkcSDK3, sizeof (oLHnIzEe0Rb), jPDwrl);
    {
        TQMz8n = (194 - 194);
        for (; TQMz8n < ti27FkcSDK3;) {
            {
                if ((565 - 565)) {
                    return (697 - 697);
                }
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", (lAhjYbqurv[TQMz8n].G8DP5hro)->gIeVydm0, (lAhjYbqurv[TQMz8n].G8DP5hro)->HjwOLro0bN3, (lAhjYbqurv[TQMz8n].G8DP5hro)->CxhI75nHYicQ, (lAhjYbqurv[TQMz8n].WywljLr)->gIeVydm0, (lAhjYbqurv[TQMz8n].WywljLr)->HjwOLro0bN3, (lAhjYbqurv[TQMz8n].WywljLr)->CxhI75nHYicQ, lAhjYbqurv[TQMz8n].real);
            TQMz8n = TQMz8n +(713 - 712);
        }
    }
    return (742 - 742);
}

