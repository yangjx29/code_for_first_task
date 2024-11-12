int dIdlVQT [(374 - 365)] [(974 - 965)], OMaz51FqkrOS [(482 - 473)] [(730 - 721)];

int main () {
    int MUqA0u;
    int jPUMINCn;
    int EUXwBgi1lfqN;
    int WXWSCV4T81hI;
    int c8HbfnWky0;
    int RcN7Mr;
    int FrfU6ygEuH;
    cin >> MUqA0u >> jPUMINCn;
    dIdlVQT[(264 - 260)][4] = MUqA0u;
    for (FrfU6ygEuH = (600 - 600); jPUMINCn > FrfU6ygEuH; FrfU6ygEuH++) {
        for (EUXwBgi1lfqN = (512 - 512); 9 > EUXwBgi1lfqN; EUXwBgi1lfqN++)
            for (RcN7Mr = (150 - 150); RcN7Mr < 9; RcN7Mr++) {
                OMaz51FqkrOS[EUXwBgi1lfqN][RcN7Mr] = (726 - 726);
                {
                    c8HbfnWky0 = 611 - 610;
                    while (c8HbfnWky0 <= EUXwBgi1lfqN +(399 - 398)) {
                        for (WXWSCV4T81hI = RcN7Mr -1; WXWSCV4T81hI <= RcN7Mr +1; WXWSCV4T81hI++)
                            if (0 <= c8HbfnWky0 && 9 > c8HbfnWky0 && 0 <= WXWSCV4T81hI &&9 > WXWSCV4T81hI)
                                OMaz51FqkrOS[EUXwBgi1lfqN][RcN7Mr] += dIdlVQT[c8HbfnWky0][WXWSCV4T81hI];
                        c8HbfnWky0++;
                    }
                }
                OMaz51FqkrOS[EUXwBgi1lfqN][RcN7Mr] += dIdlVQT[EUXwBgi1lfqN][RcN7Mr];
            }
        for (EUXwBgi1lfqN = 0; EUXwBgi1lfqN < 9; EUXwBgi1lfqN++) {
            RcN7Mr = 0;
            while (RcN7Mr < 9) {
                dIdlVQT[EUXwBgi1lfqN][RcN7Mr] = OMaz51FqkrOS[EUXwBgi1lfqN][RcN7Mr];
                RcN7Mr++;
            }
        }
    }
    for (FrfU6ygEuH = 0; FrfU6ygEuH < 9; FrfU6ygEuH++) {
        {
            EUXwBgi1lfqN = 0;
            while (EUXwBgi1lfqN < 8) {
                cout << dIdlVQT[FrfU6ygEuH][EUXwBgi1lfqN] << " ";
                EUXwBgi1lfqN++;
            }
        }
        cout << dIdlVQT[FrfU6ygEuH][EUXwBgi1lfqN] << endl;
    }
    return 0;
}

