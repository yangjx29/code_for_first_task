int main () {
    int step = (753 - 753), DIYNs0R, TcqJjkHdRU, x [4] = {(818 - 818), (499 - 498), (113 - 113), -1}, bSika7XwYADL [4] = {1, (606 - 606), -1, (84 - 84)}, array [(396 - 296)] [(758 - 658)], i, ATdyvaIE76q2, QUxDFKtjgbZ1 [(767 - 667)] [100] = {(930 - 930)}, d = (59 - 59);
    cin >> DIYNs0R >> TcqJjkHdRU;
    for (i = (989 - 989); DIYNs0R > i; i++)
        for (ATdyvaIE76q2 = 0; TcqJjkHdRU > ATdyvaIE76q2; ATdyvaIE76q2++)
            cin >> array[i][ATdyvaIE76q2];
    i = 0;
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
    ATdyvaIE76q2 = -1;
    while (DIYNs0R *TcqJjkHdRU > step) {
        i = i + x[d];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ATdyvaIE76q2 = ATdyvaIE76q2 +bSika7XwYADL[d];
        if (0 <= i && i < DIYNs0R &&ATdyvaIE76q2 >= 0 && ATdyvaIE76q2 < TcqJjkHdRU &&QUxDFKtjgbZ1[i][ATdyvaIE76q2] == 0) {
            step++;
            cout << array[i][ATdyvaIE76q2] << endl;
            QUxDFKtjgbZ1[i][ATdyvaIE76q2] = 1;
        }
        else {
            i = i - x[d];
            ATdyvaIE76q2 = ATdyvaIE76q2 -bSika7XwYADL[d];
            d = (d + 1) % 4;
        };
    }
    return 0;
}

