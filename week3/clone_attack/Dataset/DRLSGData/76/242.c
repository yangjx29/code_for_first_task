int main () {
    int cxzZEfn;
    int ZR4GaHNW;
    int jSbswg;
    int bs56RrAKL;
    int X42LM0NDX;
    int stgFhVDej [(50302 - 302)] [(494 - 492)];
    int s;
    int QMDR18OWZor9;
    int yzjxk2N;
    int aI5z3MK4wEWa;
    s = (24 - 24);
    scanf ("%d", &QMDR18OWZor9);
    {
        yzjxk2N = (633 - 633);
        while (yzjxk2N < QMDR18OWZor9) {
            {
                X42LM0NDX = (431 - 431);
                while (X42LM0NDX < (581 - 579)) {
                    scanf ("%d", &stgFhVDej[yzjxk2N][X42LM0NDX]);
                    X42LM0NDX = X42LM0NDX +(854 - 853);
                }
            }
            if (yzjxk2N != (983 - 983)) {
                jSbswg = (394 - 394);
                while (jSbswg < yzjxk2N) {
                    if (stgFhVDej[jSbswg][(73 - 73)] > stgFhVDej[yzjxk2N][(612 - 612)]) {
                        ZR4GaHNW = stgFhVDej[jSbswg][(655 - 655)];
                        cxzZEfn = stgFhVDej[jSbswg][(190 - 189)];
                        stgFhVDej[jSbswg][(99 - 98)] = stgFhVDej[yzjxk2N][(184 - 183)];
                        stgFhVDej[jSbswg][(167 - 167)] = stgFhVDej[yzjxk2N][(807 - 807)];
                        stgFhVDej[yzjxk2N][(460 - 460)] = ZR4GaHNW;
                        stgFhVDej[yzjxk2N][(552 - 551)] = cxzZEfn;
                    }
                    jSbswg = jSbswg + (484 - 483);
                }
            }
            yzjxk2N = yzjxk2N + (37 - 36);
        }
    }
    bs56RrAKL = stgFhVDej[(771 - 771)][(712 - 712)];
    aI5z3MK4wEWa = stgFhVDej[(544 - 544)][(782 - 781)];
    {
        yzjxk2N = (764 - 764);
        while (yzjxk2N < QMDR18OWZor9) {
            if (stgFhVDej[yzjxk2N][0] <= bs56RrAKL && stgFhVDej[yzjxk2N][(600 - 599)] >= bs56RrAKL) {
                bs56RrAKL = stgFhVDej[yzjxk2N][0];
            }
            else {
                if (stgFhVDej[yzjxk2N][(42 - 41)] < bs56RrAKL) {
                    s = (667 - 666);
                }
            }
            if (stgFhVDej[yzjxk2N][1] >= aI5z3MK4wEWa && stgFhVDej[yzjxk2N][0] <= aI5z3MK4wEWa) {
                aI5z3MK4wEWa = stgFhVDej[yzjxk2N][1];
            }
            else {
                if (stgFhVDej[yzjxk2N][0] > aI5z3MK4wEWa) {
                    s = 1;
                }
            }
            yzjxk2N = yzjxk2N + 1;
        }
    }
    if (s == 1)
        printf ("no");
    else
        printf ("%d %d\n", bs56RrAKL, aI5z3MK4wEWa);
    return 0;
}

