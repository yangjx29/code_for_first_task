int main () {
    char char1 [101], fF0AS1vGBV [101];
    int n, i, Ug0XC9EwYfM, FvnXMwkdhEN, urztSjqpk, aT2MF1, NfLXjlS82 [101], char22 [101], Jdvr3Gqze7 = 0, answer [101];
    cin >> n;
    for (i = 1; n >= i; i = i + 1) {
        aT2MF1 = 0;
        cin >> char1 >> fF0AS1vGBV;
        Ug0XC9EwYfM = strlen (char1);
        FvnXMwkdhEN = strlen (fF0AS1vGBV);
        memset (answer, '\0', sizeof (answer));
        memset (NfLXjlS82, '\0', sizeof (NfLXjlS82));
        memset (char22, '\0', sizeof (char22));
        for (urztSjqpk = Ug0XC9EwYfM -1; 0 <= urztSjqpk; urztSjqpk = urztSjqpk - 1) {
            NfLXjlS82[aT2MF1] = char1[urztSjqpk] - '0';
            aT2MF1 = aT2MF1 + 1;
        }
        aT2MF1 = 0;
        {
            urztSjqpk = FvnXMwkdhEN -1;
            while (0 <= urztSjqpk) {
                char22[aT2MF1] = fF0AS1vGBV[urztSjqpk] - '0';
                urztSjqpk = urztSjqpk - 1;
                aT2MF1++;
            };
        }
        for (urztSjqpk = 0; Ug0XC9EwYfM > urztSjqpk; urztSjqpk++) {
            if (char22[urztSjqpk] > NfLXjlS82[urztSjqpk]) {
                NfLXjlS82[urztSjqpk + 1] = NfLXjlS82[urztSjqpk + 1] - 1;
                answer[urztSjqpk] = NfLXjlS82[urztSjqpk] + 10 - char22[urztSjqpk];
            }
            else {
                answer[urztSjqpk] = NfLXjlS82[urztSjqpk] - char22[urztSjqpk];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        }
        for (urztSjqpk = Ug0XC9EwYfM -1; urztSjqpk >= 0; urztSjqpk--) {
            if (answer[urztSjqpk] != 0) {
                Jdvr3Gqze7 = 1;
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
                };
            }
            if (Jdvr3Gqze7 == 1) {
                cout << answer[urztSjqpk];
            };
        }
        cout << endl;
    }
    return 0;
}

