int main () {
    char *MurwsHfA;
    int HG52uw;
    int iBnfSFYR;
    char *IexhlPpbM;
    char AhzrYTCWi [100000] = {0};
    char *AC16o5OKjBh = AhzrYTCWi;
    char *iks2ISXzj4;
    char *b4AhFvgcHV;
    int pDy2bMJ9ph3;
    iBnfSFYR = 0;
    pDy2bMJ9ph3 = INT_MAX;
    cin.getline (AhzrYTCWi, 100000);
    HG52uw = 0;
    for (; *AC16o5OKjBh; AC16o5OKjBh = AC16o5OKjBh +1) {
        if (('a' <= *AC16o5OKjBh&&*AC16o5OKjBh <= 'z') || (*AC16o5OKjBh >= 'A' && *AC16o5OKjBh <= 'Z'))
            HG52uw++;
        else {
            if (HG52uw > 0) {
                if (pDy2bMJ9ph3 > HG52uw) {
                    b4AhFvgcHV = AC16o5OKjBh -HG52uw;
                    iks2ISXzj4 = AC16o5OKjBh -1;
                    pDy2bMJ9ph3 = HG52uw;
                }
                if (HG52uw > iBnfSFYR) {
                    IexhlPpbM = AC16o5OKjBh -HG52uw;
                    MurwsHfA = AC16o5OKjBh -1;
                    iBnfSFYR = HG52uw;
                }
                HG52uw = 0;
            }
        }
    }
    if (HG52uw > 0) {
        if (HG52uw < pDy2bMJ9ph3) {
            b4AhFvgcHV = AC16o5OKjBh -HG52uw;
            pDy2bMJ9ph3 = HG52uw;
            iks2ISXzj4 = AC16o5OKjBh -1;
        }
        if (HG52uw > iBnfSFYR) {
            IexhlPpbM = AC16o5OKjBh -HG52uw;
            MurwsHfA = AC16o5OKjBh -1;
            iBnfSFYR = HG52uw;
        }
    }
    for (; IexhlPpbM <= MurwsHfA; IexhlPpbM = IexhlPpbM +1)
        cout << *IexhlPpbM;
    cout << endl;
    for (; b4AhFvgcHV <= iks2ISXzj4; b4AhFvgcHV++)
        cout << *b4AhFvgcHV;
}

