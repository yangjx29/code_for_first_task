int main () {
    char IX3P42Qo [105] [105];
    int LvSNh3ZqBf, GpA7SzYFb6H, QmjBNYp, RHCzokVyn, eEmcQJUs, num = 0;
    for (QmjBNYp = 1; QmjBNYp < 105; QmjBNYp = QmjBNYp +1) {
        RHCzokVyn = 1;
        while (RHCzokVyn < 105) {
            IX3P42Qo[QmjBNYp][RHCzokVyn] = 'A';
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
            RHCzokVyn = RHCzokVyn +1;
        };
    }
    cin >> LvSNh3ZqBf;
    {
        QmjBNYp = 1;
        while (QmjBNYp <= LvSNh3ZqBf) {
            {
                RHCzokVyn = 1;
                while (RHCzokVyn <= LvSNh3ZqBf) {
                    cin >> IX3P42Qo[QmjBNYp][RHCzokVyn];
                    if (IX3P42Qo[QmjBNYp][RHCzokVyn] == '@')
                        num = num + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    RHCzokVyn = RHCzokVyn +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            QmjBNYp = QmjBNYp +1;
        };
    }
    cin >> GpA7SzYFb6H;
    for (eEmcQJUs = 0; eEmcQJUs < GpA7SzYFb6H -1; eEmcQJUs = eEmcQJUs + 1) {
        for (QmjBNYp = 1; QmjBNYp <= LvSNh3ZqBf; QmjBNYp++) {
            RHCzokVyn = 1;
            while (RHCzokVyn <= LvSNh3ZqBf) {
                if (IX3P42Qo[QmjBNYp][RHCzokVyn] == '@') {
                    if (IX3P42Qo[QmjBNYp -1][RHCzokVyn] != '@' && IX3P42Qo[QmjBNYp -1][RHCzokVyn] != '#' && IX3P42Qo[QmjBNYp -1][RHCzokVyn] != 'A' && IX3P42Qo[QmjBNYp -1][RHCzokVyn] == '.') {
                        IX3P42Qo[QmjBNYp -1][RHCzokVyn] = 'a';
                        num = num + 1;
                    }
                    if (IX3P42Qo[QmjBNYp +1][RHCzokVyn] != '@' && IX3P42Qo[QmjBNYp +1][RHCzokVyn] != '#' && IX3P42Qo[QmjBNYp +1][RHCzokVyn] != 'A' && IX3P42Qo[QmjBNYp +1][RHCzokVyn] == '.') {
                        num++;
                        IX3P42Qo[QmjBNYp +1][RHCzokVyn] = 'a';
                    }
                    if (IX3P42Qo[QmjBNYp][RHCzokVyn -1] != '@' && IX3P42Qo[QmjBNYp][RHCzokVyn -1] != '#' && IX3P42Qo[QmjBNYp][RHCzokVyn -1] != 'A' && IX3P42Qo[QmjBNYp][RHCzokVyn -1] == '.') {
                        num++;
                        IX3P42Qo[QmjBNYp][RHCzokVyn -1] = 'a';
                    }
                    if (IX3P42Qo[QmjBNYp][RHCzokVyn +1] != '@' && IX3P42Qo[QmjBNYp][RHCzokVyn +1] != '#' && IX3P42Qo[QmjBNYp][RHCzokVyn +1] != 'A' && IX3P42Qo[QmjBNYp][RHCzokVyn +1] == '.') {
                        num++;
                        IX3P42Qo[QmjBNYp][RHCzokVyn +1] = 'a';
                    };
                }
                RHCzokVyn = RHCzokVyn +1;
            };
        }
        {
            QmjBNYp = 1;
            while (QmjBNYp <= LvSNh3ZqBf) {
                {
                    RHCzokVyn = 1;
                    while (RHCzokVyn <= LvSNh3ZqBf) {
                        if (IX3P42Qo[QmjBNYp][RHCzokVyn] == 'a')
                            IX3P42Qo[QmjBNYp][RHCzokVyn] = '@';
                        RHCzokVyn++;
                    };
                }
                QmjBNYp = QmjBNYp +1;
            };
        };
    }
    cout << num << endl;
    return 0;
}

