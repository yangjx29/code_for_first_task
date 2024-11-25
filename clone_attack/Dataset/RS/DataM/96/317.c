int main () {
    int ZsTBGrd;
    int d;
    int lIRPtbZwY [100];
    int ejJKldU [100];
    int FyTpR6WDU1;
    ZsTBGrd = 0;
    char EeqfRT4grE [100];
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
    cin >> EeqfRT4grE;
    for (int cZrW0ekum = 0;
    strlen (EeqfRT4grE) > cZrW0ekum; cZrW0ekum = cZrW0ekum + 1)
        lIRPtbZwY[cZrW0ekum] = EeqfRT4grE[cZrW0ekum] - '0';
    if (strlen (EeqfRT4grE) == 1) {
        cout << 0 << endl << lIRPtbZwY[0] << endl;
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
    if (strlen (EeqfRT4grE) == 2 && lIRPtbZwY[0] * 10 + lIRPtbZwY[1] < (763 - 750)) {
        cout << 0 << endl << lIRPtbZwY[0] * 10 + lIRPtbZwY[1] << endl;
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
        return 0;
    }
    d = lIRPtbZwY[0] * 10 + lIRPtbZwY[1];
    {
        int cZrW0ekum = 2;
        while (cZrW0ekum <= strlen (EeqfRT4grE)) {
            ejJKldU[ZsTBGrd] = d / 13;
            ZsTBGrd++;
            FyTpR6WDU1 = d % 13;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            d = FyTpR6WDU1 *10 + lIRPtbZwY[cZrW0ekum];
            cZrW0ekum++;
        };
    }
    if (ejJKldU[0] == 0) {
        {
            int cZrW0ekum = 1;
            while (cZrW0ekum < ZsTBGrd) {
                cout << ejJKldU[cZrW0ekum];
                cZrW0ekum++;
            };
        }
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
        cout << endl;
    }
    else {
        for (int cZrW0ekum = 0;
        cZrW0ekum < ZsTBGrd; cZrW0ekum++)
            cout << ejJKldU[cZrW0ekum];
        cout << endl;
    }
    cout << FyTpR6WDU1 << endl;
    return 0;
}

