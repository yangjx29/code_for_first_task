int main () {
    char OmWxRaGM [210] = {0};
    char b [210] = {0};
    int CEtiZqnk7;
    int len_b;
    int AaS6Rb7ijGq [210] = {0};
    int OnOZzDBy [210] = {0};
    int i;
    int nULNdQ9b;
    int max;
    nULNdQ9b = 0;
    cin >> OmWxRaGM >> b;
    CEtiZqnk7 = strlen (OmWxRaGM);
    len_b = strlen (b);
    for (i = CEtiZqnk7 -1; 0 <= i; i = i - 1)
        AaS6Rb7ijGq[nULNdQ9b++] = OmWxRaGM[i] - '0';
    nULNdQ9b = 0;
    for (i = len_b - 1; i >= 0; i = i - 1)
        OnOZzDBy[nULNdQ9b++] = b[i] - '0';
    max = (CEtiZqnk7 > len_b) ? CEtiZqnk7 : len_b;
    for (i = 0; max > i; i = i + 1) {
        AaS6Rb7ijGq[i] = AaS6Rb7ijGq[i] + OnOZzDBy[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (9 < AaS6Rb7ijGq[i]) {
            AaS6Rb7ijGq[i + 1]++;
            AaS6Rb7ijGq[i] = AaS6Rb7ijGq[i] - 10;
        };
    }
    for (i = max + 1; i >= 0; i = i - 1)
        if (AaS6Rb7ijGq[i] != 0)
            break;
    if (i == -1)
        cout << AaS6Rb7ijGq[0];
    for (nULNdQ9b = i; nULNdQ9b >= 0; nULNdQ9b = nULNdQ9b - 1)
        cout << AaS6Rb7ijGq[nULNdQ9b];
    return 0;
}

