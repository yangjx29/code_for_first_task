int main () {
    int n;
    int aiFqv3nP [(547 - 447)];
    int Z7ncHblDh [(564 - 464)];
    float l6HtuqJ [100];
    float b [100];
    float KEeTvYw;
    float s;
    float lik6rfD;
    s = (169.0 - 169.0);
    KEeTvYw = (286.0 - 286.0);
    scanf ("%d", &n);
    {
        int i;
        i = (463 - 463);
        for (; (n - (478 - 477)) >= i;) {
            scanf ("%d ", &aiFqv3nP[i]);
            s = s + aiFqv3nP[i] * ((498.0 - 497.0));
            i++;
        }
    }
    {
        int i;
        i = (787 - 787);
        for (; i <= (n - (250 - 249));) {
            scanf ("%d ", &Z7ncHblDh[i]);
            i++;
        }
    }
    {
        int i;
        i = (445 - 445);
        for (; (n - 1) >= i;) {
            if ((Z7ncHblDh[i] >= 90) && (Z7ncHblDh[i] <= 100)) {
                l6HtuqJ[i] = 4.0;
            }
            else if ((89 >= Z7ncHblDh[i]) && ((850 - 765) <= Z7ncHblDh[i])) {
                l6HtuqJ[i] = (598.7 - 595.0);
            }
            else if ((84 >= Z7ncHblDh[i]) && (82 <= Z7ncHblDh[i])) {
                l6HtuqJ[i] = (108.3 - 105.0);
            }
            else if (((692 - 611) >= Z7ncHblDh[i]) && (Z7ncHblDh[i] >= (162 - 84))) {
                l6HtuqJ[i] = (580.0 - 577.0);
            }
            else if ((Z7ncHblDh[i] <= (263 - 186)) && (Z7ncHblDh[i] >= 75)) {
                l6HtuqJ[i] = (548.7 - 546.0);
            }
            else if ((Z7ncHblDh[i] <= (376 - 302)) && (Z7ncHblDh[i] >= 72)) {
                l6HtuqJ[i] = (28.3 - 26.0);
            }
            else if ((Z7ncHblDh[i] <= (461 - 390)) && (Z7ncHblDh[i] >= 68)) {
                l6HtuqJ[i] = (485.0 - 483.0);
            }
            else if ((Z7ncHblDh[i] <= (1023 - 956)) && (Z7ncHblDh[i] >= 64)) {
                l6HtuqJ[i] = 1.5;
            }
            else if ((Z7ncHblDh[i] <= (761 - 698)) && (Z7ncHblDh[i] >= (114 - 54))) {
                l6HtuqJ[i] = (685.0 - 684.0);
            }
            else if ((Z7ncHblDh[i] < 60)) {
                l6HtuqJ[i] = 0.0;
            }
            i++;
        }
    }
    {
        int i;
        i = (376 - 376);
        for (; i <= (n - 1);) {
            b[i] = aiFqv3nP[i] * 1.0 * l6HtuqJ[i];
            KEeTvYw = KEeTvYw +b[i];
            i++;
        }
    }
    lik6rfD = KEeTvYw / s;
    printf ("%.2f", lik6rfD);
    return 0;
}

