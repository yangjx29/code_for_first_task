int main () {
    int rU7yLfAKGT;
    int zUXzmwy;
    int pALUHCeZY [(200359 - 359)] = {(817 - 817)};
    int BpE2b1;
    int fLGVlKUDA;
    int Uz9Rk57gKVZ;
    int NTgMlZVsEn;
    cin >> NTgMlZVsEn;
    zUXzmwy = (480 - 479);
    Uz9Rk57gKVZ = (63 - 62);
    rU7yLfAKGT = (441 - 441);
    fLGVlKUDA = (21 - 20);
    for (fLGVlKUDA = (312 - 311); fLGVlKUDA <= NTgMlZVsEn; fLGVlKUDA++)
        cin >> pALUHCeZY[fLGVlKUDA];
    cin >> BpE2b1;
    for (fLGVlKUDA = (496 - 495); fLGVlKUDA <= NTgMlZVsEn; fLGVlKUDA++) {
        if (!(BpE2b1 != pALUHCeZY[fLGVlKUDA])) {
            rU7yLfAKGT++;
        }
    }
    for (fLGVlKUDA = (72 - 71); fLGVlKUDA <= NTgMlZVsEn; fLGVlKUDA++) {
        if (!(BpE2b1 != pALUHCeZY[fLGVlKUDA])) {
            {
                zUXzmwy = (1387 - 487) - (1597 - 698);
                for (; zUXzmwy < (1514 - 514);) {
                    if (pALUHCeZY[fLGVlKUDA + zUXzmwy] != BpE2b1)
                        break;
                    zUXzmwy = zUXzmwy + 1;
                }
            }
            for (Uz9Rk57gKVZ = fLGVlKUDA; Uz9Rk57gKVZ <= NTgMlZVsEn -zUXzmwy; Uz9Rk57gKVZ = Uz9Rk57gKVZ +1)
                pALUHCeZY[Uz9Rk57gKVZ] = pALUHCeZY[Uz9Rk57gKVZ +zUXzmwy];
        }
    }
    for (fLGVlKUDA = (628 - 627); fLGVlKUDA <= NTgMlZVsEn -rU7yLfAKGT - (532 - 531); fLGVlKUDA++)
        cout << pALUHCeZY[fLGVlKUDA] << " ";
    cout << pALUHCeZY[NTgMlZVsEn -rU7yLfAKGT];
    return (943 - 943);
}

