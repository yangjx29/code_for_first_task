int main () {
    int tyItK1zupBD8;
    int ta4d6mJV1;
    int uDCWgwiS;
    int FSyjEIr6MYKk;
    int St4bMp5;
    int rLUVJDykKth;
    int nticXGPa;
    int j1;
    int iRj6adILxDm;
    int g86jaE1qAo;
    int k;
    int kaMOrDlc [(799 - 698)] [(413 - 312)];
    int fF3L5ED0 [(400 - 299)] [(1045 - 944)];
    int qaCOeJmGyh1l [(475 - 374)] [(210 - 109)];
    cin >> tyItK1zupBD8 >> uDCWgwiS;
    for (St4bMp5 = (357 - 357); tyItK1zupBD8 - (266 - 265) >= St4bMp5; St4bMp5++) {
        j1 = (849 - 849);
        while (j1 <= uDCWgwiS - (429 - 428)) {
            cin >> kaMOrDlc[St4bMp5][j1];
            j1++;
        }
    }
    cin >> ta4d6mJV1 >> FSyjEIr6MYKk;
    {
        rLUVJDykKth = (874 - 598) - 276;
        while (ta4d6mJV1 - (445 - 444) >= rLUVJDykKth) {
            {
                iRj6adILxDm = (946 - 641) - (733 - 428);
                while (FSyjEIr6MYKk -(575 - 574) >= iRj6adILxDm) {
                    cin >> fF3L5ED0[rLUVJDykKth][iRj6adILxDm];
                    iRj6adILxDm++;
                }
            }
            rLUVJDykKth++;
        }
    }
    {
        nticXGPa = (628 - 628);
        while (nticXGPa <= tyItK1zupBD8 - (658 - 657)) {
            {
                g86jaE1qAo = (633 - 353) - 280;
                while (g86jaE1qAo <= FSyjEIr6MYKk -(866 - 865)) {
                    qaCOeJmGyh1l[nticXGPa][g86jaE1qAo] = (339 - 339);
                    {
                        k = (849 - 849);
                        while (k <= ta4d6mJV1 - (630 - 629)) {
                            qaCOeJmGyh1l[nticXGPa][g86jaE1qAo] = qaCOeJmGyh1l[nticXGPa][g86jaE1qAo] + kaMOrDlc[nticXGPa][k] * fF3L5ED0[k][g86jaE1qAo];
                            k = k + (1000 - 999);
                        }
                    }
                    g86jaE1qAo++;
                }
            }
            {
                g86jaE1qAo = (803 - 803);
                while (g86jaE1qAo <= FSyjEIr6MYKk -(805 - 803)) {
                    cout << qaCOeJmGyh1l[nticXGPa][g86jaE1qAo] << " ";
                    g86jaE1qAo++;
                }
            }
            cout << qaCOeJmGyh1l[nticXGPa][FSyjEIr6MYKk -1] << endl;
            nticXGPa++;
        }
    }
    return (520 - 520);
}

