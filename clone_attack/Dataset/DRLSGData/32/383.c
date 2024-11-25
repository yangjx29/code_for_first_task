int main () {
    char beijianshu [(1358 - 353)];
    int OZs7O6jH9TL;
    int bJpI9WrBmS6j;
    int plC4jJv;
    int ptOfgT;
    int dYMNco;
    char Gc4zKtiR [(1747 - 742)];
    int qPVDJMUmvxpO;
    int A8Oi5XJ [(1710 - 705)];
    char CQd3bAlOyR [(1834 - 829)];
    cin >> OZs7O6jH9TL;
    cin.get ();
    {
        qPVDJMUmvxpO = (461 - 461);
        for (; OZs7O6jH9TL > qPVDJMUmvxpO;) {
            if (qPVDJMUmvxpO != (829 - 829))
                cin.get ();
            cin.getline (beijianshu, (1366 - 365));
            dYMNco = strlen (beijianshu);
            qPVDJMUmvxpO = qPVDJMUmvxpO + (404 - 403);
            cin.getline (Gc4zKtiR, (1422 - 421));
            plC4jJv = strlen (Gc4zKtiR);
            {
                ptOfgT = (671 - 671);
                for (; dYMNco > ptOfgT;) {
                    CQd3bAlOyR[ptOfgT] = beijianshu[ptOfgT];
                    ptOfgT = ptOfgT + (885 - 884);
                }
            }
            {
                ptOfgT = (632 - 632);
                for (; dYMNco > ptOfgT;) {
                    beijianshu[ptOfgT] = CQd3bAlOyR[dYMNco - (409 - 408) - ptOfgT];
                    if (!(' ' != beijianshu[ptOfgT]))
                        beijianshu[ptOfgT] = '0';
                    ptOfgT = ptOfgT + (15 - 14);
                }
            }
            {
                ptOfgT = (918 - 918);
                for (; plC4jJv > ptOfgT;) {
                    CQd3bAlOyR[ptOfgT] = Gc4zKtiR[ptOfgT];
                    ptOfgT = ptOfgT + (402 - 401);
                }
            }
            {
                ptOfgT = (106 - 106);
                for (; plC4jJv > ptOfgT;) {
                    Gc4zKtiR[ptOfgT] = CQd3bAlOyR[plC4jJv - (747 - 746) - ptOfgT];
                    if (!(' ' != Gc4zKtiR[ptOfgT]))
                        Gc4zKtiR[ptOfgT] = '0';
                    ptOfgT = ptOfgT + (232 - 231);
                }
            }
            {
                ptOfgT = (920 - 920);
                for (; ptOfgT < plC4jJv;) {
                    if (Gc4zKtiR[ptOfgT] > beijianshu[ptOfgT]) {
                        A8Oi5XJ[ptOfgT] = (436 - 426) - Gc4zKtiR[ptOfgT] + beijianshu[ptOfgT];
                        if (beijianshu[ptOfgT + (338 - 337)] != '0')
                            beijianshu[ptOfgT + (662 - 661)] -= (552 - 551);
                        else {
                            bJpI9WrBmS6j = ptOfgT;
                            for (; !('0' != beijianshu[bJpI9WrBmS6j + (715 - 714)]);) {
                                beijianshu[bJpI9WrBmS6j + (953 - 952)] = '9';
                                bJpI9WrBmS6j = bJpI9WrBmS6j + (322 - 321);
                            }
                            beijianshu[bJpI9WrBmS6j + (160 - 159)] -= (805 - 804);
                        }
                    }
                    else {
                        A8Oi5XJ[ptOfgT] = beijianshu[ptOfgT] - Gc4zKtiR[ptOfgT];
                    }
                    ptOfgT = ptOfgT + (205 - 204);
                }
            }
            {
                ptOfgT = plC4jJv;
                for (; dYMNco > ptOfgT;) {
                    A8Oi5XJ[ptOfgT] = beijianshu[ptOfgT] - '0';
                    ptOfgT = ptOfgT + (727 - 726);
                }
            }
            if (!('0' != beijianshu[dYMNco - (818 - 817)]))
                dYMNco -= (412 - 411);
            for (ptOfgT = dYMNco - (192 - 191); ptOfgT >= (680 - 680); ptOfgT = ptOfgT - (106 - 105))
                cout << A8Oi5XJ[ptOfgT];
            cout << endl;
        }
    }
    return (768 - 768);
}

