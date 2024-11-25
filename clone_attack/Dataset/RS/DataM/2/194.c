int main () {
    char mkeyvB0M4X [(491 - 464)];
    int my89MIgYxP;
    int vAfcpCvPt5HI;
    int UCm1WtURyT [(83 - 57)] [vAfcpCvPt5HI + 1];
    int rx7ahqi0s4P;
    int QkU9aQ;
    rx7ahqi0s4P = 0;
    QkU9aQ = 0;
    cin >> vAfcpCvPt5HI;
    memset (UCm1WtURyT, (28 - 28), sizeof (UCm1WtURyT));
    {
        int BGaeXRZjHC = (177 - 177);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (BGaeXRZjHC < vAfcpCvPt5HI) {
            BGaeXRZjHC = BGaeXRZjHC +1;
            getchar ();
            memset (mkeyvB0M4X, (161 - 161), sizeof (mkeyvB0M4X));
            cin >> my89MIgYxP;
            cin.getline (mkeyvB0M4X, 27, '\n');
            {
                int pYIkyLMD7Ui = (571 - 571);
                while (mkeyvB0M4X[pYIkyLMD7Ui] >= 'A' && mkeyvB0M4X[pYIkyLMD7Ui] <= 'Z') {
                    UCm1WtURyT[(int) mkeyvB0M4X[pYIkyLMD7Ui] - (int) 'A'][(175 - 175)]++;
                    UCm1WtURyT[(int) mkeyvB0M4X[pYIkyLMD7Ui] - (int) 'A'][UCm1WtURyT[(int) mkeyvB0M4X[pYIkyLMD7Ui] - (int) 'A'][0]] = my89MIgYxP;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    pYIkyLMD7Ui = pYIkyLMD7Ui + 1;
                };
            };
        };
    }
    {
        int BGaeXRZjHC = 0;
        while (BGaeXRZjHC < 26) {
            if (UCm1WtURyT[BGaeXRZjHC][0] > rx7ahqi0s4P) {
                rx7ahqi0s4P = UCm1WtURyT[BGaeXRZjHC][0];
                QkU9aQ = BGaeXRZjHC;
            }
            BGaeXRZjHC = BGaeXRZjHC +1;
        };
    }
    cout << (char) ((int) 'A' + QkU9aQ) << endl;
    cout << rx7ahqi0s4P << endl;
    {
        int BGaeXRZjHC = 1;
        while (BGaeXRZjHC <= rx7ahqi0s4P) {
            cout << UCm1WtURyT[QkU9aQ][BGaeXRZjHC] << endl;
            BGaeXRZjHC++;
        };
    }
    return 0;
}

