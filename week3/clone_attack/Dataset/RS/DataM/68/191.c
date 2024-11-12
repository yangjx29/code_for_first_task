int main () {
    int snFwDcN5fW, umF9v4eSn, rBXRxilQYWej, Um0h2QivuX, anhLJE, t, vsMOcNxrpnR, Aa9ytQR, EgUhEqjFT, qDvUZLKIgV, g;
    cin >> snFwDcN5fW;
    {
        umF9v4eSn = 6;
        while (snFwDcN5fW >= umF9v4eSn) {
            for (rBXRxilQYWej = 2; umF9v4eSn - 2 >= rBXRxilQYWej; rBXRxilQYWej++) {
                Um0h2QivuX = sqrt (rBXRxilQYWej);
                EgUhEqjFT = 0;
                {
                    t = 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (Um0h2QivuX >= t) {
                        if (!(0 != rBXRxilQYWej % t))
                            EgUhEqjFT = 1;
                        t = t + 1;
                    };
                }
                if (EgUhEqjFT == 0) {
                    g = 0;
                    anhLJE = sqrt (umF9v4eSn - rBXRxilQYWej);
                    for (qDvUZLKIgV = 2; qDvUZLKIgV <= anhLJE; qDvUZLKIgV = qDvUZLKIgV + 1) {
                        if ((umF9v4eSn - rBXRxilQYWej) % qDvUZLKIgV == 0)
                            g = 1;
                    }
                    if (g == 0) {
                        cout << umF9v4eSn << "=" << rBXRxilQYWej << "+" << umF9v4eSn - rBXRxilQYWej << endl;
                        break;
                    };
                };
            }
            umF9v4eSn = umF9v4eSn + 2;
        };
    }
    return 0;
}

