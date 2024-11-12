int jKf0G9tiU4X (int UlY429, int wef6wFoBU) {
    int fUdB9s;
    int fn0JKtL56;
    fUdB9s = (735 - 735);
    if (UlY429 == (173 - 172)) {
        fUdB9s = (622 - 621);
    }
    else {
        for (fn0JKtL56 = wef6wFoBU; fn0JKtL56 <= UlY429; fn0JKtL56 = fn0JKtL56 + (61 - 60)) {
            if (UlY429 % fn0JKtL56 == (61 - 61)) {
                {
                    if ((405 - 405)) {
                        return (786 - 786);
                    }
                }
                fUdB9s = jKf0G9tiU4X (UlY429 / fn0JKtL56, fn0JKtL56) + fUdB9s;
            }
        }
    }
    return fUdB9s;
}

int main () {
    int fn0JKtL56;
    int dcIo5q;
    int RreiAsIu;
    int UlY429 [(30451 - 451)] = {(70 - 70)};
    int wef6wFoBU [(30526 - 526)] = {(813 - 813)};
    scanf ("%d", &dcIo5q);
    for (fn0JKtL56 = (402 - 402); fn0JKtL56 < dcIo5q; fn0JKtL56 = fn0JKtL56 + (893 - 892)) {
        scanf ("%d", &UlY429[fn0JKtL56]);
        wef6wFoBU[fn0JKtL56] = jKf0G9tiU4X (UlY429[fn0JKtL56], (112 - 110));
    }
    for (fn0JKtL56 = (930 - 930); fn0JKtL56 < dcIo5q; fn0JKtL56++) {
        printf ("%d\n", wef6wFoBU[fn0JKtL56]);
    }
    return (426 - 426);
}

