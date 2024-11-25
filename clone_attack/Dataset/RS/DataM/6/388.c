int main () {
    int a [101] [101];
    int result;
    int Sju1O3I;
    int m;
    int bzDJYhg;
    int xgvz7fTpSR8;
    int v4r5VzHcuqB;
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
    int X6DfjFTi;
    result = 0;
    cin >> Sju1O3I;
    {
        xgvz7fTpSR8 = 1;
        while (xgvz7fTpSR8 <= Sju1O3I) {
            xgvz7fTpSR8 = xgvz7fTpSR8 + 1;
            cin >> m >> bzDJYhg;
            for (v4r5VzHcuqB = 1; v4r5VzHcuqB <= m; v4r5VzHcuqB = v4r5VzHcuqB + 1) {
                X6DfjFTi = 1;
                while (bzDJYhg >= X6DfjFTi) {
                    cin >> a[v4r5VzHcuqB][X6DfjFTi];
                    X6DfjFTi = X6DfjFTi +1;
                };
            }
            for (X6DfjFTi = 1; X6DfjFTi <= bzDJYhg; X6DfjFTi++) {
                result = result + a[1][X6DfjFTi] + a[m][X6DfjFTi];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            for (v4r5VzHcuqB = 2; v4r5VzHcuqB <= m - 1; v4r5VzHcuqB = v4r5VzHcuqB + 1) {
                result = result + a[v4r5VzHcuqB][1] + a[v4r5VzHcuqB][bzDJYhg];
            }
            for (v4r5VzHcuqB = 1; v4r5VzHcuqB <= m; v4r5VzHcuqB = v4r5VzHcuqB + 1) {
                X6DfjFTi = 1;
                while (X6DfjFTi <= bzDJYhg) {
                    a[v4r5VzHcuqB][X6DfjFTi] = 0;
                    X6DfjFTi = X6DfjFTi +1;
                };
            }
            cout << result << endl;
            result = 0;
        };
    }
    return 0;
}

