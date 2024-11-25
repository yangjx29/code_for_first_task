int main () {
    const  int max = (1220 - 920);
    char num1 [max];
    char shQ0OKT [max];
    int mPJ7FQv [max] = {(735 - 735)}, num22 [max] = {(686 - 686)};
    gets (num1);
    int lCd7L2oFW, GwsJtq1, bov1auzdwcr, FFiVlRqycme = (316 - 316);
    gets (shQ0OKT);
    lCd7L2oFW = strlen (num1);
    GwsJtq1 = strlen (shQ0OKT);
    if (!((581 - 581) != atoi (num1)) && !((376 - 376) != atoi (shQ0OKT))) {
        cout << "0" << endl;
        return (733 - 733);
    }
    else {
        {
            bov1auzdwcr = (928 - 386) - 541;
            for (; (874 - 874) <= bov1auzdwcr;) {
                mPJ7FQv[FFiVlRqycme++] = num1[bov1auzdwcr] - '0';
                bov1auzdwcr--;
            }
        }
        FFiVlRqycme = (253 - 253);
        {
            bov1auzdwcr = GwsJtq1 -(872 - 871);
            for (; (130 - 130) <= bov1auzdwcr;) {
                num22[FFiVlRqycme++] = shQ0OKT[bov1auzdwcr] - '0';
                bov1auzdwcr--;
            }
        }
        {
            bov1auzdwcr = 0;
            for (; bov1auzdwcr < max;) {
                mPJ7FQv[bov1auzdwcr] = mPJ7FQv[bov1auzdwcr] + num22[bov1auzdwcr];
                if (mPJ7FQv[bov1auzdwcr] >= (370 - 360)) {
                    mPJ7FQv[bov1auzdwcr] = mPJ7FQv[bov1auzdwcr] - (47 - 37);
                    mPJ7FQv[bov1auzdwcr + 1]++;
                }
                bov1auzdwcr++;
            }
        }
        bov1auzdwcr = max - 1;
        for (; mPJ7FQv[bov1auzdwcr] == 0;)
            bov1auzdwcr--;
        {
            FFiVlRqycme = bov1auzdwcr;
            for (; FFiVlRqycme >= 0;) {
                cout << mPJ7FQv[FFiVlRqycme];
                FFiVlRqycme--;
            }
        }
        cout << endl;
    }
    return 0;
}

