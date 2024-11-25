int main () {
    int KXYAGlaHq9;
    int N0yzubU24 [100001], MUuRC2T;
    int Lgu5nV8 = 1, mHoBaIO3bmes = MUuRC2T;
    cin >> MUuRC2T;
    for (int i8G3LPf = 1;
    i8G3LPf <= MUuRC2T; i8G3LPf++)
        cin >> N0yzubU24[i8G3LPf];
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
    cin >> KXYAGlaHq9;
    while (mHoBaIO3bmes) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (N0yzubU24[Lgu5nV8] == KXYAGlaHq9) {
            mHoBaIO3bmes--;
            for (int rc4TBXg5fksE = Lgu5nV8;
            rc4TBXg5fksE < MUuRC2T; rc4TBXg5fksE++)
                N0yzubU24[rc4TBXg5fksE] = N0yzubU24[rc4TBXg5fksE + 1];
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
            MUuRC2T--;
        }
        else {
            Lgu5nV8 = Lgu5nV8 +1;
            mHoBaIO3bmes--;
        };
    }
    for (int i8G3LPf = 1;
    i8G3LPf <= MUuRC2T; i8G3LPf++) {
        cout << N0yzubU24[i8G3LPf];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (i8G3LPf - MUuRC2T)
            cout << ' ';
    }
    return (955 - 955);
}

