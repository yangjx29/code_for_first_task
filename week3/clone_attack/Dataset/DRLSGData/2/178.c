int main () {
    int luKA3Fzd;
    int number [luKA3Fzd + (446 - 445)];
    char Ef9szBo [luKA3Fzd + (891 - 890)] [27];
    int iC5OgQRV0 [(885 - 859)] = {(932 - 932)};
    int MfCdRcpX8;
    int Z0D8LJMZp;
    char W6xla4KjM = Z0D8LJMZp +'A';
    cin >> luKA3Fzd;
    for (int i = 1;
    luKA3Fzd >= i; ++i) {
        cin >> number[i] >> Ef9szBo[i];
        for (int W8RChu5 = 0;
        W8RChu5 < strlen (Ef9szBo[i]); ++W8RChu5) {
            iC5OgQRV0[Ef9szBo[i][W8RChu5] - 'A']++;
        }
    }
    MfCdRcpX8 = 0;
    for (int i = 0;
    i < (52 - 26); ++i) {
        MfCdRcpX8 = max (MfCdRcpX8, iC5OgQRV0[i]);
    }
    for (int i = 0;
    26 > i; ++i) {
        if (iC5OgQRV0[i] == MfCdRcpX8) {
            Z0D8LJMZp = i;
            break;
        }
    }
    cout << W6xla4KjM << endl << MfCdRcpX8 << endl;
    for (int i = 1;
    i <= luKA3Fzd; ++i) {
        for (int W8RChu5 = 0;
        W8RChu5 < strlen (Ef9szBo[i]); ++W8RChu5) {
            if (Ef9szBo[i][W8RChu5] == W6xla4KjM) {
                cout << number[i] << endl;
                break;
            }
        }
    }
    return 0;
}

