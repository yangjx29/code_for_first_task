int main () {
    char yRxJATE [100];
    char VQ3OsMU9 [100];
    int BqYLHdC1mK;
    int w3kX2Qef9ay0;
    int r6mqHc;
    int AGEMfgPHX4;
    int T9aScov8;
    int flag;
    int Pl3yPXMcRH;
    int y;
    BqYLHdC1mK = 0;
    cin.getline (yRxJATE, 100);
    T9aScov8 = strlen (yRxJATE);
    flag = 0;
    w3kX2Qef9ay0 = 0;
    if (2 <= T9aScov8) {
        if (3 <= T9aScov8) {
            for (; w3kX2Qef9ay0 < T9aScov8;) {
                r6mqHc = BqYLHdC1mK *10 + yRxJATE[w3kX2Qef9ay0] - '0';
                VQ3OsMU9[w3kX2Qef9ay0] = r6mqHc / 13 + '0';
                w3kX2Qef9ay0 = w3kX2Qef9ay0 + 1;
                BqYLHdC1mK = r6mqHc % 13;
            }
            {
                AGEMfgPHX4 = 0;
                while (w3kX2Qef9ay0 > AGEMfgPHX4) {
                    if ((VQ3OsMU9[AGEMfgPHX4] != '0') || (flag == 1)) {
                        cout << VQ3OsMU9[AGEMfgPHX4];
                        flag = 1;
                    }
                    AGEMfgPHX4++;
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
            cout << endl << BqYLHdC1mK;
        }
        else {
            r6mqHc = ((yRxJATE[0] - '0') * 10 + yRxJATE[1] - '0');
            Pl3yPXMcRH = r6mqHc / 13;
            y = r6mqHc % 13;
            cout << Pl3yPXMcRH << endl << y;
        };
    }
    else
        cout << "0" << endl << (yRxJATE[0] - '0');
    return 0;
}

