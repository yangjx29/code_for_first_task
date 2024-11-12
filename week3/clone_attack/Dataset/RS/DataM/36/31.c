int main () {
    int GzFLc3lsyquN;
    int UCQKdf8;
    char dFcj8BMn1 [100];
    char bYEsdDiN [100];
    int U0vUzQ2Y4ka;
    int CuK2j7Pbtav4;
    cin >> dFcj8BMn1 >> bYEsdDiN;
    GzFLc3lsyquN = strlen (dFcj8BMn1);
    UCQKdf8 = strlen (bYEsdDiN);
    if (GzFLc3lsyquN != UCQKdf8) {
        cout << "NO" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    else {
        for (U0vUzQ2Y4ka = 0; U0vUzQ2Y4ka < GzFLc3lsyquN; U0vUzQ2Y4ka++)
            for (CuK2j7Pbtav4 = 0; CuK2j7Pbtav4 < GzFLc3lsyquN; CuK2j7Pbtav4++) {
                if (bYEsdDiN[CuK2j7Pbtav4] == dFcj8BMn1[U0vUzQ2Y4ka]) {
                    bYEsdDiN[CuK2j7Pbtav4] = '*';
                    break;
                };
            }
        {
            U0vUzQ2Y4ka = 0;
            while (U0vUzQ2Y4ka < GzFLc3lsyquN) {
                if (bYEsdDiN[U0vUzQ2Y4ka] != '*') {
                    cout << "NO" << endl;
                    return 0;
                }
                U0vUzQ2Y4ka++;
            };
        }
        cout << "YES" << endl;
        return 0;
    };
}

