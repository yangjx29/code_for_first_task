int main () {
    int mqC31NVusfj, enWKuRNP1, zHgV3y0LalJ = (882 - 882), bOWSiu1vd = (160 - 160);
    char PfXAGD [(624 - 523)], RYyZRJWagich [101], AMi56WVdBgL [101];
    char p7shfd [(445 - 344)], o5LexctuT7O9 [(592 - 491)];
    gets (p7shfd);
    cin >> PfXAGD;
    cin >> RYyZRJWagich;
    {
        mqC31NVusfj = 740 - 740;
        while (mqC31NVusfj < strlen (p7shfd) + 1) {
            if (!(' ' == p7shfd[mqC31NVusfj]) && p7shfd[mqC31NVusfj] != '\0')
                AMi56WVdBgL[zHgV3y0LalJ++] = p7shfd[mqC31NVusfj];
            else {
                AMi56WVdBgL[zHgV3y0LalJ] = '\0';
                if (!strcmp (AMi56WVdBgL, PfXAGD)) {
                    enWKuRNP1 = 0;
                    while (enWKuRNP1 < strlen (RYyZRJWagich)) {
                        o5LexctuT7O9[bOWSiu1vd++] = RYyZRJWagich[enWKuRNP1];
                        enWKuRNP1++;
                    };
                }
                else {
                    enWKuRNP1 = mqC31NVusfj - zHgV3y0LalJ;
                    while (enWKuRNP1 < mqC31NVusfj - zHgV3y0LalJ + strlen (AMi56WVdBgL)) {
                        o5LexctuT7O9[bOWSiu1vd++] = p7shfd[enWKuRNP1];
                        enWKuRNP1++;
                    };
                }
                zHgV3y0LalJ = 0;
            }
            if (p7shfd[mqC31NVusfj] == ' ')
                o5LexctuT7O9[bOWSiu1vd++] = p7shfd[mqC31NVusfj];
            mqC31NVusfj++;
        };
    }
    o5LexctuT7O9[bOWSiu1vd] = '\0';
    cout << o5LexctuT7O9 << endl;
    return 0;
}

