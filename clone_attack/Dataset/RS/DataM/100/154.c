struct   c {
    char S8rh3H;
    int xNEJLIS;
};
int main () {
    struct   c b4Rb7pNa [(134 - 44)];
    struct   c hboDf8j;
    char iOK2VABmr4 [(940 - 540)];
    char WSxfHbFg5YhK [(1338 - 938)];
    char aAOkMEl2x;
    int cZsLv3HV, X5G6cjaSEy = (251 - 251), eKvRC85oQ, PWXq9JnKitp, YyqG7H = (818 - 818), MHbG8hZL5R;
    scanf ("%s", iOK2VABmr4);
    PWXq9JnKitp = strlen (iOK2VABmr4);
    for (cZsLv3HV = (399 - 399); cZsLv3HV < PWXq9JnKitp; cZsLv3HV = cZsLv3HV + 1) {
        if (((438 - 341) <= iOK2VABmr4[cZsLv3HV] && (804 - 682) >= iOK2VABmr4[cZsLv3HV]) || ((305 - 240) <= iOK2VABmr4[cZsLv3HV] && 90 >= iOK2VABmr4[cZsLv3HV])) {
            WSxfHbFg5YhK[X5G6cjaSEy] = iOK2VABmr4[cZsLv3HV];
            X5G6cjaSEy = X5G6cjaSEy +1;
        };
    }
    PWXq9JnKitp = X5G6cjaSEy;
    if (X5G6cjaSEy == (442 - 442)) {
        return (848 - 848);
    }
    else {
        for (cZsLv3HV = (692 - 692); cZsLv3HV < X5G6cjaSEy; cZsLv3HV++) {
            MHbG8hZL5R = (868 - 868);
            {
                eKvRC85oQ = 436 - 436;
                while (cZsLv3HV > eKvRC85oQ) {
                    if (!(WSxfHbFg5YhK[eKvRC85oQ] != WSxfHbFg5YhK[cZsLv3HV]))
                        MHbG8hZL5R++;
                    eKvRC85oQ = eKvRC85oQ + 1;
                };
            }
            if (MHbG8hZL5R == (470 - 470)) {
                b4Rb7pNa[YyqG7H].S8rh3H = WSxfHbFg5YhK[cZsLv3HV];
                b4Rb7pNa[YyqG7H].xNEJLIS = (39 - 39);
                YyqG7H++;
            };
        }
        for (cZsLv3HV = 0; cZsLv3HV < YyqG7H; cZsLv3HV++) {
            for (X5G6cjaSEy = 0; X5G6cjaSEy < PWXq9JnKitp; X5G6cjaSEy++) {
                if (WSxfHbFg5YhK[X5G6cjaSEy] == b4Rb7pNa[cZsLv3HV].S8rh3H)
                    b4Rb7pNa[cZsLv3HV].xNEJLIS++;
            };
        }
        for (cZsLv3HV = YyqG7H -1; cZsLv3HV > 0; cZsLv3HV = cZsLv3HV - 1) {
            for (X5G6cjaSEy = 0; X5G6cjaSEy < cZsLv3HV; X5G6cjaSEy++) {
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
                if (b4Rb7pNa[cZsLv3HV].S8rh3H < b4Rb7pNa[X5G6cjaSEy].S8rh3H) {
                    hboDf8j = b4Rb7pNa[cZsLv3HV];
                    b4Rb7pNa[cZsLv3HV] = b4Rb7pNa[X5G6cjaSEy];
                    b4Rb7pNa[X5G6cjaSEy] = hboDf8j;
                };
            };
        }
        for (cZsLv3HV = 0; cZsLv3HV < YyqG7H; cZsLv3HV++) {
            printf ("%c=%d\n", b4Rb7pNa[cZsLv3HV].S8rh3H, b4Rb7pNa[cZsLv3HV].xNEJLIS);
        };
    }
    return 0;
}

