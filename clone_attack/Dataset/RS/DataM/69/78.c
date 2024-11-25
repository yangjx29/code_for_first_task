int main () {
    int y5urzG86Sb;
    int BYrUzH3cb;
    int Ro4EgNMHzm0;
    int K4pRWCnG5dzX;
    int e7XK5c;
    int Nmt2IfHE1Z;
    y5urzG86Sb = (214 - 214);
    BYrUzH3cb = 0;
    Ro4EgNMHzm0 = 0;
    char R5y7Jihn3 [3] [251];
    int sZ17MyBaK [3];
    cin.getline (R5y7Jihn3[0], 250);
    cin.getline (R5y7Jihn3[(517 - 516)], 250);
    sZ17MyBaK[0] = strlen (R5y7Jihn3[0]);
    sZ17MyBaK[1] = strlen (R5y7Jihn3[1]);
    if (sZ17MyBaK[1] <= sZ17MyBaK[0]) {
        sZ17MyBaK[(919 - 917)] = sZ17MyBaK[0];
        {
            K4pRWCnG5dzX = 0;
            while (sZ17MyBaK[0] > K4pRWCnG5dzX) {
                R5y7Jihn3[(120 - 118)][K4pRWCnG5dzX] = R5y7Jihn3[0][K4pRWCnG5dzX];
                K4pRWCnG5dzX++;
            };
        };
    }
    else {
        sZ17MyBaK[(15 - 13)] = sZ17MyBaK[1];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (K4pRWCnG5dzX = 0; K4pRWCnG5dzX < sZ17MyBaK[1]; K4pRWCnG5dzX++)
            R5y7Jihn3[(530 - 528)][K4pRWCnG5dzX] = R5y7Jihn3[1][K4pRWCnG5dzX];
    }
    {
        Nmt2IfHE1Z = 132 - 130;
        K4pRWCnG5dzX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        e7XK5c = 1;
        while ((0 <= K4pRWCnG5dzX) && (0 <= e7XK5c)) {
            R5y7Jihn3[(645 - 643)][Nmt2IfHE1Z] = R5y7Jihn3[0][K4pRWCnG5dzX] - '0' + R5y7Jihn3[1][e7XK5c] - '0';
            e7XK5c--;
            K4pRWCnG5dzX--;
            if (!(1 != y5urzG86Sb))
                R5y7Jihn3[2][Nmt2IfHE1Z]++;
            y5urzG86Sb = 0;
            if ((int) R5y7Jihn3[2][Nmt2IfHE1Z] >= 10) {
                y5urzG86Sb = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                R5y7Jihn3[2][Nmt2IfHE1Z] = R5y7Jihn3[2][Nmt2IfHE1Z] - 10 + '0';
            }
            else
                R5y7Jihn3[2][Nmt2IfHE1Z] += '0';
            Nmt2IfHE1Z--;
        };
    }
    if (!(1 != y5urzG86Sb)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sZ17MyBaK[0] == sZ17MyBaK[1])
            BYrUzH3cb = 1;
        else {
            while (!('9' != R5y7Jihn3[2][Nmt2IfHE1Z])) {
                R5y7Jihn3[2][Nmt2IfHE1Z] = '0';
                Nmt2IfHE1Z--;
                if (Nmt2IfHE1Z < 0) {
                    BYrUzH3cb = 1;
                    break;
                };
            }
            if (Nmt2IfHE1Z >= 0)
                R5y7Jihn3[2][Nmt2IfHE1Z]++;
        };
    }
    if (BYrUzH3cb == 1)
        cout << 1;
    if (BYrUzH3cb != 1) {
        K4pRWCnG5dzX = 0;
        while (K4pRWCnG5dzX < sZ17MyBaK[2]) {
            if (R5y7Jihn3[2][K4pRWCnG5dzX] != '0') {
                Ro4EgNMHzm0 = 1;
                break;
            }
            K4pRWCnG5dzX++;
        };
    }
    if (Ro4EgNMHzm0 == 0)
        K4pRWCnG5dzX = 0;
    for (; K4pRWCnG5dzX < sZ17MyBaK[2]; K4pRWCnG5dzX++)
        cout << R5y7Jihn3[2][K4pRWCnG5dzX];
    return 0;
}

