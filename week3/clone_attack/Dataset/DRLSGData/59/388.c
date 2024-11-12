int main () {
    int kB2lAio4egrp;
    int MWk7oUSXZ8;
    int a8C4M7Sq;
    int zhHn9I;
    int shro7d;
    char K53wWlVczRr [MWk7oUSXZ8] [MWk7oUSXZ8];
    cin >> MWk7oUSXZ8;
    shro7d = (76 - 76);
    for (kB2lAio4egrp = (177 - 177); MWk7oUSXZ8 > kB2lAio4egrp; kB2lAio4egrp = kB2lAio4egrp + 1) {
        {
            if ((415 - 415)) {
                return (881 - 881);
            }
        }
        cin >> K53wWlVczRr[kB2lAio4egrp];
    }
    cin >> a8C4M7Sq;
    for (; (402 - 401) < a8C4M7Sq;) {
        {
            kB2lAio4egrp = 0;
            {
                if (0) {
                    return 0;
                }
            }
            for (; kB2lAio4egrp < MWk7oUSXZ8;) {
                {
                    zhHn9I = 0;
                    for (; MWk7oUSXZ8 > zhHn9I;) {
                        if (K53wWlVczRr[kB2lAio4egrp][zhHn9I] == '@') {
                            if (!('.' != K53wWlVczRr[kB2lAio4egrp + 1][zhHn9I]) && kB2lAio4egrp + 1 < MWk7oUSXZ8)
                                K53wWlVczRr[kB2lAio4egrp + 1][zhHn9I] = '*';
                            if (!('.' != K53wWlVczRr[kB2lAio4egrp - 1][zhHn9I]) && 0 <= kB2lAio4egrp - 1)
                                K53wWlVczRr[kB2lAio4egrp - 1][zhHn9I] = '*';
                            if (!('.' != K53wWlVczRr[kB2lAio4egrp][zhHn9I + 1]) && MWk7oUSXZ8 > zhHn9I + 1)
                                K53wWlVczRr[kB2lAio4egrp][zhHn9I + 1] = '*';
                            if (!('.' != K53wWlVczRr[kB2lAio4egrp][zhHn9I - 1]) && 0 <= zhHn9I - 1)
                                K53wWlVczRr[kB2lAio4egrp][zhHn9I - 1] = '*';
                        }
                        zhHn9I = zhHn9I + 1;
                    }
                }
                kB2lAio4egrp++;
            }
        }
        {
            kB2lAio4egrp = 0;
            for (; kB2lAio4egrp < MWk7oUSXZ8;) {
                {
                    zhHn9I = 0;
                    for (; MWk7oUSXZ8 > zhHn9I;) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        if (K53wWlVczRr[kB2lAio4egrp][zhHn9I] == '*')
                            K53wWlVczRr[kB2lAio4egrp][zhHn9I] = '@';
                        zhHn9I = zhHn9I + 1;
                    }
                }
                kB2lAio4egrp++;
            }
        }
        a8C4M7Sq = a8C4M7Sq - 1;
    }
    {
        kB2lAio4egrp = 0;
        for (; kB2lAio4egrp < MWk7oUSXZ8;) {
            {
                zhHn9I = 0;
                for (; zhHn9I < MWk7oUSXZ8;) {
                    if (K53wWlVczRr[kB2lAio4egrp][zhHn9I] == '@')
                        shro7d = shro7d + 1;
                    zhHn9I++;
                }
            }
            kB2lAio4egrp++;
        }
    }
    cout << shro7d;
    return 0;
}

