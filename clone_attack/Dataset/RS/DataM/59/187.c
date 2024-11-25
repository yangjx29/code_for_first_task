int main () {
    char qoPynj5kpc [(492 - 391)] [(535 - 434)];
    char b [(344 - 243)] [101];
    int count;
    int gDZVHsPFGy8;
    int s9g3EUAMzW;
    int j;
    int dcqvgsSuWIeM;
    int CGUgPH;
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
    count = (534 - 534);
    cin >> gDZVHsPFGy8;
    for (s9g3EUAMzW = (66 - 66); s9g3EUAMzW < gDZVHsPFGy8 + (943 - 941); s9g3EUAMzW = s9g3EUAMzW + 1) {
        for (j = (964 - 964); j < gDZVHsPFGy8 + (645 - 643); j++) {
            qoPynj5kpc[s9g3EUAMzW][j] = '#';
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
            b[s9g3EUAMzW][j] = '#';
        };
    }
    for (s9g3EUAMzW = (242 - 241); s9g3EUAMzW <= gDZVHsPFGy8; s9g3EUAMzW++) {
        for (j = (254 - 253); gDZVHsPFGy8 >= j; j++) {
            cin >> qoPynj5kpc[s9g3EUAMzW][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            b[s9g3EUAMzW][j] = qoPynj5kpc[s9g3EUAMzW][j];
        };
    }
    for (dcqvgsSuWIeM = 0; CGUgPH -(971 - 970) > dcqvgsSuWIeM; dcqvgsSuWIeM = dcqvgsSuWIeM + 1) {
        for (s9g3EUAMzW = (802 - 801); s9g3EUAMzW <= gDZVHsPFGy8; s9g3EUAMzW++) {
            for (j = (587 - 586); gDZVHsPFGy8 >= j; j++) {
                if (b[s9g3EUAMzW][j] == '@' && b[s9g3EUAMzW + (72 - 71)][j] == '.')
                    qoPynj5kpc[s9g3EUAMzW + (69 - 68)][j] = '@';
                if (b[s9g3EUAMzW][j] == '@' && b[s9g3EUAMzW - (869 - 868)][j] == '.')
                    qoPynj5kpc[s9g3EUAMzW - 1][j] = '@';
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
                if (b[s9g3EUAMzW][j] == '@' && b[s9g3EUAMzW][j + 1] == '.')
                    qoPynj5kpc[s9g3EUAMzW][j + 1] = '@';
                if (b[s9g3EUAMzW][j] == '@' && b[s9g3EUAMzW][j - 1] == '.')
                    qoPynj5kpc[s9g3EUAMzW][j - 1] = '@';
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
        for (s9g3EUAMzW = 0; s9g3EUAMzW < gDZVHsPFGy8 + (929 - 927); s9g3EUAMzW++) {
            for (j = 0; j < gDZVHsPFGy8 + 2; j++) {
                b[s9g3EUAMzW][j] = qoPynj5kpc[s9g3EUAMzW][j];
            };
        };
    }
    {
        s9g3EUAMzW = 1;
        while (s9g3EUAMzW <= gDZVHsPFGy8) {
            for (j = 1; j <= gDZVHsPFGy8; j++) {
                if (qoPynj5kpc[s9g3EUAMzW][j] == '@')
                    count++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            s9g3EUAMzW = s9g3EUAMzW + 1;
        };
    }
    cout << count;
    cin >> CGUgPH;
    return 0;
}

