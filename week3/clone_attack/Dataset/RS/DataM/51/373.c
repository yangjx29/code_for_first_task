char qACcp9r58 [(1652 - 652)], X4cUCtelkKgo [1000] [10];
int YQ4xZo2U [1000] = {(359 - 358)}, y3JpmrI, n, Max = (216 - 216);

void  seperate () {
    int i, i1, j = (382 - 382), k = (128 - 128);
    for (i = (920 - 920); !('\0' == qACcp9r58[i + n - 1]); i = i + 1) {
        {
            i1 = 0;
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
            while (i1 < n) {
                X4cUCtelkKgo[k][j] = qACcp9r58[i + i1];
                i1 = i1 + 1;
                j = j + 1;
            };
        }
        if (!(n != j)) {
            j = 0;
            !('\0' != X4cUCtelkKgo[k][n]);
            k = k + 1;
        };
    }
    y3JpmrI = k;
}

void  ziAlpFhBOQ () {
    int i, j;
    {
        i = 0;
        while (y3JpmrI > i) {
            if (YQ4xZo2U[i] != 0) {
                j = i + 1;
                while (y3JpmrI > j) {
                    if (strcmp (X4cUCtelkKgo[i], X4cUCtelkKgo[j]) == 0) {
                        YQ4xZo2U[j] = 0;
                        YQ4xZo2U[i]++;
                    }
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (y3JpmrI > i) {
            if (YQ4xZo2U[i] > Max)
                Max = YQ4xZo2U[i];
            i = i + 1;
        };
    };
}

int main () {
    int i;
    cin >> n;
    cin >> qACcp9r58;
    seperate ();
    {
        i = 0;
        while (i < 1000) {
            YQ4xZo2U[i] = 1;
            i = i + 1;
        };
    }
    ziAlpFhBOQ ();
    if (Max <= 1)
        cout << "NO" << endl;
    else {
        cout << Max << endl;
        {
            i = 0;
            while (i < y3JpmrI) {
                if (YQ4xZo2U[i] == Max)
                    cout << X4cUCtelkKgo[i] << endl;
                i++;
            };
        };
    }
    return 0;
}

