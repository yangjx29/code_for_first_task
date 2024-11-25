int main () {
    int XF8PonD, i, CCbNl0ra76, pcwxOZLd [(158 - 57)] [(502 - 401)], fCROj0, xTtzinm, iDZfeNnhvM, JE5lthoMLX;
    cin >> XF8PonD;
    {
        i = 163 - 162;
        while (i <= XF8PonD) {
            {
                CCbNl0ra76 = 1;
                while (XF8PonD >= CCbNl0ra76) {
                    cin >> pcwxOZLd[i][CCbNl0ra76];
                    if (!(0 != pcwxOZLd[i][CCbNl0ra76])) {
                        xTtzinm = CCbNl0ra76;
                        fCROj0 = i;
                    }
                    CCbNl0ra76++;
                }
            }
            i++;
        }
    }
    {
        i = 1;
        while (i <= fCROj0) {
            {
                CCbNl0ra76 = 1;
                while (CCbNl0ra76 <= xTtzinm) {
                    if (pcwxOZLd[i][CCbNl0ra76] == 0) {
                        iDZfeNnhvM = i;
                        JE5lthoMLX = CCbNl0ra76;
                        i = fCROj0;
                        break;
                    }
                    CCbNl0ra76++;
                }
            }
            i++;
        }
    }
    CCbNl0ra76 = (fCROj0 - iDZfeNnhvM - 1) * (xTtzinm - JE5lthoMLX -1);
    cout << CCbNl0ra76;
    return 0;
}

