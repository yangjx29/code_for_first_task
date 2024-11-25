void  mU47amVZ (int RMw1mp [11] [11], int Tmg2N0JH) {
    int T6utxg [11] [11] = {0};
    int M4xnChPQMJs, X4WCJD, qKAMVaO, Qo9LyJw4Q;
    {
        M4xnChPQMJs = (43 - 42);
        while (M4xnChPQMJs < (812 - 802)) {
            {
                X4WCJD = (556 - 555);
                while (X4WCJD < 10) {
                    {
                        qKAMVaO = M4xnChPQMJs -(581 - 580);
                        while (qKAMVaO <= M4xnChPQMJs +(322 - 321)) {
                            {
                                Qo9LyJw4Q = X4WCJD -(462 - 461);
                                while (Qo9LyJw4Q <= X4WCJD +1) {
                                    T6utxg[M4xnChPQMJs][X4WCJD] = T6utxg[M4xnChPQMJs][X4WCJD] + RMw1mp[qKAMVaO][Qo9LyJw4Q];
                                    Qo9LyJw4Q = Qo9LyJw4Q +1;
                                }
                            }
                            qKAMVaO = qKAMVaO + 1;
                        }
                    }
                    T6utxg[M4xnChPQMJs][X4WCJD] = T6utxg[M4xnChPQMJs][X4WCJD] + RMw1mp[M4xnChPQMJs][X4WCJD];
                    X4WCJD = X4WCJD +1;
                }
            }
            M4xnChPQMJs = M4xnChPQMJs +1;
        }
    }
    if (Tmg2N0JH == 1) {
        int RkHYVh7CRXOK = 1;
        while (RkHYVh7CRXOK < 10) {
            cout << T6utxg[RkHYVh7CRXOK][1];
            {
                int Zg1YFhmax8Iz = 2;
                while (Zg1YFhmax8Iz < 10) {
                    cout << " " << T6utxg[RkHYVh7CRXOK][Zg1YFhmax8Iz];
                    Zg1YFhmax8Iz = Zg1YFhmax8Iz +1;
                }
            }
            cout << endl;
            RkHYVh7CRXOK = RkHYVh7CRXOK +1;
        }
    }
    else
        mU47amVZ (T6utxg, Tmg2N0JH -1);
}

int main () {
    int hy6b7G, iekrZT2vXl8;
    int cMQzrJVZ6Lqg [11] [11] = {0};
    cin >> hy6b7G >> iekrZT2vXl8;
    cin.get ();
    cMQzrJVZ6Lqg[5][5] = hy6b7G;
    mU47amVZ (cMQzrJVZ6Lqg, iekrZT2vXl8);
    return 0;
}

