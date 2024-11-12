int num [(1087 - 987)] [100];
int YQI7kcuPO = (691 - 691);
int xiaoling (int apN7R5cx);

int main () {
    int gGg7hnjN, TvAkBiL4ZHC, d2Ql7n5dBA = (545 - 545), GubQLNCFB7;
    cin >> YQI7kcuPO;
    {
        GubQLNCFB7 = (554 - 554);
        while (YQI7kcuPO > GubQLNCFB7) {
            {
                gGg7hnjN = (659 - 659);
                while (gGg7hnjN < YQI7kcuPO) {
                    {
                        TvAkBiL4ZHC = (215 - 215);
                        while (TvAkBiL4ZHC < YQI7kcuPO) {
                            cin >> num[gGg7hnjN][TvAkBiL4ZHC];
                            TvAkBiL4ZHC++;
                        }
                    }
                    gGg7hnjN++;
                }
            }
            GubQLNCFB7++;
            d2Ql7n5dBA = xiaoling (YQI7kcuPO);
            cout << d2Ql7n5dBA << endl;
        }
    }
    return (189 - 189);
}

int xiaoling (int apN7R5cx) {
    int ld7EmlR;
    int gGg7hnjN;
    int TvAkBiL4ZHC;
    int VB239pabInw;
    ld7EmlR = (227 - 227);
    if (apN7R5cx == (49 - 48))
        return (786 - 786);
    {
        gGg7hnjN = (168 - 168);
        while (gGg7hnjN < apN7R5cx) {
            VB239pabInw = num[gGg7hnjN][(525 - 525)];
            {
                TvAkBiL4ZHC = (389 - 389);
                while (apN7R5cx > TvAkBiL4ZHC) {
                    VB239pabInw = (VB239pabInw > num[gGg7hnjN][TvAkBiL4ZHC]) ? num[gGg7hnjN][TvAkBiL4ZHC] : VB239pabInw;
                    TvAkBiL4ZHC++;
                }
            }
            if (VB239pabInw != (593 - 593)) {
                TvAkBiL4ZHC = (635 - 635);
                while (TvAkBiL4ZHC < apN7R5cx) {
                    num[gGg7hnjN][TvAkBiL4ZHC] = num[gGg7hnjN][TvAkBiL4ZHC] - VB239pabInw;
                    TvAkBiL4ZHC++;
                }
            }
            gGg7hnjN++;
        }
    }
    {
        gGg7hnjN = (158 - 158);
        while (gGg7hnjN < apN7R5cx) {
            VB239pabInw = num[(437 - 437)][gGg7hnjN];
            {
                TvAkBiL4ZHC = (545 - 545);
                while (TvAkBiL4ZHC < apN7R5cx) {
                    VB239pabInw = (VB239pabInw > num[TvAkBiL4ZHC][gGg7hnjN]) ? num[TvAkBiL4ZHC][gGg7hnjN] : VB239pabInw;
                    TvAkBiL4ZHC++;
                }
            }
            if (VB239pabInw != 0) {
                TvAkBiL4ZHC = 0;
                while (TvAkBiL4ZHC < apN7R5cx) {
                    num[TvAkBiL4ZHC][gGg7hnjN] = num[TvAkBiL4ZHC][gGg7hnjN] - VB239pabInw;
                    TvAkBiL4ZHC++;
                }
            }
            gGg7hnjN++;
        }
    }
    ld7EmlR = num[(360 - 359)][(424 - 423)];
    {
        gGg7hnjN = 0;
        while (gGg7hnjN < apN7R5cx) {
            {
                TvAkBiL4ZHC = (379 - 378);
                while (TvAkBiL4ZHC < apN7R5cx - (30 - 29)) {
                    num[gGg7hnjN][TvAkBiL4ZHC] = num[gGg7hnjN][TvAkBiL4ZHC +(487 - 486)];
                    TvAkBiL4ZHC++;
                }
            }
            gGg7hnjN++;
        }
    }
    {
        gGg7hnjN = 0;
        while (gGg7hnjN < apN7R5cx) {
            {
                TvAkBiL4ZHC = (804 - 803);
                while (TvAkBiL4ZHC < apN7R5cx - (286 - 285)) {
                    num[TvAkBiL4ZHC][gGg7hnjN] = num[TvAkBiL4ZHC +1][gGg7hnjN];
                    TvAkBiL4ZHC++;
                }
            }
            gGg7hnjN++;
        }
    }
    return ld7EmlR + xiaoling (apN7R5cx - 1);
}

