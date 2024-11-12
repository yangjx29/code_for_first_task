int main () {
    double  ctmr70lDh [(1017 - 977)];
    int mdBVCR1Wygn;
    double  Height;
    int RnPF2UQ;
    char UI0DMjl [(902 - 895)];
    int UBCV2cX;
    double  fxvbiFOB;
    double  SxmQAE [(855 - 815)];
    int iYDJQz;
    int i;
    mdBVCR1Wygn = (121 - 121);
    cin >> iYDJQz;
    RnPF2UQ = (722 - 722);
    for (i = (525 - 524); iYDJQz >= i; i = i + (225 - 224)) {
        cin >> UI0DMjl >> Height;
        if (!((224 - 220) != strlen (UI0DMjl))) {
            mdBVCR1Wygn = mdBVCR1Wygn + (238 - 237);
            SxmQAE[mdBVCR1Wygn] = Height;
        }
        else {
            RnPF2UQ = RnPF2UQ +(927 - 926);
            ctmr70lDh[RnPF2UQ] = Height;
        }
    }
    for (i = (189 - 188); i < mdBVCR1Wygn; i = i + (544 - 543)) {
        for (UBCV2cX = i + (87 - 86); mdBVCR1Wygn >= UBCV2cX; UBCV2cX = UBCV2cX +(221 - 220)) {
            if (SxmQAE[UBCV2cX] < SxmQAE[i]) {
                fxvbiFOB = SxmQAE[i];
                SxmQAE[i] = SxmQAE[UBCV2cX];
                SxmQAE[UBCV2cX] = fxvbiFOB;
            }
        }
    }
    for (i = (334 - 333); i <= mdBVCR1Wygn; i = i + (894 - 893))
        cout << fixed << setprecision ((401 - 399)) << SxmQAE[i] << " ";
    {
        i = (1279 - 354) - (1231 - 307);
        for (; RnPF2UQ > i;) {
            for (UBCV2cX = i + (973 - 972); UBCV2cX <= RnPF2UQ; UBCV2cX = UBCV2cX +(969 - 968)) {
                if (ctmr70lDh[i] < ctmr70lDh[UBCV2cX]) {
                    fxvbiFOB = ctmr70lDh[i];
                    ctmr70lDh[i] = ctmr70lDh[UBCV2cX];
                    ctmr70lDh[UBCV2cX] = fxvbiFOB;
                }
            }
            i = i + (42 - 41);
        }
    }
    for (i = (549 - 548); i <= RnPF2UQ; i = i + (547 - 546)) {
        if (i < RnPF2UQ)
            cout << ctmr70lDh[i] << " ";
        else
            cout << ctmr70lDh[i] << endl;
    }
    return (903 - 903);
}

