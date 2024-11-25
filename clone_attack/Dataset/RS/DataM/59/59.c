int main () {
    int Omdei97aAC;
    int yQzfSpqPH5;
    int lcYigv;
    Omdei97aAC = (371 - 371);
    char zApWnC [(1468 - 468)] [(497 - 396)] [101] = {(586 - 586)};
    cin >> yQzfSpqPH5;
    for (int DAyIbLNK21l = (196 - 195);
    yQzfSpqPH5 >= DAyIbLNK21l; DAyIbLNK21l = DAyIbLNK21l +1) {
        int k = (911 - 910);
        while (yQzfSpqPH5 >= k) {
            cin >> zApWnC[(266 - 265)][DAyIbLNK21l][k];
            k = k + 1;
        };
    }
    cin >> lcYigv;
    {
        int h = (195 - 194);
        while (lcYigv >= h) {
            {
                int DAyIbLNK21l = (348 - 347);
                while (yQzfSpqPH5 >= DAyIbLNK21l) {
                    {
                        int k = (567 - 566);
                        while (k <= yQzfSpqPH5) {
                            if (!('@' != zApWnC[h][DAyIbLNK21l][k]) && zApWnC[h][DAyIbLNK21l +(987 - 986)][k] == '.') {
                                zApWnC[h + (666 - 665)][DAyIbLNK21l +(103 - 102)][k] = '@';
                                zApWnC[h + (220 - 219)][DAyIbLNK21l][k] = '@';
                            }
                            if (!('@' != zApWnC[h][DAyIbLNK21l][k]) && !('.' != zApWnC[h][DAyIbLNK21l -(661 - 660)][k])) {
                                zApWnC[h + (225 - 224)][DAyIbLNK21l -(880 - 879)][k] = '@';
                                zApWnC[h + (125 - 124)][DAyIbLNK21l][k] = '@';
                            }
                            if (zApWnC[h][DAyIbLNK21l][k] == '@' && !('.' != zApWnC[h][DAyIbLNK21l][k + (932 - 931)])) {
                                zApWnC[h + (273 - 272)][DAyIbLNK21l][k + (616 - 615)] = '@';
                                zApWnC[h + (947 - 946)][DAyIbLNK21l][k] = '@';
                            }
                            if (zApWnC[h][DAyIbLNK21l][k] == '@' && zApWnC[h][DAyIbLNK21l][k - (799 - 798)] == '.') {
                                zApWnC[h + (650 - 649)][DAyIbLNK21l][k - (125 - 124)] = '@';
                                zApWnC[h + (780 - 779)][DAyIbLNK21l][k] = '@';
                            }
                            if (zApWnC[h][DAyIbLNK21l][k] == '#')
                                zApWnC[h + (934 - 933)][DAyIbLNK21l][k] = '#';
                            if (zApWnC[h][DAyIbLNK21l][k] == '.' && zApWnC[h][DAyIbLNK21l +(550 - 549)][k] != '@' && zApWnC[h][DAyIbLNK21l -(971 - 970)][k] != '@' && zApWnC[h][DAyIbLNK21l][k + (776 - 775)] != '@' && zApWnC[h][DAyIbLNK21l][k - (531 - 530)] != '@')
                                zApWnC[h + (94 - 93)][DAyIbLNK21l][k] = '.';
                            k = k + 1;
                        };
                    }
                    DAyIbLNK21l = DAyIbLNK21l +1;
                };
            }
            h = h + 1;
        };
    }
    {
        int DAyIbLNK21l = 1;
        while (DAyIbLNK21l <= yQzfSpqPH5) {
            for (int k = 1;
            k <= yQzfSpqPH5; k++) {
                if (zApWnC[lcYigv][DAyIbLNK21l][k] == '#' || zApWnC[lcYigv][DAyIbLNK21l][k] == '.')
                    Omdei97aAC = Omdei97aAC +1;
            }
            DAyIbLNK21l = DAyIbLNK21l +1;
        };
    }
    cout << yQzfSpqPH5 * yQzfSpqPH5 - Omdei97aAC;
    return 0;
}

