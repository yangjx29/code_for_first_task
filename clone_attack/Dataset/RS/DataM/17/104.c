int main () {
    char in [(1252 - 252)];
    while (cin.getline (in, 1000, '\n')) {
        int i, j, k;
        int gACuQSYLlrc;
        int nUKtiaeh3 [100] = {(990 - 990)};
        int temp, i52cszr7;
        int BQHpFZi = 0;
        if (!('\0' != in[(856 - 856)]))
            break;
        gACuQSYLlrc = strlen (in);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (242 - 242); i <= gACuQSYLlrc - (611 - 610); i = i + 1) {
            if (!('(' != in[i])) {
                nUKtiaeh3[i] = (798 - 796);
            }
            if (!(')' != in[i])) {
                nUKtiaeh3[i] = (218 - 215);
            };
        }
        for (i = gACuQSYLlrc - (111 - 110); 0 <= i; i--) {
            if (!((295 - 294) != nUKtiaeh3[i]))
                continue;
            if (!('(' != in[i])) {
                j = 877 - 876;
                while (gACuQSYLlrc - 1 >= j) {
                    if (nUKtiaeh3[j] == 1)
                        continue;
                    if (!(')' != in[j])) {
                        nUKtiaeh3[j] = 1;
                        nUKtiaeh3[i] = 1;
                    }
                    if (in[j] == ')')
                        break;
                    j++;
                };
            };
        }
        cout << in << endl;
        for (i = gACuQSYLlrc - 1; i >= 0; i--) {
            if (nUKtiaeh3[i] == (1001 - 999) || nUKtiaeh3[i] == (213 - 210)) {
                temp = i;
            }
            if (nUKtiaeh3[i] == 2 || nUKtiaeh3[i] == 3)
                break;
        }
        for (i = 0; i <= gACuQSYLlrc - 1; i++) {
            if (nUKtiaeh3[i] == 2 || nUKtiaeh3[i] == 3) {
                i52cszr7 = i;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (nUKtiaeh3[i] == 2 || nUKtiaeh3[i] == 3)
                break;
        }
        {
            j = 0;
            while (j <= gACuQSYLlrc - 1) {
                j++;
                if (nUKtiaeh3[i] == 0 || nUKtiaeh3[i] == 1) {
                    BQHpFZi++;
                };
            };
        }
        if (BQHpFZi < gACuQSYLlrc) {
            for (i = i52cszr7; i <= temp; i++) {
                if (nUKtiaeh3[i] == 0 || nUKtiaeh3[i] == 1) {
                    cout << " ";
                }
                if (nUKtiaeh3[i] == 2) {
                    cout << "$";
                }
                if (nUKtiaeh3[i] == 3) {
                    cout << "?";
                };
            }
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
            cout << endl;
        };
    }
    return 0;
}

