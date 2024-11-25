int main () {
    int dA;
    int dB;
    int dC;
    dA = 0;
    dB = 0;
    dC = 0;
    int As = (492 - 492), Bs = 0, Cs = 0;
    int A;
    int jYJ20s;
    int HKuzF1jpoVf;
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
    A = (713 - 713);
    jYJ20s = (983 - 983);
    HKuzF1jpoVf = (187 - 187);
    for (A = (382 - 381); (236 - 233) >= A; A++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (jYJ20s = (571 - 570); jYJ20s <= 3; jYJ20s++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (HKuzF1jpoVf = 1; HKuzF1jpoVf <= 3; HKuzF1jpoVf++) {
                As = (A < jYJ20s) + (HKuzF1jpoVf == A);
                Bs = (jYJ20s < A) + (A > HKuzF1jpoVf);
                Cs = (HKuzF1jpoVf > jYJ20s) + (jYJ20s > A);
                if (!(jYJ20s >= A &&As <= Bs || A <= HKuzF1jpoVf &&As <= Cs || jYJ20s <= A &&Bs <= As || jYJ20s <= HKuzF1jpoVf &&Bs <= Cs || HKuzF1jpoVf <= A &&Cs <= As || HKuzF1jpoVf <= jYJ20s && Cs <= Bs)) {
                    dC = HKuzF1jpoVf;
                    dB = jYJ20s;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    dA = A;
                };
            };
        };
    }
    if (dA >= dB && dB >= dC)
        cout << "CBA" << endl;
    if (dA >= dC && dC >= dB)
        cout << "BCA" << endl;
    if (dB >= dA && dA >= dC)
        cout << "CAB" << endl;
    if (dB >= dC && dC >= dA)
        cout << "ACB" << endl;
    if (dC >= dA && dA >= dB)
        cout << "BAC" << endl;
    if (dC >= dB && dB >= dA)
        cout << "ABC" << endl;
    return 0;
}

