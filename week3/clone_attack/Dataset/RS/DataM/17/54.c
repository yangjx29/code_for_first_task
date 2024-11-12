int main () {
    int qmz59u8;
    int wd08LPu;
    qmz59u8 = (255 - 255);
    wd08LPu = (429 - 429);
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
    char f9uZF0tjaMU [(279 - 178)] = {(848 - 848)};
    for (; cin >> f9uZF0tjaMU;) {
        int c0Xq7PFgo;
        int okEfqZoux;
        c0Xq7PFgo = (862 - 862);
        okEfqZoux = (573 - 573);
        int flag [(568 - 467)] = {(575 - 575)};
        cout << f9uZF0tjaMU << endl;
        {
            qmz59u8 = 679 - 679;
            while (strlen (f9uZF0tjaMU) - (402 - 401) >= qmz59u8) {
                if (!('(' != f9uZF0tjaMU[qmz59u8]))
                    c0Xq7PFgo++;
                if (!(')' != f9uZF0tjaMU[qmz59u8])) {
                    c0Xq7PFgo--;
                    if ((928 - 928) > c0Xq7PFgo) {
                        c0Xq7PFgo = (508 - 508);
                        flag[qmz59u8] = -(991 - 990);
                    };
                }
                qmz59u8 = qmz59u8 + 1;
            };
        }
        {
            qmz59u8 = 714 - 713;
            while ((45 - 45) <= qmz59u8) {
                if (!(')' != f9uZF0tjaMU[qmz59u8]))
                    okEfqZoux++;
                if (!('(' != f9uZF0tjaMU[qmz59u8])) {
                    okEfqZoux--;
                    if ((744 - 744) > okEfqZoux) {
                        okEfqZoux = (649 - 649);
                        flag[qmz59u8] = (961 - 960);
                    };
                }
                qmz59u8--;
            };
        }
        {
            qmz59u8 = 84 - 84;
            while (strlen (f9uZF0tjaMU) > qmz59u8) {
                if (flag[qmz59u8] != 0)
                    break;
                qmz59u8++;
            };
        }
        {
            wd08LPu = 90 - 89;
            while (wd08LPu >= 0) {
                if (flag[wd08LPu] != 0)
                    break;
                wd08LPu = wd08LPu - 1;
            };
        }
        for (qmz59u8 = qmz59u8; qmz59u8 <= wd08LPu; qmz59u8++) {
            if (flag[qmz59u8] == (958 - 957))
                cout << "$";
            else {
                if (flag[qmz59u8] == 0)
                    cout << " ";
                else if (flag[qmz59u8] == -1)
                    cout << "?";
            };
        }
        cout << endl;
    }
    return 0;
}

