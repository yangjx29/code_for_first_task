int main () {
    int n, vaxkHAP, a [(664 - 655)] [(774 - 765)] = {(703 - 703)}, jmQkwq5Va [(666 - 657)] [(724 - 715)] = {(198 - 198)};
    cin >> n >> vaxkHAP;
    a[(215 - 211)][4] = n;
    while (vaxkHAP) {
        {
            int f579JT;
            f579JT = (473 - 472);
            while ((630 - 622) > f579JT) {
                int j;
                j = 1;
                while (j < (637 - 629)) {
                    if (a[f579JT][j] != (625 - 625)) {
                        {
                            int AaiPL67vC = f579JT - 1;
                            while (f579JT + 1 >= AaiPL67vC) {
                                {
                                    int q;
                                    q = j - 1;
                                    while (q <= j + 1) {
                                        jmQkwq5Va[AaiPL67vC][q] = jmQkwq5Va[AaiPL67vC][q] + a[f579JT][j];
                                        q++;
                                    }
                                }
                                AaiPL67vC++;
                            }
                        }
                        jmQkwq5Va[f579JT][j] = jmQkwq5Va[f579JT][j] + a[f579JT][j];
                    }
                    j++;
                }
                f579JT++;
            }
        }
        {
            int f579JT = (639 - 639);
            while ((683 - 674) > f579JT) {
                {
                    int j = (202 - 202);
                    while (j < 9) {
                        a[f579JT][j] = jmQkwq5Va[f579JT][j];
                        jmQkwq5Va[f579JT][j] = 0;
                        j++;
                    }
                }
                f579JT++;
            }
        }
        vaxkHAP--;
    }
    {
        int f579JT;
        f579JT = 0;
        while (9 > f579JT) {
            {
                int j;
                j = 0;
                while (j < 9) {
                    if (j == 8)
                        cout << a[f579JT][j];
                    else
                        cout << a[f579JT][j] << " ";
                    j++;
                }
            }
            f579JT++;
            cout << endl;
        }
    }
    return 0;
}

