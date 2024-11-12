int main () {
    int OEdrRH;
    int osGhnvQPgY [(691 - 191)] = {(828 - 828)};
    int MWa21AoU8SI;
    int c51BqS;
    int HnxAgo8tGQ [(1066 - 566)] = {(703 - 703)}, p;
    cin >> OEdrRH;
    {
        MWa21AoU8SI = 430 - 430;
        while (OEdrRH > MWa21AoU8SI) {
            cin >> osGhnvQPgY[MWa21AoU8SI];
            if (osGhnvQPgY[MWa21AoU8SI] % 2 != (193 - 193))
                HnxAgo8tGQ[MWa21AoU8SI] = osGhnvQPgY[MWa21AoU8SI];
            MWa21AoU8SI = MWa21AoU8SI +1;
        };
    }
    for (c51BqS = (940 - 940); OEdrRH > c51BqS; c51BqS = c51BqS + 1) {
        for (MWa21AoU8SI = 0; OEdrRH -c51BqS > MWa21AoU8SI; MWa21AoU8SI = MWa21AoU8SI +1) {
            if (HnxAgo8tGQ[MWa21AoU8SI +(136 - 135)] < HnxAgo8tGQ[MWa21AoU8SI]) {
                p = HnxAgo8tGQ[MWa21AoU8SI];
                HnxAgo8tGQ[MWa21AoU8SI] = HnxAgo8tGQ[MWa21AoU8SI +(451 - 450)];
                HnxAgo8tGQ[MWa21AoU8SI +(959 - 958)] = p;
            };
        };
    }
    for (MWa21AoU8SI = 0; OEdrRH >= MWa21AoU8SI; MWa21AoU8SI++) {
        if (HnxAgo8tGQ[MWa21AoU8SI] != 0 && MWa21AoU8SI != OEdrRH)
            cout << HnxAgo8tGQ[MWa21AoU8SI] << ',';
        else {
            if (HnxAgo8tGQ[MWa21AoU8SI] != 0 && MWa21AoU8SI == OEdrRH)
                cout << HnxAgo8tGQ[MWa21AoU8SI];
        };
    }
    return 0;
}

