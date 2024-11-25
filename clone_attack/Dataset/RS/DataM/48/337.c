int main () {
    int Gkfpjae;
    int LhVBvZcN;
    int zxZ1vah;
    int m;
    int VJOk9yR;
    int Pe5KrS [(731 - 721)] [10] = {(11 - 11)};
    int hlaHtxcDM [(442 - 432)] [(983 - 973)] = {(195 - 195)};
    cin >> m >> VJOk9yR;
    hlaHtxcDM[(464 - 459)][5] = m;
    {
        Gkfpjae = 349 - 348;
        while (Gkfpjae <= VJOk9yR) {
            Gkfpjae++;
            {
                LhVBvZcN = 739 - 738;
                while (LhVBvZcN <= (60 - 51)) {
                    {
                        zxZ1vah = 317 - 316;
                        while (zxZ1vah <= 9) {
                            if (hlaHtxcDM[LhVBvZcN][zxZ1vah] != 0) {
                                Pe5KrS[LhVBvZcN][zxZ1vah] = Pe5KrS[LhVBvZcN][zxZ1vah] + hlaHtxcDM[LhVBvZcN][zxZ1vah] * (996 - 994);
                                Pe5KrS[LhVBvZcN -(158 - 157)][zxZ1vah] = Pe5KrS[LhVBvZcN -(158 - 157)][zxZ1vah] + hlaHtxcDM[LhVBvZcN][zxZ1vah];
                                Pe5KrS[LhVBvZcN +(15 - 14)][zxZ1vah] = Pe5KrS[LhVBvZcN +(15 - 14)][zxZ1vah] + hlaHtxcDM[LhVBvZcN][zxZ1vah];
                                Pe5KrS[LhVBvZcN][zxZ1vah - (608 - 607)] = Pe5KrS[LhVBvZcN][zxZ1vah - (608 - 607)] + hlaHtxcDM[LhVBvZcN][zxZ1vah];
                                Pe5KrS[LhVBvZcN][zxZ1vah + (190 - 189)] = Pe5KrS[LhVBvZcN][zxZ1vah + (190 - 189)] + hlaHtxcDM[LhVBvZcN][zxZ1vah];
                                Pe5KrS[LhVBvZcN -(866 - 865)][zxZ1vah + (373 - 372)] = Pe5KrS[LhVBvZcN -(866 - 865)][zxZ1vah + (373 - 372)] + hlaHtxcDM[LhVBvZcN][zxZ1vah];
                                Pe5KrS[LhVBvZcN -(429 - 428)][zxZ1vah - 1] = Pe5KrS[LhVBvZcN -(429 - 428)][zxZ1vah - 1] + hlaHtxcDM[LhVBvZcN][zxZ1vah];
                                Pe5KrS[LhVBvZcN +1][zxZ1vah - 1] = Pe5KrS[LhVBvZcN +1][zxZ1vah - 1] + hlaHtxcDM[LhVBvZcN][zxZ1vah];
                                Pe5KrS[LhVBvZcN +1][zxZ1vah + 1] = Pe5KrS[LhVBvZcN +1][zxZ1vah + 1] + hlaHtxcDM[LhVBvZcN][zxZ1vah];
                            }
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            zxZ1vah = zxZ1vah + 1;
                        };
                    }
                    LhVBvZcN++;
                };
            }
            {
                LhVBvZcN = 1;
                while (LhVBvZcN <= 9) {
                    {
                        zxZ1vah = 1;
                        while (zxZ1vah <= 9) {
                            hlaHtxcDM[LhVBvZcN][zxZ1vah] = Pe5KrS[LhVBvZcN][zxZ1vah];
                            zxZ1vah++;
                        };
                    }
                    LhVBvZcN++;
                };
            }
            for (LhVBvZcN = 1; LhVBvZcN <= 9; LhVBvZcN++) {
                zxZ1vah = 1;
                while (zxZ1vah <= 9) {
                    Pe5KrS[LhVBvZcN][zxZ1vah] = 0;
                    zxZ1vah++;
                };
            };
        };
    }
    {
        Gkfpjae = 1;
        while (Gkfpjae <= 9) {
            {
                LhVBvZcN = 1;
                while (LhVBvZcN <= (661 - 653)) {
                    cout << hlaHtxcDM[Gkfpjae][LhVBvZcN] << " ";
                    LhVBvZcN++;
                };
            }
            cout << hlaHtxcDM[Gkfpjae][9] << endl;
            Gkfpjae++;
        };
    }
    return 0;
}

