int main () {
    int NCFZ7xivA [101] [101];
    int aYGn1624;
    int aOpwNVBHfMs;
    int kkz15uNhRPsS;
    int RLUaXKM;
    int D130oz;
    int g5BrUyf1N;
    int kIWbSrzDuPyV;
    int TDQU3Zk;
    int nXFJQ3t;
    cin >> TDQU3Zk;
    for (nXFJQ3t = 1; TDQU3Zk >= nXFJQ3t; nXFJQ3t = nXFJQ3t + 1) {
        kIWbSrzDuPyV = 0;
        cin >> aYGn1624;
        cin >> aOpwNVBHfMs;
        for (int rYe3aRS2XbC = 0;
        rYe3aRS2XbC < aYGn1624; rYe3aRS2XbC = rYe3aRS2XbC + 1)
            for (int kkz15uNhRPsS = 0;
            aOpwNVBHfMs > kkz15uNhRPsS; kkz15uNhRPsS = kkz15uNhRPsS + 1)
                cin >> NCFZ7xivA[rYe3aRS2XbC][kkz15uNhRPsS];
        for (kkz15uNhRPsS = 0; kkz15uNhRPsS < aYGn1624; kkz15uNhRPsS = kkz15uNhRPsS + 1) {
            kIWbSrzDuPyV = kIWbSrzDuPyV + **(NCFZ7xivA +kkz15uNhRPsS);
        }
        for (RLUaXKM = 1; RLUaXKM < aOpwNVBHfMs; RLUaXKM = RLUaXKM +1) {
            kIWbSrzDuPyV = kIWbSrzDuPyV + *(*(NCFZ7xivA +aYGn1624 - 1) + RLUaXKM);
        }
        for (D130oz = aYGn1624 - 2; D130oz >= 0; D130oz = D130oz -1) {
            kIWbSrzDuPyV = kIWbSrzDuPyV + *(*(NCFZ7xivA +D130oz) + aOpwNVBHfMs - 1);
        }
        for (g5BrUyf1N = 1; g5BrUyf1N < aOpwNVBHfMs - 1; g5BrUyf1N = g5BrUyf1N + 1) {
            kIWbSrzDuPyV = kIWbSrzDuPyV + *(*(NCFZ7xivA +0) + g5BrUyf1N);
        }
        cout << kIWbSrzDuPyV << endl;
    }
    return 0;
}

