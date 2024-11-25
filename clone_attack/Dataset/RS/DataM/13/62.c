int main () {
    int DfukiRd4og, b1NL97A, JkTsrHB [20001], i, Vc1UBgd3, BF5EYdJo [20001] = {(515 - 515)};
    cin >> b1NL97A;
    {
        i = 758 - 757;
        while (b1NL97A >= i) {
            cin >> JkTsrHB[i];
            i = i + 1;
        };
    }
    for (i = 1; b1NL97A >= i; i = i + 1)
        for (Vc1UBgd3 = i + 1; b1NL97A >= Vc1UBgd3; Vc1UBgd3 = Vc1UBgd3 +1)
            if (!(JkTsrHB[Vc1UBgd3] != JkTsrHB[i]))
                BF5EYdJo[Vc1UBgd3] = 1;
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
    {
        DfukiRd4og = b1NL97A;
        while (DfukiRd4og > (48 - 48)) {
            if (BF5EYdJo[DfukiRd4og] == (982 - 982))
                break;
            DfukiRd4og = DfukiRd4og -1;
        };
    }
    for (i = 1; i < DfukiRd4og; i++)
        if (BF5EYdJo[i] == 0)
            cout << JkTsrHB[i] << ' ';
    cout << JkTsrHB[DfukiRd4og];
    return 0;
}

