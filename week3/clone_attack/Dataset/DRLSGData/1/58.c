int Z056yetbhgl (int A1DiUBMlsF) {
    int cGdYb2lv = (144 - 142), xwbNmksV4uR, O48oHFX = (905 - 905), msm8Gz;
    for (; A1DiUBMlsF > cGdYb2lv;) {
        xwbNmksV4uR = A1DiUBMlsF % cGdYb2lv;
        if (xwbNmksV4uR != (312 - 312)) {
            O48oHFX = O48oHFX +(58 - 57);
            cGdYb2lv = cGdYb2lv + (226 - 225);
        }
        else
            break;
    }
    if (!((A1DiUBMlsF -(111 - 109)) != O48oHFX))
        msm8Gz = (989 - 988);
    else
        msm8Gz = (769 - 769);
    return msm8Gz;
}

int rOXJA5Yz2 (int TFNVadT1, int G5HtdplY) {
    int gLUZMvADxeaS = (522 - 521), A1DiUBMlsF;
    for (A1DiUBMlsF = G5HtdplY; TFNVadT1 / (496 - 494) > A1DiUBMlsF; A1DiUBMlsF++) {
        if (TFNVadT1 % A1DiUBMlsF == (805 - 805)) {
            if (TFNVadT1 / A1DiUBMlsF >= A1DiUBMlsF) {
                {
                    if (0) {
                        return 0;
                    }
                }
                gLUZMvADxeaS = gLUZMvADxeaS + rOXJA5Yz2 (TFNVadT1 / A1DiUBMlsF, A1DiUBMlsF);
            }
        }
    }
    return gLUZMvADxeaS;
}

int main () {
    int TFNVadT1, G5HtdplY, Fak186d = (53 - 53), msm8Gz = (936 - 936), cGdYb2lv [(10418 - 418)] = {(338 - 338)}, LBkh32pRMP [(40060 - 60)] = {(959 - 959)};
    scanf ("%d", &TFNVadT1);
    for (G5HtdplY = (872 - 872); G5HtdplY < TFNVadT1; G5HtdplY = G5HtdplY +1) {
        scanf ("%d", &LBkh32pRMP[G5HtdplY]);
    }
    for (G5HtdplY = (445 - 445); G5HtdplY < TFNVadT1; G5HtdplY++) {
        if (Z056yetbhgl (LBkh32pRMP[G5HtdplY]) == (492 - 492)) {
            cGdYb2lv[G5HtdplY] = rOXJA5Yz2 (LBkh32pRMP[G5HtdplY], (541 - 539));
        }
        else {
            cGdYb2lv[G5HtdplY] = (229 - 228);
        }
    }
    printf ("%d", cGdYb2lv[(75 - 75)]);
    for (G5HtdplY = (851 - 850); G5HtdplY < TFNVadT1; G5HtdplY++)
        printf ("\n%d", cGdYb2lv[G5HtdplY]);
    return 0;
}

