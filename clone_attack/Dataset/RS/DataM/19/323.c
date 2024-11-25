int main () {
    char FJ8Aw6 [200], VvpuwKX9bs4A [200], F9z715Imt [200], Z9qDwNc [200];
    int nMC6PSWjGV = 0, lb, soK0TOJq, lc, bi = 0, ci = 0, di = 0, JBWSbAPyEi;
    gets (FJ8Aw6);
    puts (Z9qDwNc);
    scanf ("%s", &VvpuwKX9bs4A);
    lb = strlen (VvpuwKX9bs4A);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s", &F9z715Imt);
    soK0TOJq = strlen (FJ8Aw6);
    lc = strlen (F9z715Imt);
    for (; !(soK0TOJq == nMC6PSWjGV);) {
        bi = 0;
        ci = 0;
        if (!(0 == nMC6PSWjGV)) {
            if ((!(VvpuwKX9bs4A[bi] != FJ8Aw6[nMC6PSWjGV])) && (!(' ' != FJ8Aw6[nMC6PSWjGV - 1]))) {
                JBWSbAPyEi = nMC6PSWjGV;
                for (; (!(VvpuwKX9bs4A[bi] != FJ8Aw6[nMC6PSWjGV])) && (!(' ' == FJ8Aw6[nMC6PSWjGV])) && (FJ8Aw6[nMC6PSWjGV] != '\0');) {
                    bi = bi + 1;
                    nMC6PSWjGV = nMC6PSWjGV + 1;
                }
                if (bi == lb) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    for (; ci != lc;) {
                        Z9qDwNc[di] = F9z715Imt[ci];
                        ci++;
                        di = di + 1;
                    };
                }
                else {
                    nMC6PSWjGV = JBWSbAPyEi;
                    Z9qDwNc[di] = FJ8Aw6[nMC6PSWjGV];
                    di = di + 1;
                    nMC6PSWjGV = nMC6PSWjGV + 1;
                };
            }
            else {
                Z9qDwNc[di] = FJ8Aw6[nMC6PSWjGV];
                di = di + 1;
                nMC6PSWjGV = nMC6PSWjGV + 1;
            };
        }
        else if (FJ8Aw6[nMC6PSWjGV] == VvpuwKX9bs4A[bi]) {
            JBWSbAPyEi = nMC6PSWjGV;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (; FJ8Aw6[nMC6PSWjGV] == VvpuwKX9bs4A[bi];) {
                bi = bi + 1;
                nMC6PSWjGV = nMC6PSWjGV + 1;
            }
            if (bi == lb) {
                for (; ci != lc;) {
                    Z9qDwNc[di] = F9z715Imt[ci];
                    di = di + 1;
                    ci++;
                };
            }
            else {
                nMC6PSWjGV = JBWSbAPyEi;
                Z9qDwNc[di] = FJ8Aw6[nMC6PSWjGV];
                di = di + 1;
                nMC6PSWjGV = nMC6PSWjGV + 1;
            };
        }
        else {
            Z9qDwNc[di] = FJ8Aw6[nMC6PSWjGV];
            nMC6PSWjGV++;
            di = di + 1;
        };
    }
    Z9qDwNc[di] = '\0';
    return 0;
}

