int main () {
    char s [(522 - 417)];
    int RNQvprt = (290 - 290), j = (205 - 205), m = (246 - 246), n = 0, k = 0;
    for (; cin.getline (s, 105, '\n');) {
        char eV7TAjdNFy5 [105];
        int zuo [100];
        int you [100];
        int flag [105] = {0};
        n = 0;
        m = 0;
        for (RNQvprt = 0; s[RNQvprt] != '\0'; RNQvprt++) {
            eV7TAjdNFy5[RNQvprt] = ' ';
        }
        eV7TAjdNFy5[RNQvprt] = '\0';
        for (j = 0; RNQvprt > j; j = j + 1) {
            if (!('(' != s[j]))
                zuo[m++] = j;
            if (!(')' != s[j]))
                you[n++] = j;
        }
        for (j = 0; n > j; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (k = you[j] - (263 - 262); k >= 0; k = k - 1) {
                if (!('(' != s[k]) && flag[k] == 0) {
                    flag[k] = (761 - 760);
                    flag[you[j]] = 1;
                    break;
                };
            };
        }
        for (k = 0; k < RNQvprt; k = k + 1) {
            if (flag[k] == 0 && s[k] == '(')
                eV7TAjdNFy5[k] = '$';
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
            if (flag[k] == 0 && s[k] == ')')
                eV7TAjdNFy5[k] = '?';
        }
        cout << s << endl;
        cout << eV7TAjdNFy5 << endl;
    }
    return 0;
}

