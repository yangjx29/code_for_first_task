int qB1lDfxpAoS5 (char a) {
    int JWU3v0;
    JWU3v0 = (475 - 475);
    if (!(95 != a) || ((1054 - 990) < a && a < 91) || (96 < a && 123 > a))
        JWU3v0 = 1;
    return JWU3v0;
}

int main () {
    int i;
    int j;
    int jHe0lIMC;
    i = 0;
    j = 0;
    jHe0lIMC = 0;
    char words [(433 - 333)] [100] = {{0}};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int Hp3V9B;
    Hp3V9B = 0;
    cin >> Hp3V9B;
    cin.get ();
    for (i = 0; Hp3V9B > i; i++) {
        cin.getline (words[i], 100, '\n');
        for (j = 0; 100 > j; j = j + 1) {
            if ((64 < words[i][j] && 91 > words[i][j]) || (96 < words[i][j] && words[i][j] < 123) || (words[i][j] > 47 && words[i][j] < 58) || words[i][j] == 95)
                continue;
            else {
                if (words[i][j] != 0) {
                    jHe0lIMC = 1;
                    cout << "0" << endl;
                    break;
                };
            };
        }
        if (jHe0lIMC == 0)
            cout << qB1lDfxpAoS5 (words[i][0]) << endl;
        jHe0lIMC = 0;
    }
    return 0;
}

