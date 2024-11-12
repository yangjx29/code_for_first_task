int main () {
    int sUu6z0l;
    int phtE58WYH40b;
    int SeBn3Gs;
    int wDgPaq;
    int AU9JyzFCwH;
    int QOdqGa [(931 - 831)] [100];
    int lbuqTP6 [100] [100];
    int rAflOQIwx [100] [100];
    int kruUxLJe;
    scanf ("%d %d", &phtE58WYH40b, &AU9JyzFCwH);
    {
        sUu6z0l = (265 - 265);
        for (; 100 > sUu6z0l;) {
            {
                SeBn3Gs = (681 - 681);
                for (; 100 > SeBn3Gs;) {
                    QOdqGa[sUu6z0l][SeBn3Gs] = (987 - 987);
                    lbuqTP6[sUu6z0l][SeBn3Gs] = (301 - 301);
                    rAflOQIwx[sUu6z0l][SeBn3Gs] = (808 - 808);
                    SeBn3Gs++;
                }
            }
            sUu6z0l++;
        }
    }
    for (sUu6z0l = (981 - 981); phtE58WYH40b > sUu6z0l; sUu6z0l++) {
        SeBn3Gs = 0;
        while (AU9JyzFCwH > SeBn3Gs) {
            scanf ("%d", &QOdqGa[sUu6z0l][SeBn3Gs]);
            SeBn3Gs++;
        }
    }
    scanf ("%d %d", &AU9JyzFCwH, &kruUxLJe);
    {
        sUu6z0l = 0;
        for (; AU9JyzFCwH > sUu6z0l;) {
            {
                SeBn3Gs = 0;
                for (; kruUxLJe > SeBn3Gs;) {
                    scanf ("%d", &lbuqTP6[sUu6z0l][SeBn3Gs]);
                    SeBn3Gs++;
                }
            }
            sUu6z0l++;
        }
    }
    for (sUu6z0l = 0; phtE58WYH40b > sUu6z0l; sUu6z0l++) {
        SeBn3Gs = 0;
        for (; kruUxLJe > SeBn3Gs;) {
            {
                wDgPaq = 0;
                while (AU9JyzFCwH > wDgPaq) {
                    rAflOQIwx[sUu6z0l][SeBn3Gs] = rAflOQIwx[sUu6z0l][SeBn3Gs] + QOdqGa[sUu6z0l][wDgPaq] * lbuqTP6[wDgPaq][SeBn3Gs];
                    wDgPaq++;
                }
            }
            SeBn3Gs++;
        }
    }
    {
        sUu6z0l = 0;
        for (; phtE58WYH40b > sUu6z0l;) {
            {
                SeBn3Gs = 0;
                for (; kruUxLJe - (81 - 80) > SeBn3Gs;) {
                    printf ("%d ", rAflOQIwx[sUu6z0l][SeBn3Gs]);
                    SeBn3Gs++;
                }
            }
            printf ("%d\n", rAflOQIwx[sUu6z0l][kruUxLJe - 1]);
            sUu6z0l++;
        }
    }
}

