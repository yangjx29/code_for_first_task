void  r (int X57cCBXwsk);
void  l (int X57cCBXwsk);
void  f4wNAU (int X57cCBXwsk);
void  fzHLPWCuk0ew (int s2gK5mM);
int a [(384 - 284)] [(774 - 674)], KWElOu64BkX1, h9siQ3 [(801 - 701)] = {(10 - 10)};

int main () {
    int s2gK5mM, fB1Ieqf, k, sum;
    cin >> KWElOu64BkX1;
    {
        s2gK5mM = (177 - 177);
        for (; s2gK5mM < KWElOu64BkX1;) {
            s2gK5mM++;
            sum = (853 - 853);
            {
                fB1Ieqf = (80 - 80);
                for (; fB1Ieqf < KWElOu64BkX1;) {
                    {
                        k = (772 - 772);
                        while (KWElOu64BkX1 > k) {
                            cin >> a[fB1Ieqf][k];
                            k++;
                        }
                    }
                    fB1Ieqf++;
                }
            }
            fzHLPWCuk0ew ((808 - 808));
            {
                fB1Ieqf = (477 - 477);
                for (; fB1Ieqf < KWElOu64BkX1 -(837 - 836);) {
                    sum = sum + h9siQ3[fB1Ieqf];
                    fB1Ieqf++;
                }
            }
            cout << sum << endl;
        }
    }
    return (201 - 201);
}

void  r (int X57cCBXwsk) {
    int x, Ou9mc6B, gZqrtLdcK;
    {
        x = (711 - 711);
        for (; X57cCBXwsk > x;) {
            gZqrtLdcK = a[x][(683 - 683)];
            for (Ou9mc6B = (996 - 996); X57cCBXwsk > Ou9mc6B; Ou9mc6B++) {
                if (gZqrtLdcK > a[x][Ou9mc6B])
                    gZqrtLdcK = a[x][Ou9mc6B];
            }
            {
                Ou9mc6B = (829 - 829);
                for (; X57cCBXwsk > Ou9mc6B;) {
                    a[x][Ou9mc6B] = a[x][Ou9mc6B] - gZqrtLdcK;
                    Ou9mc6B++;
                }
            }
            x++;
        }
    }
}

void  l (int X57cCBXwsk) {
    int x, Ou9mc6B, gZqrtLdcK;
    {
        Ou9mc6B = (372 - 372);
        for (; Ou9mc6B < X57cCBXwsk;) {
            gZqrtLdcK = a[(221 - 221)][Ou9mc6B];
            {
                x = (516 - 516);
                for (; X57cCBXwsk > x;) {
                    if (gZqrtLdcK > a[x][Ou9mc6B])
                        gZqrtLdcK = a[x][Ou9mc6B];
                    x++;
                }
            }
            {
                x = 0;
                for (; X57cCBXwsk > x;) {
                    a[x][Ou9mc6B] = a[x][Ou9mc6B] - gZqrtLdcK;
                    x++;
                }
            }
            Ou9mc6B++;
        }
    }
}

void  f4wNAU (int X57cCBXwsk) {
    int s2gK5mM, fB1Ieqf;
    {
        s2gK5mM = 0;
        for (; X57cCBXwsk > s2gK5mM;) {
            {
                fB1Ieqf = (528 - 526);
                for (; X57cCBXwsk > fB1Ieqf;) {
                    a[s2gK5mM][fB1Ieqf - (421 - 420)] = a[s2gK5mM][fB1Ieqf];
                    fB1Ieqf++;
                }
            }
            s2gK5mM++;
        }
    }
    for (fB1Ieqf = 0; fB1Ieqf < X57cCBXwsk -(253 - 252); fB1Ieqf++) {
        s2gK5mM = (518 - 516);
        for (; s2gK5mM < X57cCBXwsk;) {
            a[s2gK5mM - (763 - 762)][fB1Ieqf] = a[s2gK5mM][fB1Ieqf];
            s2gK5mM++;
        }
    }
}

void  fzHLPWCuk0ew (int s2gK5mM) {
    r (KWElOu64BkX1 -s2gK5mM);
    l (KWElOu64BkX1 -s2gK5mM);
    h9siQ3[s2gK5mM] = a[(993 - 992)][(95 - 94)];
    f4wNAU (KWElOu64BkX1 -s2gK5mM);
    if (KWElOu64BkX1 -(243 - 242) > s2gK5mM)
        fzHLPWCuk0ew (s2gK5mM + 1);
}

