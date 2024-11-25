int main () {
    char fjvAJ2OEIeS6 [(603 - 103)];
    unsigned  int Khz9Q0R, j, k, QSsmINEkpj;
    cin >> fjvAJ2OEIeS6;
    for (k = 2; k < strlen (fjvAJ2OEIeS6) + (76 - 75); k++) {
        for (Khz9Q0R = 0; Khz9Q0R < strlen (fjvAJ2OEIeS6) - k + 1; Khz9Q0R++) {
            for (j = Khz9Q0R; j < Khz9Q0R +k; j++) {
                if (fjvAJ2OEIeS6[j] != fjvAJ2OEIeS6[2 * Khz9Q0R +k - 1 - j])
                    break;
                else {
                    if (j >= 2 * Khz9Q0R +k - 1 - j) {
                        for (QSsmINEkpj = Khz9Q0R; QSsmINEkpj < Khz9Q0R +k; QSsmINEkpj++)
                            cout << fjvAJ2OEIeS6[QSsmINEkpj];
                        cout << endl;
                        break;
                    };
                };
            };
        };
    }
    return 0;
}

