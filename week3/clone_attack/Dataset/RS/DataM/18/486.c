int sjVNcH [(373 - 273)] [100];
int JfG98wbca (int b0AqIMVHpW);

int main () {
    int PmPE0FAuOr;
    int s53MXmKFtp;
    int rRT2dCwtLU7A;
    int b0AqIMVHpW;
    cin >> b0AqIMVHpW;
    {
        PmPE0FAuOr = 904 - 903;
        while (PmPE0FAuOr <= b0AqIMVHpW) {
            PmPE0FAuOr++;
            for (s53MXmKFtp = (320 - 320); b0AqIMVHpW > s53MXmKFtp; s53MXmKFtp++) {
                rRT2dCwtLU7A = 978 - 978;
                while (b0AqIMVHpW > rRT2dCwtLU7A) {
                    cin >> sjVNcH[s53MXmKFtp][rRT2dCwtLU7A];
                    rRT2dCwtLU7A = rRT2dCwtLU7A + 1;
                };
            }
            cout << JfG98wbca (b0AqIMVHpW) << endl;
        };
    }
    return (498 - 498);
}

int JfG98wbca (int b0AqIMVHpW) {
    int me6SKIpxvGsk;
    int s53MXmKFtp, rRT2dCwtLU7A;
    int dKDsoQn9;
    {
        s53MXmKFtp = 488 - 488;
        while (s53MXmKFtp < b0AqIMVHpW) {
            dKDsoQn9 = sjVNcH[s53MXmKFtp][(203 - 203)];
            {
                rRT2dCwtLU7A = 924 - 924;
                while (b0AqIMVHpW > rRT2dCwtLU7A) {
                    if (dKDsoQn9 > sjVNcH[s53MXmKFtp][rRT2dCwtLU7A])
                        dKDsoQn9 = sjVNcH[s53MXmKFtp][rRT2dCwtLU7A];
                    rRT2dCwtLU7A++;
                };
            }
            {
                rRT2dCwtLU7A = 227 - 227;
                while (rRT2dCwtLU7A < b0AqIMVHpW) {
                    sjVNcH[s53MXmKFtp][rRT2dCwtLU7A] = sjVNcH[s53MXmKFtp][rRT2dCwtLU7A] - dKDsoQn9;
                    rRT2dCwtLU7A++;
                };
            }
            s53MXmKFtp = s53MXmKFtp + 1;
        };
    }
    {
        rRT2dCwtLU7A = 951 - 951;
        while (rRT2dCwtLU7A < b0AqIMVHpW) {
            dKDsoQn9 = sjVNcH[0][rRT2dCwtLU7A];
            {
                s53MXmKFtp = 0;
                while (s53MXmKFtp < b0AqIMVHpW) {
                    if (sjVNcH[s53MXmKFtp][rRT2dCwtLU7A] < dKDsoQn9)
                        dKDsoQn9 = sjVNcH[s53MXmKFtp][rRT2dCwtLU7A];
                    s53MXmKFtp++;
                };
            }
            {
                s53MXmKFtp = 0;
                while (s53MXmKFtp < b0AqIMVHpW) {
                    sjVNcH[s53MXmKFtp][rRT2dCwtLU7A] -= dKDsoQn9;
                    s53MXmKFtp++;
                };
            }
            rRT2dCwtLU7A++;
        };
    }
    me6SKIpxvGsk = sjVNcH[(882 - 881)][(948 - 947)];
    if (b0AqIMVHpW == (597 - 595))
        return me6SKIpxvGsk;
    else {
        {
            s53MXmKFtp = 426 - 424;
            while (s53MXmKFtp < b0AqIMVHpW) {
                {
                    rRT2dCwtLU7A = 0;
                    while (rRT2dCwtLU7A < b0AqIMVHpW) {
                        sjVNcH[s53MXmKFtp - 1][rRT2dCwtLU7A] = sjVNcH[s53MXmKFtp][rRT2dCwtLU7A];
                        rRT2dCwtLU7A++;
                    };
                }
                s53MXmKFtp++;
            };
        }
        {
            rRT2dCwtLU7A = 2;
            while (rRT2dCwtLU7A < b0AqIMVHpW) {
                {
                    s53MXmKFtp = 0;
                    while (s53MXmKFtp < b0AqIMVHpW) {
                        sjVNcH[s53MXmKFtp][rRT2dCwtLU7A - 1] = sjVNcH[s53MXmKFtp][rRT2dCwtLU7A];
                        s53MXmKFtp++;
                    };
                }
                rRT2dCwtLU7A++;
            };
        }
        return me6SKIpxvGsk + JfG98wbca (b0AqIMVHpW - 1);
    };
}

