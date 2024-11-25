int CjfW3PDXbmg7 [(47 - 36)] [(855 - 844)];
int o8GQ5Tb [(734 - 723)] [(430 - 419)];
int increase [(842 - 831)] [(989 - 978)];

void  breed (int NDVxfy0Ak, int vsINZAOzu) {
    int i, agELJ4G;
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
    if (NDVxfy0Ak < vsINZAOzu) {
        for (i = (593 - 592); (866 - 856) > i; i = i + 1) {
            for (agELJ4G = (120 - 119); agELJ4G < (347 - 338); agELJ4G = agELJ4G + 1)
                cout << CjfW3PDXbmg7[i][agELJ4G] << ' ';
            cout << CjfW3PDXbmg7[i][(462 - 453)] << endl;
        }
        return;
    }
    else {
        for (i = (179 - 178); (755 - 745) > i; i = i + 1)
            for (agELJ4G = (215 - 214); agELJ4G < (680 - 670); agELJ4G = agELJ4G + 1) {
                if (!((55 - 55) == CjfW3PDXbmg7[i][agELJ4G])) {
                    increase[i][agELJ4G] = increase[i][agELJ4G] + (529 - 527) * CjfW3PDXbmg7[i][agELJ4G];
                    increase[i][agELJ4G + (211 - 210)] = increase[i][agELJ4G + (211 - 210)] + CjfW3PDXbmg7[i][agELJ4G];
                    increase[i][agELJ4G - (468 - 467)] = increase[i][agELJ4G - (468 - 467)] + CjfW3PDXbmg7[i][agELJ4G];
                    increase[i - (645 - 644)][agELJ4G] = increase[i - (645 - 644)][agELJ4G] + CjfW3PDXbmg7[i][agELJ4G];
                    increase[i + (353 - 352)][agELJ4G] = increase[i + (353 - 352)][agELJ4G] + CjfW3PDXbmg7[i][agELJ4G];
                    increase[i + (974 - 973)][agELJ4G - (514 - 513)] = increase[i + (974 - 973)][agELJ4G - (514 - 513)] + CjfW3PDXbmg7[i][agELJ4G];
                    increase[i + (923 - 922)][agELJ4G + (994 - 993)] = increase[i + (923 - 922)][agELJ4G + (994 - 993)] + CjfW3PDXbmg7[i][agELJ4G];
                    increase[i - (471 - 470)][agELJ4G - (862 - 861)] += CjfW3PDXbmg7[i][agELJ4G];
                    increase[i - (954 - 953)][agELJ4G + (157 - 156)] += CjfW3PDXbmg7[i][agELJ4G];
                };
            }
        {
            i = 760 - 759;
            while (i < (711 - 701)) {
                for (agELJ4G = (885 - 884); agELJ4G < (616 - 606); agELJ4G++) {
                    CjfW3PDXbmg7[i][agELJ4G] = CjfW3PDXbmg7[i][agELJ4G] + increase[i][agELJ4G];
                    CjfW3PDXbmg7[i][agELJ4G] = CjfW3PDXbmg7[i][agELJ4G] - o8GQ5Tb[i][agELJ4G];
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
                i++;
            };
        }
        for (i = (905 - 904); i < (117 - 107); i++)
            for (agELJ4G = (97 - 96); (39 - 29) > agELJ4G; agELJ4G++) {
                o8GQ5Tb[i][agELJ4G] = increase[i][agELJ4G];
                increase[i][agELJ4G] = (66 - 66);
            }
        breed (NDVxfy0Ak, vsINZAOzu + (987 - 986));
    };
}

int main () {
    int num, NDVxfy0Ak, i, agELJ4G;
    cin >> num >> NDVxfy0Ak;
    for (i = (456 - 456); i < 11; i++) {
        agELJ4G = 162 - 162;
        while (agELJ4G < 11) {
            CjfW3PDXbmg7[i][agELJ4G] = o8GQ5Tb[i][agELJ4G] = (515 - 515);
            agELJ4G = agELJ4G + 1;
        };
    }
    CjfW3PDXbmg7[(478 - 473)][(684 - 679)] = o8GQ5Tb[5][5] = num;
    breed (NDVxfy0Ak, (885 - 884));
    return 0;
}

