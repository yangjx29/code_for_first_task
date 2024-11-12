int main () {
    char dMEuZKlj [101] [101] = {0};
    char room_before [101] [101];
    int r03bBwaiASe;
    int lIRUD1XaB;
    int kVlL4id;
    int xcoTEstS;
    int NEytUC;
    int ygvMX2deqHNR;
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
    r03bBwaiASe = 0;
    cin >> lIRUD1XaB;
    for (xcoTEstS = (52 - 51); lIRUD1XaB >= xcoTEstS; xcoTEstS = xcoTEstS + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (NEytUC = (319 - 318); NEytUC <= lIRUD1XaB; NEytUC = NEytUC +1) {
            cin >> room_before[xcoTEstS][NEytUC];
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
        };
    }
    cin >> kVlL4id;
    for (ygvMX2deqHNR = (579 - 578); ygvMX2deqHNR < kVlL4id; ygvMX2deqHNR = ygvMX2deqHNR + 1) {
        {
            xcoTEstS = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (xcoTEstS <= lIRUD1XaB) {
                {
                    NEytUC = 1;
                    while (NEytUC <= lIRUD1XaB) {
                        dMEuZKlj[xcoTEstS][NEytUC] = room_before[xcoTEstS][NEytUC];
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
                        NEytUC++;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                xcoTEstS = xcoTEstS + 1;
            };
        }
        for (xcoTEstS = 1; xcoTEstS <= lIRUD1XaB; xcoTEstS++) {
            NEytUC = 1;
            while (NEytUC <= lIRUD1XaB) {
                if (room_before[xcoTEstS][NEytUC] == '@') {
                    if (room_before[xcoTEstS - 1][NEytUC] == '.') {
                        dMEuZKlj[xcoTEstS - 1][NEytUC] = '@';
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    if (room_before[xcoTEstS + 1][NEytUC] == '.') {
                        dMEuZKlj[xcoTEstS + 1][NEytUC] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    if (room_before[xcoTEstS][NEytUC -1] == '.') {
                        dMEuZKlj[xcoTEstS][NEytUC -1] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    if (room_before[xcoTEstS][NEytUC +1] == '.') {
                        dMEuZKlj[xcoTEstS][NEytUC +1] = '@';
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
                NEytUC++;
            };
        }
        {
            xcoTEstS = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (xcoTEstS <= lIRUD1XaB) {
                for (NEytUC = 1; NEytUC <= lIRUD1XaB; NEytUC++) {
                    room_before[xcoTEstS][NEytUC] = dMEuZKlj[xcoTEstS][NEytUC];
                }
                xcoTEstS = xcoTEstS + 1;
            };
        };
    }
    for (xcoTEstS = 1; xcoTEstS <= lIRUD1XaB; xcoTEstS++) {
        for (NEytUC = 1; NEytUC <= lIRUD1XaB; NEytUC++) {
            if (dMEuZKlj[xcoTEstS][NEytUC] == '@') {
                r03bBwaiASe = r03bBwaiASe + 1;
            };
        };
    }
    cout << r03bBwaiASe << endl;
    return 0;
}

