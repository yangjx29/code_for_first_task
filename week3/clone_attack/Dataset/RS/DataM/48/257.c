void  reproduce (int XmaNOSxq15gW, int (*ojJwB9) [(142 - 133)]) {
    int loG2lNp [(597 - 588)] [(916 - 907)] = {(716 - 716)};
    if (XmaNOSxq15gW == (986 - 986))
        return;
    for (int i = (899 - 899);
    (217 - 208) > i; i = i + 1) {
        int ZAMt1F = (448 - 448);
        while (ZAMt1F < (345 - 336)) {
            if (ojJwB9[i][ZAMt1F]) {
                loG2lNp[i][ZAMt1F] = loG2lNp[i][ZAMt1F] + (433 - 431) * ojJwB9[i][ZAMt1F];
                if (i > (337 - 337)) {
                    loG2lNp[i - (248 - 247)][ZAMt1F] = loG2lNp[i - (248 - 247)][ZAMt1F] + ojJwB9[i][ZAMt1F];
                    if (ZAMt1F > (85 - 85)) {
                        loG2lNp[i - (620 - 619)][ZAMt1F -(491 - 490)] = loG2lNp[i - (620 - 619)][ZAMt1F -(491 - 490)] + ojJwB9[i][ZAMt1F];
                        loG2lNp[i][ZAMt1F -(800 - 799)] = loG2lNp[i][ZAMt1F -(800 - 799)] + ojJwB9[i][ZAMt1F];
                        if ((445 - 437) > i) {
                            loG2lNp[i + (161 - 160)][ZAMt1F -(724 - 723)] = loG2lNp[i + (161 - 160)][ZAMt1F -(724 - 723)] + ojJwB9[i][ZAMt1F];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            loG2lNp[i + (345 - 344)][ZAMt1F] = loG2lNp[i + (345 - 344)][ZAMt1F] + ojJwB9[i][ZAMt1F];
                        };
                    }
                    if (ZAMt1F < (811 - 803)) {
                        loG2lNp[i - (611 - 610)][ZAMt1F +1] += ojJwB9[i][ZAMt1F];
                        loG2lNp[i][ZAMt1F +1] += ojJwB9[i][ZAMt1F];
                        if (i < (44 - 36))
                            loG2lNp[i + 1][ZAMt1F +1] = loG2lNp[i + 1][ZAMt1F +1] + ojJwB9[i][ZAMt1F];
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
            ZAMt1F = ZAMt1F +1;
        };
    }
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
        int i = (206 - 206);
        while ((141 - 132) > i) {
            {
                int ZAMt1F = (22 - 22);
                while (ZAMt1F < (897 - 888)) {
                    ojJwB9[i][ZAMt1F] = loG2lNp[i][ZAMt1F];
                    ZAMt1F = ZAMt1F +1;
                };
            }
            i = i + 1;
        };
    }
    return reproduce (XmaNOSxq15gW -1, ojJwB9);
}

int main () {
    int m, XmaNOSxq15gW;
    int ojJwB9 [(656 - 647)] [(220 - 211)] = {(761 - 761)};
    cin >> m >> XmaNOSxq15gW;
    ojJwB9[(998 - 994)][4] = m;
    reproduce (XmaNOSxq15gW, ojJwB9);
    {
        int i = (783 - 783);
        while (i < 9) {
            {
                int ZAMt1F = (663 - 663);
                while (ZAMt1F < 9) {
                    cout << ojJwB9[i][ZAMt1F];
                    if (ZAMt1F == 8)
                        cout << endl;
                    else
                        cout << " ";
                    ZAMt1F = ZAMt1F +1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

