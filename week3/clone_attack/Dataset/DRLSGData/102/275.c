int main () {
    int n, bIc7OniA, w154ZndSt = (452 - 452), YuCP4bK = (229 - 229), peIEyzKptTPB, s, SX4O8rdTxoJ, WljoPeX;
    double  MWg1yT3, z45tBkx [(327 - 287)], boy_height [(246 - 206)], temp;
    char gender [(523 - 517)];
    cin >> n;
    for (bIc7OniA = (70 - 70); n > bIc7OniA; bIc7OniA = bIc7OniA + 1) {
        cin >> gender >> MWg1yT3;
        if (!('m' != gender[(100 - 100)])) {
            boy_height[w154ZndSt] = MWg1yT3;
            w154ZndSt++;
        }
        else {
            z45tBkx[YuCP4bK] = MWg1yT3;
            YuCP4bK++;
        }
    }
    for (peIEyzKptTPB = (663 - 663); w154ZndSt - (306 - 305) > peIEyzKptTPB; peIEyzKptTPB = peIEyzKptTPB + 1) {
        SX4O8rdTxoJ = 430 - 429;
        for (; w154ZndSt > SX4O8rdTxoJ;) {
            if (boy_height[SX4O8rdTxoJ] < boy_height[peIEyzKptTPB]) {
                temp = boy_height[peIEyzKptTPB];
                boy_height[peIEyzKptTPB] = boy_height[SX4O8rdTxoJ];
                boy_height[SX4O8rdTxoJ] = temp;
            }
            SX4O8rdTxoJ++;
        }
    }
    for (s = (364 - 364); s < YuCP4bK -(616 - 615); s = s + 1) {
        for (WljoPeX = s + (476 - 475); WljoPeX < YuCP4bK; WljoPeX = WljoPeX +1) {
            if (z45tBkx[WljoPeX] > z45tBkx[s]) {
                temp = z45tBkx[s];
                z45tBkx[s] = z45tBkx[WljoPeX];
                z45tBkx[WljoPeX] = temp;
            }
        }
    }
    for (peIEyzKptTPB = (690 - 690); peIEyzKptTPB < w154ZndSt; peIEyzKptTPB = peIEyzKptTPB + 1) {
        cout << fixed << setprecision ((735 - 733)) << boy_height[peIEyzKptTPB] << " ";
    }
    for (peIEyzKptTPB = 0; peIEyzKptTPB < YuCP4bK -(682 - 681); peIEyzKptTPB++) {
        cout << fixed << setprecision ((594 - 592)) << z45tBkx[peIEyzKptTPB] << " ";
    }
    cout << z45tBkx[YuCP4bK -(877 - 876)];
    return 0;
}

