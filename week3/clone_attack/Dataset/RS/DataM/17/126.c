int main () {
    char vewKLlD7NU [100] [102];
    int JFMxSjwTB;
    int i;
    int IxO5Wq8R;
    int REJuPF8x3sIk;
    int KQLIWUB3;
    JFMxSjwTB = (395 - 395);
    for (; cin.getline (vewKLlD7NU[JFMxSjwTB++], 102);) {
    }
    {
        i = 0;
        while (JFMxSjwTB > i) {
            IxO5Wq8R = 0;
            cout << vewKLlD7NU[i] << endl;
            while (!('\0' == vewKLlD7NU[i][IxO5Wq8R])) {
                if (!('(' != vewKLlD7NU[i][IxO5Wq8R])) {
                    REJuPF8x3sIk = IxO5Wq8R +1;
                    for (; !('\0' == vewKLlD7NU[i][REJuPF8x3sIk]);) {
                        if (!(')' != vewKLlD7NU[i][REJuPF8x3sIk])) {
                            break;
                        }
                        REJuPF8x3sIk = REJuPF8x3sIk +1;
                    }
                    if (!('\0' != vewKLlD7NU[i][REJuPF8x3sIk])) {
                        IxO5Wq8R = IxO5Wq8R +1;
                        continue;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    KQLIWUB3 = REJuPF8x3sIk -1;
                    for (; true;) {
                        if (vewKLlD7NU[i][KQLIWUB3] == '(')
                            break;
                        KQLIWUB3--;
                    }
                    vewKLlD7NU[i][KQLIWUB3] = vewKLlD7NU[i][REJuPF8x3sIk] = 'a';
                }
                if (vewKLlD7NU[i][IxO5Wq8R] != '(')
                    IxO5Wq8R = IxO5Wq8R +1;
            }
            IxO5Wq8R = 0;
            while (vewKLlD7NU[i][IxO5Wq8R] != '\0') {
                if (vewKLlD7NU[i][IxO5Wq8R] == '(') {
                    vewKLlD7NU[i][IxO5Wq8R] = '$';
                }
                else {
                    if (vewKLlD7NU[i][IxO5Wq8R] == ')') {
                        vewKLlD7NU[i][IxO5Wq8R] = '?';
                    }
                    else
                        vewKLlD7NU[i][IxO5Wq8R] = ' ';
                }
                IxO5Wq8R = IxO5Wq8R +1;
            }
            cout << vewKLlD7NU[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

