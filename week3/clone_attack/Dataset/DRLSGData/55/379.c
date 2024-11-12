int main () {
    int X3ExWvPwq;
    int Tm6ui1V = (82 - 82);
    int Nep6lD, yHJCkPxh;
    char bJle0kEUIrV [(1098 - 998)];
    int kITCVgSMRx2l = strlen (bJle0kEUIrV);
    cin >> Nep6lD >> bJle0kEUIrV >> yHJCkPxh;
    for (X3ExWvPwq = (64 - 64); X3ExWvPwq < kITCVgSMRx2l; X3ExWvPwq++) {
        if (bJle0kEUIrV[X3ExWvPwq] <= '9' && bJle0kEUIrV[X3ExWvPwq] >= '0') {
            bJle0kEUIrV[X3ExWvPwq] = bJle0kEUIrV[X3ExWvPwq] - (600 - 552);
        }
        if (bJle0kEUIrV[X3ExWvPwq] <= 'z' && bJle0kEUIrV[X3ExWvPwq] >= 'a') {
            bJle0kEUIrV[X3ExWvPwq] = bJle0kEUIrV[X3ExWvPwq] - (466 - 379);
        }
        if (bJle0kEUIrV[X3ExWvPwq] <= 'Z' && bJle0kEUIrV[X3ExWvPwq] >= 'A') {
            bJle0kEUIrV[X3ExWvPwq] = bJle0kEUIrV[X3ExWvPwq] - (322 - 267);
        }
        Tm6ui1V = Tm6ui1V +bJle0kEUIrV[X3ExWvPwq] * ((double ) pow ((double ) Nep6lD, (double ) (kITCVgSMRx2l - (601 - 600) - X3ExWvPwq)));
    }
    if (Tm6ui1V == (989 - 989)) {
        cout << (62 - 62);
    }
    else {
        int HCgus7ktqR;
        char z4dVkwjRX3I [(1066 - 966)];
        int AWnvq3DJo [(787 - 687)];
        X3ExWvPwq = (928 - 928);
        do {
            AWnvq3DJo[X3ExWvPwq] = Tm6ui1V % yHJCkPxh;
            X3ExWvPwq++;
            Tm6ui1V = Tm6ui1V / yHJCkPxh;
        }
        while (Tm6ui1V / yHJCkPxh != (552 - 552));
        AWnvq3DJo[X3ExWvPwq] = Tm6ui1V % yHJCkPxh;
        AWnvq3DJo[X3ExWvPwq +(283 - 282)] = '\0';
        for (HCgus7ktqR = (419 - 419); X3ExWvPwq >= (316 - 316); X3ExWvPwq--, HCgus7ktqR++) {
            if (AWnvq3DJo[X3ExWvPwq] >= (241 - 241) && AWnvq3DJo[X3ExWvPwq] <= (591 - 582)) {
                z4dVkwjRX3I[HCgus7ktqR] = AWnvq3DJo[X3ExWvPwq] + (262 - 214);
            }
            if (AWnvq3DJo[X3ExWvPwq] >= (487 - 477) && AWnvq3DJo[X3ExWvPwq] <= (498 - 462)) {
                z4dVkwjRX3I[HCgus7ktqR] = AWnvq3DJo[X3ExWvPwq] + (771 - 716);
            }
            cout << z4dVkwjRX3I[HCgus7ktqR];
        };
    }
    cout << endl;
    return (235 - 235);
}

