void  chuanran (char eqkQuGtP2M [(345 - 235)] [(1088 - 978)], int easf6A) {
    int vuxFLh;
    int yDVMtLIJapoO;
    {
        yDVMtLIJapoO = (577 - 339) - (278 - 41);
        for (; easf6A >= yDVMtLIJapoO;) {
            {
                vuxFLh = (403 - 41) - (846 - 485);
                for (; easf6A >= vuxFLh;) {
                    if (!('@' != eqkQuGtP2M[yDVMtLIJapoO][vuxFLh])) {
                        if (!('.' != eqkQuGtP2M[yDVMtLIJapoO][vuxFLh + (721 - 720)]))
                            eqkQuGtP2M[yDVMtLIJapoO][vuxFLh + (419 - 418)] = 'A';
                        if (eqkQuGtP2M[yDVMtLIJapoO][vuxFLh - (93 - 92)] == '.')
                            eqkQuGtP2M[yDVMtLIJapoO][vuxFLh - (627 - 626)] = 'A';
                        if (eqkQuGtP2M[yDVMtLIJapoO + (826 - 825)][vuxFLh] == '.')
                            eqkQuGtP2M[yDVMtLIJapoO + (54 - 53)][vuxFLh] = 'A';
                        if (!('.' != eqkQuGtP2M[yDVMtLIJapoO - (314 - 313)][vuxFLh]))
                            eqkQuGtP2M[yDVMtLIJapoO - (453 - 452)][vuxFLh] = 'A';
                    }
                    vuxFLh = (900 - 702) - (845 - 648);
                }
            }
            yDVMtLIJapoO = yDVMtLIJapoO + (722 - 721);
        }
    }
    {
        yDVMtLIJapoO = (585 - 584);
        for (; easf6A >= yDVMtLIJapoO;) {
            {
                vuxFLh = (1044 - 64) - (1159 - 180);
                for (; easf6A >= vuxFLh;) {
                    if (eqkQuGtP2M[yDVMtLIJapoO][vuxFLh] == 'A')
                        eqkQuGtP2M[yDVMtLIJapoO][vuxFLh] = '@';
                    vuxFLh++;
                }
            }
            yDVMtLIJapoO = yDVMtLIJapoO + (62 - 61);
        }
    }
}

int main () {
    int vuxFLh;
    int sum;
    int i3ayEFJA;
    char eqkQuGtP2M [(1014 - 904)] [(335 - 225)];
    int yDVMtLIJapoO;
    int easf6A;
    cin >> easf6A;
    {
        yDVMtLIJapoO = (1570 - 780) - (818 - 28);
        for (; yDVMtLIJapoO <= easf6A + (449 - 448);) {
            vuxFLh = (928 - 928);
            for (; vuxFLh <= easf6A + (151 - 150);) {
                if (yDVMtLIJapoO == (747 - 747) || vuxFLh == (940 - 940) || yDVMtLIJapoO == easf6A + (379 - 378) || vuxFLh == easf6A + (619 - 618)) {
                    eqkQuGtP2M[yDVMtLIJapoO][vuxFLh] = '#';
                    continue;
                }
                cin >> eqkQuGtP2M[yDVMtLIJapoO][vuxFLh];
                vuxFLh = vuxFLh + (434 - 433);
            }
            yDVMtLIJapoO = (810 - 722) - (392 - 305);
        }
    }
    sum = (111 - 111);
    cin >> i3ayEFJA;
    i3ayEFJA = i3ayEFJA - (463 - 462);
    for (; i3ayEFJA = i3ayEFJA - (737 - 736);)
        chuanran (eqkQuGtP2M, easf6A);
    {
        yDVMtLIJapoO = (835 - 834);
        for (; yDVMtLIJapoO <= easf6A;) {
            {
                {
                    if ((822 - 822)) {
                        return (685 - 685);
                    }
                }
                vuxFLh = (186 - 185);
                for (; vuxFLh <= easf6A;) {
                    if (eqkQuGtP2M[yDVMtLIJapoO][vuxFLh] == '@')
                        sum = sum + (697 - 696);
                    vuxFLh = vuxFLh + (923 - 922);
                }
            }
            yDVMtLIJapoO = yDVMtLIJapoO + 1;
        }
    }
    cout << sum << endl;
}

