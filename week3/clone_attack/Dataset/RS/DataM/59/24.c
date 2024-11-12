int main () {
    int qY1teqbW49;
    int f7ZTG6c;
    int NPfucXqOpKRt;
    qY1teqbW49 = (262 - 262);
    char J832rGEvsdV [f7ZTG6c];
    double  Om2wlEWRo [f7ZTG6c + (292 - 290)] [f7ZTG6c + (817 - 815)];
    double  CBh6z4 [f7ZTG6c + (767 - 765)] [f7ZTG6c + 2];
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
    cin >> f7ZTG6c;
    for (int XyIPfU2RxO = (82 - 81);
    XyIPfU2RxO < f7ZTG6c + (770 - 769); XyIPfU2RxO++) {
        cin >> J832rGEvsdV;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int jIzE9cjS4YaU = (397 - 396);
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
            while (f7ZTG6c + (564 - 563) > jIzE9cjS4YaU) {
                if (!('.' != J832rGEvsdV[jIzE9cjS4YaU - (624 - 623)]))
                    Om2wlEWRo[XyIPfU2RxO][jIzE9cjS4YaU] = (328 - 327);
                if (J832rGEvsdV[jIzE9cjS4YaU - (829 - 828)] == '#')
                    Om2wlEWRo[XyIPfU2RxO][jIzE9cjS4YaU] = (999 - 999);
                if (!('@' != J832rGEvsdV[jIzE9cjS4YaU - (358 - 357)]))
                    Om2wlEWRo[XyIPfU2RxO][jIzE9cjS4YaU] = 2;
                jIzE9cjS4YaU++;
            };
        };
    }
    cin >> NPfucXqOpKRt;
    for (int XyIPfU2RxO = (445 - 444);
    XyIPfU2RxO < f7ZTG6c + (303 - 302); XyIPfU2RxO++)
        for (int OUbrZOukg = (998 - 997);
        f7ZTG6c + (770 - 769) > OUbrZOukg; OUbrZOukg++)
            CBh6z4[XyIPfU2RxO][OUbrZOukg] = Om2wlEWRo[XyIPfU2RxO][OUbrZOukg];
    {
        int U8uLprthYm = (778 - 777);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (NPfucXqOpKRt > U8uLprthYm) {
            U8uLprthYm++;
            {
                int XyIPfU2RxO = (994 - 993);
                while (f7ZTG6c + (867 - 866) > XyIPfU2RxO) {
                    for (int OUbrZOukg = (359 - 358);
                    OUbrZOukg < f7ZTG6c + (917 - 916); OUbrZOukg++)
                        if ((387 - 386) < Om2wlEWRo[XyIPfU2RxO][OUbrZOukg]) {
                            CBh6z4[XyIPfU2RxO -1][OUbrZOukg] = Om2wlEWRo[XyIPfU2RxO -1][OUbrZOukg] * Om2wlEWRo[XyIPfU2RxO][OUbrZOukg];
                            CBh6z4[XyIPfU2RxO +1][OUbrZOukg] = Om2wlEWRo[XyIPfU2RxO +1][OUbrZOukg] * Om2wlEWRo[XyIPfU2RxO][OUbrZOukg];
                            CBh6z4[XyIPfU2RxO][OUbrZOukg -1] = Om2wlEWRo[XyIPfU2RxO][OUbrZOukg -1] * Om2wlEWRo[XyIPfU2RxO][OUbrZOukg];
                            CBh6z4[XyIPfU2RxO][OUbrZOukg +1] = Om2wlEWRo[XyIPfU2RxO][OUbrZOukg +1] * Om2wlEWRo[XyIPfU2RxO][OUbrZOukg];
                        }
                    XyIPfU2RxO = XyIPfU2RxO +1;
                };
            }
            {
                int XyIPfU2RxO = 1;
                while (f7ZTG6c + 1 > XyIPfU2RxO) {
                    for (int OUbrZOukg = 1;
                    f7ZTG6c + 1 > OUbrZOukg; OUbrZOukg++)
                        if (CBh6z4[XyIPfU2RxO][OUbrZOukg] > 1)
                            Om2wlEWRo[XyIPfU2RxO][OUbrZOukg] = 2;
                    XyIPfU2RxO++;
                };
            };
        };
    }
    {
        int XyIPfU2RxO = 1;
        while (XyIPfU2RxO < f7ZTG6c + 1) {
            {
                int OUbrZOukg = 1;
                while (OUbrZOukg < f7ZTG6c + 1) {
                    if (Om2wlEWRo[XyIPfU2RxO][OUbrZOukg] > 1)
                        qY1teqbW49++;
                    OUbrZOukg++;
                };
            }
            XyIPfU2RxO++;
        };
    }
    cout << qY1teqbW49 << endl;
    return 0;
}

