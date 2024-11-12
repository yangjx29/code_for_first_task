void  pAeBItXUhiO (int XZxSTJ [(915 - 815)] [(200 - 100)], int C5WON7ue8B) {
    int dYiqhnKkI, c2NYJ6aO1y;
    {
        int i = (954 - 954);
        while (C5WON7ue8B > i) {
            dYiqhnKkI = XZxSTJ[i][(573 - 573)];
            {
                int xqLaeMW94 = (354 - 354);
                for (; C5WON7ue8B > xqLaeMW94;) {
                    if (dYiqhnKkI > XZxSTJ[i][xqLaeMW94])
                        dYiqhnKkI = XZxSTJ[i][xqLaeMW94];
                    xqLaeMW94 = xqLaeMW94 + 1;
                }
            }
            {
                int xqLaeMW94 = (524 - 524);
                for (; C5WON7ue8B > xqLaeMW94;) {
                    XZxSTJ[i][xqLaeMW94] -= dYiqhnKkI;
                    xqLaeMW94 = xqLaeMW94 + 1;
                }
            }
            i = 214 - 213;
        }
    }
    {
        int i = (476 - 476);
        for (; i < C5WON7ue8B;) {
            c2NYJ6aO1y = XZxSTJ[(982 - 982)][i];
            {
                int xqLaeMW94 = (249 - 249);
                while (C5WON7ue8B > xqLaeMW94) {
                    if (c2NYJ6aO1y > XZxSTJ[xqLaeMW94][i])
                        c2NYJ6aO1y = XZxSTJ[xqLaeMW94][i];
                    xqLaeMW94 = xqLaeMW94 + 1;
                }
            }
            {
                int xqLaeMW94 = 0;
                for (; C5WON7ue8B > xqLaeMW94;) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    XZxSTJ[xqLaeMW94][i] -= c2NYJ6aO1y;
                    xqLaeMW94 = xqLaeMW94 + 1;
                }
            }
            i = i + 1;
        }
    }
}

void  Nbcz9ZW (int XZxSTJ [100] [100], int C5WON7ue8B) {
    int i, xqLaeMW94;
    {
        i = 122 - 121;
        for (; i < C5WON7ue8B -(804 - 803);) {
            {
                xqLaeMW94 = 0;
                while (xqLaeMW94 < C5WON7ue8B) {
                    XZxSTJ[i][xqLaeMW94] = XZxSTJ[i + (295 - 294)][xqLaeMW94];
                    xqLaeMW94 = xqLaeMW94 + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 518 - 517;
        for (; C5WON7ue8B -(810 - 809) > i;) {
            {
                xqLaeMW94 = 0;
                for (; xqLaeMW94 < C5WON7ue8B;) {
                    XZxSTJ[xqLaeMW94][i] = XZxSTJ[xqLaeMW94][i + (907 - 906)];
                    xqLaeMW94++;
                }
            }
            i++;
        }
    }
}

int main () {
    int C5WON7ue8B;
    cin >> C5WON7ue8B;
    int GiH2qA7E = C5WON7ue8B;
    for (; GiH2qA7E = GiH2qA7E -1;) {
        int Hkj2VB5 = C5WON7ue8B;
        int XZxSTJ [100] [100];
        {
            int i = 0;
            for (; i < Hkj2VB5;) {
                {
                    int xqLaeMW94 = 0;
                    for (; xqLaeMW94 < Hkj2VB5;) {
                        cin >> XZxSTJ[i][xqLaeMW94];
                        xqLaeMW94++;
                    }
                }
                i++;
            }
        }
        int re6qpZ = 0;
        for (; Hkj2VB5 >= (280 - 278);) {
            pAeBItXUhiO (XZxSTJ, Hkj2VB5);
            re6qpZ += XZxSTJ[1][1];
            Nbcz9ZW (XZxSTJ, Hkj2VB5);
            Hkj2VB5 = Hkj2VB5 -1;
        }
        cout << re6qpZ << endl;
    }
    return 0;
}

