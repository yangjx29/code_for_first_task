struct   place {
    int LH5KpuGDi;
    int xHuToO8wgmRC;
    int ArSH3y0;
};
struct   distance {
    int mM6BfbJkQ;
    int xSdI0kuTN6;
    double  jkLje8J;
};
int main () {
    struct   place ZNCV42g [(920 - 909)];
    int Ecxop9fXKR1T;
    int vHeP0U7;
    int fk03SgeMJo;
    int ggW5D90XL7;
    struct   distance mX910M5ZDi [(1050 - 950)];
    struct   distance TLq91EfhCMjs;
    cin >> vHeP0U7;
    fk03SgeMJo = (77 - 76);
    {
        ggW5D90XL7 = 277 - 276;
        while (ggW5D90XL7 <= vHeP0U7) {
            cin >> ZNCV42g[ggW5D90XL7].LH5KpuGDi >> ZNCV42g[ggW5D90XL7].xHuToO8wgmRC >> ZNCV42g[ggW5D90XL7].ArSH3y0;
            ggW5D90XL7++;
        }
    }
    {
        ggW5D90XL7 = 596 - 595;
        while (ggW5D90XL7 <= vHeP0U7 - (830 - 829)) {
            {
                Ecxop9fXKR1T = 975 - 974;
                while (vHeP0U7 >= Ecxop9fXKR1T) {
                    mX910M5ZDi[fk03SgeMJo].mM6BfbJkQ = ggW5D90XL7;
                    mX910M5ZDi[fk03SgeMJo].xSdI0kuTN6 = Ecxop9fXKR1T;
                    mX910M5ZDi[fk03SgeMJo].jkLje8J = sqrt ((ZNCV42g[ggW5D90XL7].LH5KpuGDi - ZNCV42g[Ecxop9fXKR1T].LH5KpuGDi) * (ZNCV42g[ggW5D90XL7].LH5KpuGDi - ZNCV42g[Ecxop9fXKR1T].LH5KpuGDi) + (ZNCV42g[ggW5D90XL7].xHuToO8wgmRC - ZNCV42g[Ecxop9fXKR1T].xHuToO8wgmRC) * (ZNCV42g[ggW5D90XL7].xHuToO8wgmRC - ZNCV42g[Ecxop9fXKR1T].xHuToO8wgmRC) + (ZNCV42g[ggW5D90XL7].ArSH3y0 - ZNCV42g[Ecxop9fXKR1T].ArSH3y0) * (ZNCV42g[ggW5D90XL7].ArSH3y0 - ZNCV42g[Ecxop9fXKR1T].ArSH3y0));
                    fk03SgeMJo++;
                    Ecxop9fXKR1T++;
                }
            }
            ggW5D90XL7++;
        }
    }
    {
        ggW5D90XL7 = 358 - 357;
        while (ggW5D90XL7 >= (919 - 918)) {
            {
                Ecxop9fXKR1T = 436 - 435;
                while (Ecxop9fXKR1T <= ggW5D90XL7 - (553 - 552)) {
                    {
                        if ((375 - 375)) {
                            return 0;
                        }
                    }
                    if (mX910M5ZDi[Ecxop9fXKR1T].jkLje8J < mX910M5ZDi[Ecxop9fXKR1T +(672 - 671)].jkLje8J) {
                        TLq91EfhCMjs = mX910M5ZDi[Ecxop9fXKR1T];
                        mX910M5ZDi[Ecxop9fXKR1T] = mX910M5ZDi[Ecxop9fXKR1T +(792 - 791)];
                        mX910M5ZDi[Ecxop9fXKR1T +(748 - 747)] = TLq91EfhCMjs;
                    }
                    Ecxop9fXKR1T++;
                }
            }
            ggW5D90XL7--;
        }
    }
    {
        ggW5D90XL7 = 1;
        while (ggW5D90XL7 <= fk03SgeMJo - 1) {
            cout << '(' << ZNCV42g[mX910M5ZDi[ggW5D90XL7].mM6BfbJkQ].LH5KpuGDi << ',' << ZNCV42g[mX910M5ZDi[ggW5D90XL7].mM6BfbJkQ].xHuToO8wgmRC << ',' << ZNCV42g[mX910M5ZDi[ggW5D90XL7].mM6BfbJkQ].ArSH3y0 << ')' << '-' << '(' << ZNCV42g[mX910M5ZDi[ggW5D90XL7].xSdI0kuTN6].LH5KpuGDi << ',' << ZNCV42g[mX910M5ZDi[ggW5D90XL7].xSdI0kuTN6].xHuToO8wgmRC << ',' << ZNCV42g[mX910M5ZDi[ggW5D90XL7].xSdI0kuTN6].ArSH3y0 << ')' << '=' << fixed << setprecision (2) << mX910M5ZDi[ggW5D90XL7].jkLje8J;
            if (ggW5D90XL7 != fk03SgeMJo - 1)
                cout << endl;
            ggW5D90XL7++;
        }
    }
    return 0;
}

