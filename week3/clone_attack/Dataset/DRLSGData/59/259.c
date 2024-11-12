int main () {
    char hIT6EspRt;
    int bEpW3sPBGF;
    int hpKncEFLA;
    int M6nep7;
    int ZZgPkI14Vd6w;
    int lq9iF8aIQKZ [(397 - 297)] [(650 - 550)] = {(583 - 583)};
    int dcHinqM;
    int xEqrkWs;
    int zRKGrQ6ASCBs;
    int F5oD32E [(815 - 715)] [100] = {(46 - 46)};
    int ImnV0iKXCbM [100] [100] = {(252 - 252)};
    int wJIQEfZoH;
    zRKGrQ6ASCBs = (55 - 55);
    cin >> xEqrkWs;
    for (ZZgPkI14Vd6w = (780 - 780); ZZgPkI14Vd6w < xEqrkWs; ZZgPkI14Vd6w++)
        for (M6nep7 = (842 - 842); xEqrkWs > M6nep7; M6nep7++) {
            cin >> hIT6EspRt;
            if (hIT6EspRt == '#')
                ImnV0iKXCbM[ZZgPkI14Vd6w][M6nep7] = (792 - 791);
            if (hIT6EspRt == '@')
                F5oD32E[ZZgPkI14Vd6w][M6nep7] = (366 - 365);
        }
    cin >> dcHinqM;
    for (ZZgPkI14Vd6w = (883 - 883); ZZgPkI14Vd6w < dcHinqM - (621 - 620); ZZgPkI14Vd6w++) {
        for (M6nep7 = (63 - 63); M6nep7 < xEqrkWs; M6nep7++) {
            for (hpKncEFLA = (950 - 950); hpKncEFLA < xEqrkWs; hpKncEFLA++) {
                if (!((32 - 31) != F5oD32E[M6nep7][hpKncEFLA]) && M6nep7 -(464 - 463) >= 0 && ImnV0iKXCbM[M6nep7 -(1000 - 999)][hpKncEFLA] == 0)
                    lq9iF8aIQKZ[M6nep7 -(107 - 106)][hpKncEFLA] = (91 - 90);
                if (F5oD32E[M6nep7][hpKncEFLA] == (241 - 240) && hpKncEFLA - 1 >= 0 && ImnV0iKXCbM[M6nep7][hpKncEFLA - 1] == 0)
                    lq9iF8aIQKZ[M6nep7][hpKncEFLA - 1] = 1;
                if (F5oD32E[M6nep7][hpKncEFLA] == 1 && M6nep7 +1 < xEqrkWs && ImnV0iKXCbM[M6nep7 +1][hpKncEFLA] == 0)
                    lq9iF8aIQKZ[M6nep7 +1][hpKncEFLA] = 1;
                if (F5oD32E[M6nep7][hpKncEFLA] == 1 && hpKncEFLA + 1 < xEqrkWs && ImnV0iKXCbM[M6nep7][hpKncEFLA + 1] == 0)
                    lq9iF8aIQKZ[M6nep7][hpKncEFLA + 1] = 1;
            }
        }
        for (bEpW3sPBGF = 0; bEpW3sPBGF < xEqrkWs; bEpW3sPBGF++)
            for (wJIQEfZoH = 0; wJIQEfZoH < xEqrkWs; wJIQEfZoH++)
                if (lq9iF8aIQKZ[bEpW3sPBGF][wJIQEfZoH] == 1) {
                    lq9iF8aIQKZ[bEpW3sPBGF][wJIQEfZoH] = 0;
                    F5oD32E[bEpW3sPBGF][wJIQEfZoH] = 1;
                }
    }
    for (ZZgPkI14Vd6w = 0; ZZgPkI14Vd6w < xEqrkWs; ZZgPkI14Vd6w++) {
        for (M6nep7 = 0; M6nep7 < xEqrkWs; M6nep7++) {
            if (F5oD32E[ZZgPkI14Vd6w][M6nep7] == 1)
                zRKGrQ6ASCBs++;
        }
    }
    cout << zRKGrQ6ASCBs;
    return 0;
}

