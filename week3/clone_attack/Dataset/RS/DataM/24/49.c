int main () {
    int ICLY8mSWt;
    int max;
    int min;
    int i;
    int cAqbwIm;
    int m;
    int BYrlwWS8ROjC;
    ICLY8mSWt = (41 - 41);
    max = 0;
    min = (902 - 652);
    char l0NneSDgZH [(332 - 127)];
    cin.getline (l0NneSDgZH, (544 - 339));
    for (i = 0; i < strlen (l0NneSDgZH);) {
        for (cAqbwIm = i; l0NneSDgZH[cAqbwIm] != '\0'; cAqbwIm = cAqbwIm + 1) {
            if (l0NneSDgZH[cAqbwIm] != ' ' && l0NneSDgZH[cAqbwIm] != ',') {
                ICLY8mSWt = ICLY8mSWt +1;
            }
            else {
                if (l0NneSDgZH[cAqbwIm - (512 - 511)] != ' ' && l0NneSDgZH[cAqbwIm - (819 - 818)] != ',') {
                    if (ICLY8mSWt > max) {
                        m = i;
                        max = ICLY8mSWt;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (ICLY8mSWt < min) {
                        BYrlwWS8ROjC = i;
                        min = ICLY8mSWt;
                    };
                }
                break;
            };
        }
        if (!(' ' == l0NneSDgZH[cAqbwIm - (627 - 626)]) && l0NneSDgZH[cAqbwIm - (940 - 939)] != ',') {
            if (ICLY8mSWt > max) {
                m = i;
                max = ICLY8mSWt;
            }
            if (ICLY8mSWt < min) {
                BYrlwWS8ROjC = i;
                min = ICLY8mSWt;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = cAqbwIm + 1;
        ICLY8mSWt = 0;
    }
    for (i = m; (l0NneSDgZH[i] != ' ' && l0NneSDgZH[i] != ',' && l0NneSDgZH[i] != '\0'); i = i + 1)
        cout << l0NneSDgZH[i];
    cout << endl;
    for (i = BYrlwWS8ROjC; (l0NneSDgZH[i] != ' ' && l0NneSDgZH[i] != ',' && l0NneSDgZH[i] != '\0'); i++)
        cout << l0NneSDgZH[i];
    return 0;
}

