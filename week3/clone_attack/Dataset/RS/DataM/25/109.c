int main () {
    int Y7fXHzsAc [100], Ef079i6J;
    char gwIdFk [(558 - 458)];
    int aCIg1XQmBxp5;
    cin >> aCIg1XQmBxp5;
    memset (gwIdFk, (311 - 311), sizeof (gwIdFk));
    memset (Y7fXHzsAc, 0, sizeof (Y7fXHzsAc));
    if (!(0 != aCIg1XQmBxp5))
        cout << 1 << endl;
    else {
        int k = 99;
        gwIdFk[0] = 2;
        Y7fXHzsAc[0] = 2;
        for (; 1 < aCIg1XQmBxp5;) {
            aCIg1XQmBxp5--;
            {
                Ef079i6J = 0;
                while (100 > Ef079i6J) {
                    Y7fXHzsAc[Ef079i6J] = Y7fXHzsAc[Ef079i6J] * 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Ef079i6J++;
                };
            }
            {
                Ef079i6J = 0;
                while (Ef079i6J < 100) {
                    if (10 <= Y7fXHzsAc[Ef079i6J]) {
                        Y7fXHzsAc[Ef079i6J] = Y7fXHzsAc[Ef079i6J] - 10;
                        Y7fXHzsAc[Ef079i6J +1]++;
                    }
                    Ef079i6J++;
                };
            };
        }
        while (Y7fXHzsAc[k] == 0 && k > 0)
            k--;
        {
            Ef079i6J = k;
            while (Ef079i6J >= 0) {
                cout << Y7fXHzsAc[Ef079i6J];
                Ef079i6J--;
            };
        }
        cout << endl;
    }
    return 0;
}

