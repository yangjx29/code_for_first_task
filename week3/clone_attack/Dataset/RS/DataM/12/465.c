int main () {
    int NMrwbVjt;
    int oj9q8fs6iWK [101];
    int Y1imUuelQj;
    int koR0ZzGFTIMw;
    int j;
    NMrwbVjt = (362 - 362);
    while (1) {
        cin >> Y1imUuelQj;
        if (Y1imUuelQj == -1)
            break;
        {
            koR0ZzGFTIMw = 1;
            while (1) {
                oj9q8fs6iWK[0] = Y1imUuelQj;
                cin >> oj9q8fs6iWK[koR0ZzGFTIMw];
                {
                    j = 0;
                    while (j < koR0ZzGFTIMw) {
                        if (oj9q8fs6iWK[j] > oj9q8fs6iWK[koR0ZzGFTIMw] && oj9q8fs6iWK[j] == (oj9q8fs6iWK[koR0ZzGFTIMw] * 2))
                            NMrwbVjt = NMrwbVjt +1;
                        if (oj9q8fs6iWK[koR0ZzGFTIMw] > oj9q8fs6iWK[j] && oj9q8fs6iWK[koR0ZzGFTIMw] == (oj9q8fs6iWK[j] * 2))
                            NMrwbVjt = NMrwbVjt +1;
                        j = j + 1;
                    };
                }
                if (oj9q8fs6iWK[koR0ZzGFTIMw] == 0)
                    break;
                koR0ZzGFTIMw = koR0ZzGFTIMw + 1;
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
        cout << NMrwbVjt << endl;
        NMrwbVjt = 0;
    }
    return 0;
}

